#include <iostream>
#include <algorithm>

using namespace std;

int dp[100001];
int main(int argc, char **argv)
{
    int num;
    cin >> num;
    
    for(int i = 1; i <= num; i++)
        dp[i] = i;

    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j*j <= i; j++)
            dp[i] = min(dp[i], dp[i - j*j] + 1);
    }

    cout<<dp[num]<<endl;
    return 0;
}