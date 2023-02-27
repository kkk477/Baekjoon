#include <iostream>
#include <cstdlib>
using namespace std;

int d[1000001];
int main(int argc, char **argv)
{
    int data = 0;
    cin>>data;
    
    for (int i = 2; i <= data; i++)
    {
        d[i] = d[i - 1] + 1;

        if(i%2 == 0)
        {
            d[i] = min(d[i], d[i/2] + 1);
        }

        if(i%3 == 0)
        {
            d[i] = min(d[i], d[i/3] + 1);
        }
    }

    cout<<d[data]<<endl;

    return 0;
}