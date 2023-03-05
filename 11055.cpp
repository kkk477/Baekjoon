#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> dp(1001, 0);
int d[1001];
int main(int argc, char **argv)
{
    int num;
    cin >> num;

    for(int i = 0; i < num; i++)
        cin >> d[i];

    for(int i = 0; i < num; i++)
        dp[i] = d[i];

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(d[i] > d[j])
                dp[i] = max(dp[i], dp[j] + d[i]);
        }
    }

    int ret = 0;
    for(int i = 0; i < num; i++)
        ret = max(ret, dp[i]);

    cout << ret << endl;
    return 0;
}