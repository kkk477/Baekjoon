#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, char *argv[])
{
	string arr;
    int stack = 0,total = 0;
	
	getline(cin, arr);
	
	for(int i =0; i< arr.length(); i++)
	{
		if(arr[i] == '(')
			stack++;
		
		if(arr[i] == ')')
		{
			stack--;
			
			if(arr[i-1] == '(')
				total += stack;
			else
				total += 1;
		}
	}
	
	cout<<total<<endl;
    return 0;
}