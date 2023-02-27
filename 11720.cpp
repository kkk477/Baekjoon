#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int count = 0, ret = 0;
	char* val;
	
	cin>>count;
	val = new char[count];
	cin>>val;
	
	for(int i = 0; i < count; i++)
		ret += val[i] - '0';
	
	cout<<ret<<endl;
	
    return 0;
}