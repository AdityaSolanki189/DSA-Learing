#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int major(int a[], int n)
{
    map<int, int> freq;
    for (int i = 0; i < n; i++)
        freq[a[i]]++;

    for (int i = 0; i < n; i++)
        if (freq[a[i]] > (n / 2))
            return 1;

    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << major(arr, n) << endl;
    return 0;
}