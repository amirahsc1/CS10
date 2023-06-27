#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <cmath>


using namespace std;

void removeLeadingNumbers(string& str);
void removeSpace(string& str);
void removeDashes(string& str);
void addSpace(string& str);
void moveArticles(string& str);
void moveComposerNames(string& str);
void interchangeComposerNames(string& str);
void reformat(string mList[], int size);
void output(string mList[], int size);


int main()
{
  string musicList[23] = {
        "1. Adagio \"MoonLight\" Sonata - Ludwig Van Beethoven","2. An    Alexis - F.H. Hummel and J.N. Hummel",
  "3. A La    Bien Aimee - Ben Schutt","4. At    Sunset -    E. MacDowell","5. Angelus - J. Massenet",
  "6. Anitra's Dance - Edward Grieg","7. Ase's Death - Edward Grieg","8. Au Matin- Benj.- Godard",
  "37. The Dying Poet - L. Gottschalk","38. Dead March - G.F. Handel","39. Do They Think of Me At Home - Chas. W. Glover",
  "40. The Dearest Spot - W.T. Wrighton","1. Evening - L. Van Beethoven","2. Embarrassment - Franz Abt",
  "3. Erin is my Home - no author listed","4. Ellen Bayne - Stephen C. Foster","5. Alla Mazurka - A. Nemerowsky",
  "6. The Dying Volunteer - A.E. Muse","7. Dolly Day - Stephen C. Foster","8. Dolcy Jones- Stephen C. Foster",
  "9. Dickory, Dickory, Dock - no author listed","10. The Dear Little Shamrock - no author listed",
  "11. Dutch Warbler- no author listed"};

    reformat(musicList, 23);
    output(musicList, 23);

    return 0;
}

void interchangeComposerNames(string& str)
{
    if (str.find("no author listed") == -1)
    {
        int pos = str.find("-");
        pos = str.find_last_of(" ", pos - 2);

        if (pos >= 0)
        {
            string halfOfName = str.substr(0, pos);
            str.erase(0, pos + 1);
            pos = str.find("-");
            str.insert(pos, halfOfName + " ");
        }
    }
}

void moveComposerNames(string& str)
{
    int pos = str.find("-"), size = str.length();
    string composer = str.substr(pos + 2, size - (pos + 2));
    str.erase(pos + 2, size - (pos + 2));
    str.insert(0, composer + " - ");
    str.erase(str.rfind("-"), 1);
}

void moveArticles(string& str)
{
    int pos;
    if ((pos = str.find("A ")) >= 0)
    {
        str.erase(pos, 2);
        pos = str.find("-");
        str.insert(pos, "A ");
        pos = str.find("-");
        str.insert(pos - 3, ",");
    }
    else if ((pos = str.find("An ")) >= 0)
    {
        str.erase(pos, 3);
        pos = str.find("-");
        str.insert(pos, "An ");
        pos = str.find("-");
        str.insert(pos - 4, ",");
    }
    else if ((pos = str.find("The ")) >= 0)
    {
        str.erase(pos, 4);
        pos = str.find("-");
        str.insert(pos, "The ");
        pos = str.find("-");
        str.insert(pos - 5, ",");
    }
}

void addSpace(string& str)
{
    int pos = str.find("-");
    if (!isspace(str[pos - 1]))
        str.insert(pos, " ");
}

void removeDashes(string& str)
{
    int lastOccurence = str.rfind("-");
    for (int i = 0; i < lastOccurence; i++)
    {
        if (str[i] == '-')
            str.replace(i, 1, " ");
    }
}

void removeSpace(string& str)
{
    for (int i = str.length() - 1; i > 0; i--)
    {
        if (isspace(str[i]) && isspace(str[i - 1]))
            str.erase(i, 1);
    }
}

void removeLeadingNumbers(string& str)
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    str.erase(0, str.find_first_of(alphabet));
}

void reformat(string mList[], int size)
{
    for (int i = 0; i < size; i++)
    {
        removeLeadingNumbers(mList[i]);
        removeSpace(mList[i]);
        removeDashes(mList[i]);
        addSpace(mList[i]);
        moveArticles(mList[i]);
        moveComposerNames(mList[i]);
        interchangeComposerNames(mList[i]);
    }

}

void output(string mList[], int size)
{
    cout<<"\nAlphabetized list of composers/song titles\n";
    cout<<"------------------------------------------\n\n";
    for (int i = 0; i < size; i++)
        cout<<mList[i]<<endl<<endl;
}
