#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, char *argv[])
{
    int count = 0, data = 0;
	string input;
	
	cin>>count;
	cin.ignore();
	
	for(int i = 0; i < count; i++)
	{
		getline(cin, input);
		for(int j = 0; j < input.length(); j++)
		{
			if(input[j] == '(')
				data++;
			
			if(input[j] == ')')
				data--;
			
			if(data < 0)
				break;
		}
		
		if(data == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
		data = 0;
	}
	
    return 0;
}