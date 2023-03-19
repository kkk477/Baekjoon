#include <iostream>
#include <algorithm>

using namespace std;

long long dp[101];
int main(int argc, char **argv)
{
    int num;
    cin >> num;
    cin.ignore();

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for(int i = 0; i < num; i++)
    {
        int cnt = 0;

        cin>> cnt;
        cin.ignore();

        for(int j = 4; j <= cnt; j++)
        {
            dp[j] = dp[j - 3] + dp[j - 2];
        }

        cout<< dp[cnt] << endl;
    }

    return 0;
}