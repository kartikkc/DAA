#include <bits/stdc++.h>
#include "headerFiles/timer.h"

using namespace std;

void insertion(long long int arr[], int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        long long int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    long long int num;
    int i = 0, k = 0, j = 0, m = 0;
    long long int array[1000];
    int arr[] = {5, 10, 20, 100, 500, 1000, 2500, 10000, 25000, 50000, 75000, 100000};
    int n = sizeof(arr) / sizeof(arr[0]);
    ofstream output("output.txt");
    for (i = 0; i < 11; i++)
    {
        ifstream unsort("NUM-0" + to_string(i) + "-00005.txt");
        for (j = 0; j < arr[1]; j++)
        {
            unsort >> m;
            array[1000] = m;
        }
        insertion(array, arr[1]);
        for (k = 0; k < arr[i] ; k++)
        {
            cout << array << endl;
        }
    }
    return 0;
}