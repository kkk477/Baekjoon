#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	string val;
	
	while(1)
	{
		getline(cin, val);
		if(val.empty())
			break;
		cout<<val<<endl;
	}
	
    return 0;
}