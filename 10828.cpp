#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int arr[10000];

int main(int argc, char *argv[])
{
	int commSize = 0, iter = 1, item = 0, len = 0;
	string comm;
	arr[0] = -1;
	
	cin>>commSize;
	cin.ignore();
	
	for(int i = 0; i < commSize; i++)
	{
		getline(cin, comm);
		// parse command
		len = comm.size();
		
		if(len > 5)
		{
			// push
			string n = comm.substr(5);
			item = stoi(n);
			arr[iter] = item;
			iter++;
		}
		
		if(len == 4)
		{
			// size
			cout<<iter - 1<<endl;
		}
		
		if(len == 5)
		{
			// empty
			cout<<(iter == 1 ? 1 : 0)<<endl;
		}
		
		if(len == 3)
		{
			if(!comm.compare("pop"))
			{
				if(iter == 1)
				{
					cout<<arr[iter - 1]<<endl;
				}else
				{
					cout<<arr[iter - 1]<<endl;
					iter--;
				}
			}else
				cout<<arr[iter - 1]<<endl;
		}
		
	}
	
    return 0;
}