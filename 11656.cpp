#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(int argc, char* argv[])
{
	string S = "";
	int length = 0;

	cin >> S;
	length = S.length();
	string* list = new string[length];

	for (int i = 0; i < length; i++)
	{
		list[i] = S;
		S = S.substr(1);
	}

	sort(list, list + length);

	for (int i = 0; i < length - 1; i++)
		cout << list[i] << endl;
	cout << list[length - 1];

	return 0;
}