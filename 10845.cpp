#include <iostream>
#include <string>
#include <queue>

using namespace std;
int main(int argc, char* argv[])
{
	string str = "";
	int commCnt = 0, data = 0;
	queue<int> qu;

	cin >> commCnt;
	cin.ignore();

	for (int i = 0; i < commCnt; i++)
	{
		string comm = "";
		cin >> comm;
		cin.ignore();

		if (!comm.compare("push"))
		{
			cin >> data;
			cin.ignore();
			qu.push(data);
		}

		if (!comm.compare("pop"))
		{
			if (qu.size() > 0)
			{
				cout << qu.front() << endl;
				qu.pop();
			}
			else
				cout << -1 << endl;
		}

		if (!comm.compare("size"))
		{
			cout << qu.size() << endl;
		}

		if (!comm.compare("empty"))
		{
			int t = qu.empty() ? 1 : 0;
			cout << t << endl;
		}

		if (!comm.compare("front"))
		{
			if (qu.size() > 0)
			{
				cout << qu.front() << endl;
			}
			else
				cout << -1 << endl;
		}

		if (!comm.compare("back"))
		{
			if (qu.size() > 0)
			{
				cout << qu.back() << endl;
			}
			else
				cout << -1 << endl;
		}
	}


	return 0;
}