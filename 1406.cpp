#include <iostream>
#include <string>
#include <list>

using namespace std;
int main(int argc, char* argv[])
{
	string str = "";
	int commCnt = 0;

	cin >> str;
	list<char> li(str.begin(), str.end());
	auto iter = li.end();
	cin >> commCnt;

	for (int i = 0; i < commCnt; i++)
	{
		char cmd, data;
		cin >> cmd;

		if ((cmd == 'L') && (iter != li.begin()))
		{
			iter--;
		}

		if ((cmd == 'D') && (iter != li.end()))
		{
			iter++;
		}

		if ((cmd == 'B') && (iter != li.begin()))
		{
			iter--;
			iter = li.erase(iter);
		}

		if (cmd == 'P')
		{
			cin >> data;
			li.insert(iter, data);
		}
	}
	
	for (iter = li.begin(); iter != li.end(); iter++)
		cout << *iter;

	return 0;
}