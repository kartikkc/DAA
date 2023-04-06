#include <bits/stdc++.h>
#include "headerFiles/timer.h"
using namespace std;

void BubbleSort(long long int arr[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        int j;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                long long int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int array[] = {5, 10, 20, 100, 500, 1000, 2500, 10000, 25000, 50000, 75000, 100000};
    myTimer timer;
    int n = 7;
    long long int arr[6];
    long long int m;
    int i;
    int j = 0;
    ofstream sort("output.txt");
    timer.StartTimer();
    for (int l = 0; l < 10; l++)
    {
        for (int k = 1; k < 11; k++)
        {

            ifstream unsort("NUM-0" + to_string(k) + "-0000" + to_string(array[l]) + ".txt");
            for (i = 0; i < n; i++)
            {
                unsort >> m;
                arr[i] = m;
            }
            BubbleSort(arr, 6);
            for (int z = 1; z < 6; z++)
            {
                sort << arr[z] << endl;
            }
            sort << endl;
        }
    }
    timer.EndTimer();
    cout << timer.GetInterval() << endl;
    return 0;
}
