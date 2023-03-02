#include <iostream>
#include <cmath>

using namespace std;

long long dp[1001][10];
int main(int argc, char **argv)
{
    int num;
    cin >> num;

    for (int i = 0; i <= 9; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= num; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for(int k = 0; k <= j; k++)
            {
                dp[i][j] += dp[i - 1][k] % 10007;
            }

        }
    }

    cout << (dp[num][0] + dp[num][1] + dp[num][2] + dp[num][3] + dp[num][4] + dp[num][5] + dp[num][6] + dp[num][7] + dp[num][8] + dp[num][9]) % 10007<< endl;
    return 0;
}