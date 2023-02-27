#include <iostream>
#include <cstring>
#include <cstdlib>

int arr[26];
using namespace std;
int main(int argc, char* argv[])
{
	char* comm = new char[101];
	int length = 0;

	cin >> comm;
	cin.ignore();
	length = strlen(comm);
	memset(arr, -1, sizeof(int)*26);

	for (int i = 0; i < length; i++)
	{
		int num = comm[i] - 97;
		if(arr[num] == -1)
			arr[num] = i;
	}

	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";

	return 0;
}