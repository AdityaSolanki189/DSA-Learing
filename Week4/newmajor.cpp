#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int Maj(vector<int> Arr, int n)
{
    map<int, int> Freq;
    for (size_t i = 0; i < n; i++)
        Freq[Arr[i]]++;

    for (int i = 0; i < n; i++)
        if (Freq[Arr[i]] > (n / 2))
            return 1;

    return 0;
}
int main()
{
    int n;
    cin >> n;

    vector<int> Arr(n);
    for (size_t i = 0; i < n; i++)
        cin >> Arr[i];

    cout << Maj(Arr, n) << endl;
}