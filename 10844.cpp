#include <iostream>
#include <cmath>

using namespace std;

long long dp[101][10];
int main(int argc, char **argv)
{
    int num;
    cin >> num;

    for (int i = 1; i <= 9; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= num; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            long long a = 0, b = 0;
            if (j == 0)
            {
                a = 0;
                b = dp[i - 1][j + 1];
            }
            else if (j == 9)
            {
                a = dp[i - 1][j - 1];
                b = 0;
            }
            else
            {
                a = dp[i - 1][j - 1];
                b = dp[i - 1][j + 1];
            }
            dp[i][j] = (a + b) % 1000000000;
        }
    }

    cout << (dp[num][0] + dp[num][1] + dp[num][2] + dp[num][3] + dp[num][4] + dp[num][5] + dp[num][6] + dp[num][7] + dp[num][8] + dp[num][9]) % 1000000000<< endl;
    return 0;
}