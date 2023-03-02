#include <iostream>

using namespace std;

long long dp[91][2];
int main(int argc, char **argv)
{
    int num;
    cin >> num;

    dp[1][0] = 0;
    dp[1][1] = 1;

    for (int i = 2; i <= num; i++)
    {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];

        dp[i][1] = dp[i - 1][0];
    }

    cout << dp[num][0] + dp[num][1] << endl;
    return 0;
}