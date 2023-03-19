#include <iostream>
#include <cmath>

using namespace std;

int dp[100001];
int d[100001];
int main(int argc, char **argv)
{
    int num;
    cin >> num;

    int ret = -1001;

    for(int i = 1; i <= num; i++)
        cin >> d[i];

    for(int i = 1; i <= num; i++)
    {
        dp[i] = max(dp[i - 1] + d[i], d[i]);
        ret = max(ret, dp[i]);
    }

    cout<< ret << endl;
    return 0;
}