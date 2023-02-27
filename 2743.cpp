#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
int main(int argc, char* argv[])
{
	char* comm = new char[101];
	int length = 0;

	while (cin.getline(comm, 101))
	{
		length = strlen(comm);
		cout << length << endl;
	}

	return 0;
}