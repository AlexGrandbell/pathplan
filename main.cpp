#include <iostream>
#include <vector>

using namespace std;

//网状路网路径条数
//一个机器人只能向下和向右移动，每次只能移动一步，设计一个算法求机器人从（1,1）到（m，n）有多少条路径。
int pathNum(int m, int n) {
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    dp[1][1] = 1;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m][n];
}

int main() {
    int m,n;
    cin >> m >> n;
    cout << pathNum(m, n) << endl;
    return 0;
}
