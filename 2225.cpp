#include <iostream>

using namespace std;

long long dp[201][201];
long long number = 1000000000;
int main(int argc, char **argv)
{
    int n, k;
    cin >> n >> k;

    for(int i = 0; i <= k; i++)
    {
        dp[1][i] = i;
    }
    
    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % number;
        }
    }

    cout<< dp[n][k] << endl;

    return 0;
}