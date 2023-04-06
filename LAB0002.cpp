#include <bits/stdc++.h>
#include "../headerFiles/myAuxFunctions.h"
#include "../headerFiles/random.h"
#include "../headerFiles/timer.h"

using namespace std;

int strToInt(char *str)
{

    int result = 0;

    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "Please specify the argument with executable!" << endl;
    }
    if (argc = 2)
    {
        int i = 0;
        int arg1 = strToInt(argv[1]);
        myRandom random;
        myTimer timer;
        ofstream file;
        timer.StartTimer();
        file.open("NUM-01-0000" + to_string(arg1) + ".txt");
        file << arg1 << endl
             << endl;
        for (i = 0; i < arg1; i++)
        {
            file << random.getVal() << endl;
        }
        file.close();
        timer.EndTimer();
        cout<<"Average Time Taken: "<<timer.GetInterval()<<" seconds"<<endl;
    }
    if (argc = 3)
    {
        int i = 0, j = 0, k = 0, l = 0, m = 0;
        int arg1 = strToInt(argv[1]);
        int arg2 = strToInt(argv[2]);
        myRandom random;
        myTimer timer;
        ofstream file;
        timer.StartTimer();
        for (int j = 0; j < arg2; j++)
        {
            file.open("NUM-0" + to_string(j + 1) + "-0000" + to_string(arg1) + ".txt");
            file << arg1 << endl
                 << endl;
            for (int i = 0; i < arg1; i++)
            {
                file << random.getVal() << endl;
            }
            file.close();
        }
            timer.EndTimer();
            cout<<"Average Time Taken: "<<timer.GetInterval()<<" seconds"<<endl;
    }
    if (argc == 4)
    {
        int i = 0, j = 0, k = 0, l = 0, m = 0;
        int arg1 = strToInt(argv[1]);
        int arg2 = strToInt(argv[2]);
        unsigned long arg3 = strToInt(argv[3]);
        myRandom random;
        myTimer timer;
        ofstream file;
        timer.StartTimer();
        random.setSeed(arg3);
        for (int j = 0; j < arg2; j++)
        {
            file.open("NUM-0" + to_string(j+1) + "-0000" + to_string(arg1) + ".txt");
            file << arg1 << endl
                 << endl;
            for (int i = 0; i < arg1; i++)
            {
                file << random.getVal() << endl;
            }
            file.close();
        }
        timer.EndTimer();
        cout<<"Average Time Taken: "<<timer.GetInterval()<<" seconds"<<endl;
    }
    return 0;
}