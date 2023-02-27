#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	string input;
	int count = 0;
	
	getline(cin, input);
	
	count = input.size();
	
	for(int i = 0; i < count;)
	{
		string output = input.substr(i, 10);
		cout<<output<<endl;
		i += 10;
	}
	
    return 0;
}