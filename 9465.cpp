#include <iostream>
#include <cmath>

using namespace std;

int d[2][100001];
int dp[2][100001];
int main(int argc, char **argv)
{
    int T, N;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        cin >> N;

        for(int j = 1; j <= N; j++)
        {
            cin >>d[0][j];
        }

        for(int j = 1; j <= N; j++)
        {
            cin >>d[1][j];
        }

        dp[0][1] = d[0][1];
        dp[1][1] = d[1][1];

        for(int j = 2; j <= N; j++)
        {
            dp[0][j] = max(dp[1][j - 2], dp[1][j - 1]) + d[0][j];
            dp[1][j] = max(dp[0][j - 2], dp[0][j - 1]) + d[1][j];
        }

        cout<< max(dp[0][N], dp[1][N])<<endl;
    }

    return 0;
}