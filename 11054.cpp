#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> dp(1001, 1);
vector<int> rdp(1001, 1);
int d[1001];
int main(int argc, char **argv)
{
    int num;
    cin >> num;

    for(int i = 0; i < num; i++)
        cin >> d[i];

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(d[i] > d[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    for(int i = num -1; 0 <= i; i--)
    {
        for(int j = num -1; i < j; j--)
        {
            if(d[i] > d[j])
                rdp[i] = max(rdp[i], rdp[j] + 1);
        }
    }

    int ret = 0;
    for(int i = 0; i < num; i++)
        ret = max(ret, dp[i] + rdp[i] - 1);

    cout << ret << endl;
    return 0;
}