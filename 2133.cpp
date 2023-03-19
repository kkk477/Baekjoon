#include <iostream>
#include <algorithm>

using namespace std;

int dp[31];
int main(int argc, char **argv)
{
    int num;
    cin >> num;
    
    if((num % 2) == 0)
    {
        dp[2] = 3;
        
        for(int i = 4; i <= num; i+=2)
        {
            dp[i] = dp[2] * dp[i - 2];
            for(int j = i - 4 ; j >= 2; j-=2)
            {
                dp[i] += dp[j] * 2;
            }
            dp[i] += 2;
        }

        cout<< dp[num] << endl;
    }
    else
    {
        cout<< 0 <<endl;
    }

    return 0;
}