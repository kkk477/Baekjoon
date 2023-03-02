#include <iostream>
#include <cmath>

using namespace std;

int dp[100];
int main(int argc, char **argv)
{
    int num;
    cin >> num;

    dp[0] = 9;

    for(int i = 1; i < num; i++)
    {
        dp[i] = 2 * dp[i - 1] - pow(2, i - 1);
        dp[i] %= 1000000000;
    }

    cout << dp[num - 1] << endl;
    return 0;
}