#include <iostream>
#include <cmath>

using namespace std;

int dp[301];
int d[301];
int main(int argc, char **argv)
{
    int num;
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
        cin >> d[i];
        cin.ignore();
    }

    for(int i = 1; i <= num; i++)
    {
        if(i == 1)
            dp[1] = d[i];
        else if(i == 2)
            dp[2] = d[1] + d[2];
        else 
        {
            dp[i] = max(dp[i - 2] + d[i], dp[i - 3] + d[i - 1] + d[i]);
        }
    }

    cout<< dp[num] <<endl;
    return 0;
}