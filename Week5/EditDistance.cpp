#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <strings.h>

using namespace std;

int EditDistDP(string str1,string str2,int n,int m){
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0)
				dp[i][j] = j;

			else if (j == 0)
				dp[i][j] = i;

			else if (str1[i - 1] == str2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];

			else
				dp[i][j] = 1 + min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]);
		}
	}
    return dp[m][n];
}

int main(){
    string str1="",str2="";
    cin>>str1>>str2;
    cout<<EditDistDP(str1,str2,str1.size(),str2.size())<<endl;
    return 0;
}