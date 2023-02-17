#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int wordCount = 0;
    bool inWord = false;

    cout << "Enter a line of text: ";
    getline(cin, text);

    for (char c : text)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            inWord = false;
        }
        else if (!inWord)
        {
            wordCount++;
            inWord = true;
        }
    }

    cout << "The number of words in the line is: " << wordCount << endl;

    return 0;
}
