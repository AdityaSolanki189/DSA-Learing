#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <strings.h>

using namespace std;

int LCS_DP(string first, string second, int m, int n) {
	vector<vector<int>> Longest(m + 1,vector<int>(n + 1));
	int i, j;
	for (i = 0; i <= m; i++){
		for (j = 0; j <= n; j++){
			if (i == 0 || j == 0)
				Longest[i][j] = 0;

			else if (first[i - 1] == second[j - 1])
				Longest[i][j] = Longest[i - 1][j - 1] + 1;

			else
				Longest[i][j] = max(Longest[i - 1][j], Longest[i][j - 1]);
		}
	}
	return Longest[m][n];
}
int main() {
	int m, n;
	string first = "", second = "";
	cin >> m;
	int Temp;
	for (size_t i = 0; i < m; i++) {
		cin >> Temp;
		first += Temp;
	}
	cin >> n;
	for (size_t i = 0; i < n; i++) {
		cin >> Temp;
		second += Temp;
	}
	cout << LCS_DP(first, second, m, n) << endl;
    return 0;
}

