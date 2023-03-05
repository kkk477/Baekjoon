#include <iostream>
#include <cmath>

using namespace std;

int d[10001];
int dp[10001];
int main(int argc, char **argv)
{
    int T, N;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> d[i];
    }

    dp[1] = d[1];
    dp[2] = d[1] + d[2];

    for (int i = 3; i <= T; i++)
    {
        dp[i] = max(dp[i - 3] + d[i - 1] + d[i], max(dp[i - 2] + d[i], dp[i - 1]));
    }

    cout << dp[T] << endl;
    return 0;
}