#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int dp[1000];
int main(int argc, char **argv)
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> dp[i];
    }

    for (int i = 1; i < num; i++)
    {
        for (int j = 0; j <= i / 2; j++)
        {
            int data = 0;
            data = dp[j] + dp[i - j - 1];

            if (data > dp[i])
                dp[i] = data;
        }
    }

    cout << dp[num - 1] << endl;
    return 0;
}