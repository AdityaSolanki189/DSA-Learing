#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <strings.h>

using namespace std;

int LCS_DP(string first, string second, string third, int m, int n, int o) {
	vector<vector<vector<int>>> Longest(m + 1,vector<vector<int>>(n + 1,vector<int>(o + 1)));
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			for (int k = 0; k <= o; k++) {
				if (i == 0 || j == 0 || k == 0) {
					Longest[i][j][k] = 0;
					continue;
				}
				else if (first[i - 1] == second[j - 1] && first[i - 1] == third[k - 1]) {
					Longest[i][j][k] = Longest[i - 1][j - 1][k - 1] + 1;
					continue;
				}
				else {
					Longest[i][j][k] = max( max(Longest[i - 1][j][k], Longest[i][j - 1][k]),Longest[i][j][k - 1]);
				}
			}
		}
	}
	return Longest[m][n][o];
}
int main() {
	int m, n, o;
	string first = "", second = "",third = "";

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

    cin >> o;
    for (size_t i = 0; i < n; i++) {
		cin >> Temp;
		third += Temp;
	}
    
	cout << LCS_DP(first, second, third, m, n, o) << endl;

    return 0;
}

