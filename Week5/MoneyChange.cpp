#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int CountMinWays(int Coins[], int n, int Money) {
	vector<int> Ways(Money + 1, INT_MAX);
	Ways[0] = 0;
	for (int i = 1; i <= Money; i++) {
		for (int c = 0; c < n; c++) {
			if (i >= Coins[c]) {
				int sub_res = Ways[i - Coins[c]];
				if (sub_res != INT_MAX && sub_res + 1 < Ways[i])
					Ways[i] = sub_res + 1;
			}
		}
	}
	return Ways[Money];
}

int main() {
	int M; 
	cin >> M; 
	int Coins[3] = { 1,3,4 };
	cout << CountMinWays(Coins, 3, M) << endl;
    return 0;
}