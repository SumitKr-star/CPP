#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int count[26] = {0};  

    if (argc < 2)
    {
        cout << "Please enter text as command line argument.";
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        int j = 0;

        
        while (argv[i][j] != '\0')
        {
            char ch = argv[i][j];

            
            if (ch >= 'A' && ch <= 'Z')
            {
                count[ch - 'A']++;
            }
            
            else if (ch >= 'a' && ch <= 'z')
            {
                count[ch - 'a']++;
            }

            j++;
        }
    }

    
    cout << "Alphabet occurrences:\n";
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            cout << char(i + 'A') << " = " << count[i] << endl;
        }
    }

    return 0;
}
