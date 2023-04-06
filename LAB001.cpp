#include <bits/stdc++.h>
#include "./headerFiles/timer.h"
#include "./headerFiles/random.h"
#include "./headerFiles/myAuxFunctions.h"

using namespace std;

int strToInt(char *str)
{
    int result = 0;

    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        ++str;
    }
    return result;
}

int main(int argc, char *argv[])
{
    myRandom random;
    int i,l=0;
    if (argc == 2)
    {
        int j = 0, k = 0;
        int arg1 = strToInt(argv[1]);
        int arg2 = strToInt(argv[2]);
        do{
         ofstream file;
         for(i=0;i<arg2;i++){
        file.open("NUM-0"+to_string(i)+".txt");
        if (!file)
        {
            cout << "File creation failed" << endl;
        }
        else
        {
            cout << "New file created" << endl;
        }
            cout << arg1 << endl;
            for (j = 0; j < argc; j++)
            {
                for (k = 0; k < arg2; k++)
                {
                }
                file << arg1 << endl
                     << endl;
                for (j = 0; j < arg1; j++)
                {
                    file << random.getVal() << endl;
                }
                file << endl
                     << endl;
            }
            arg2--;
            // file.close;
         }
        } while (l < arg2);
    }

return 0;
}

// Taking arguments and looping them to convert them to int to
//  take CLI arguments as input.

// for (i = 1; i < argc + 1; i++)
// {
//     int number = strToInt(argv[i]);
//     if (number == 0)
//     {
//         cout << "Bad Input! Please enter the correct input!" << endl;
//     }
//     else
//     {
//         cout << "the converted string is:" << number << endl;
//     }
// }
// take input arg 1 and convert it into int and then