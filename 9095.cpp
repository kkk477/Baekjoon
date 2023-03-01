#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int data = 0;
        cin >> data;
        cin.ignore();

        vector<int> dp;

        dp.push_back(1);
        dp.push_back(2);
        dp.push_back(4);

        for (int i = 3; i < data; i++)
        {
            dp.push_back(dp[i - 1] + dp[i - 2] + dp[i - 3]);
        }

        cout << dp[data - 1] << endl;
    }
    return 0;
}