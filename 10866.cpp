#include <iostream>
#include <deque>

using namespace std;
int main(int argc, char* argv[])
{
	deque<int> dq;
	
	int N = 0;
	string comm = "";
	int data = 0;

	cin >> N;
	cin.ignore();
	
	for (int i = 0; i < N; i++)
	{
		cin >> comm;
		if (!comm.compare("push_front"))
		{
			cin >> data;
			cin.ignore();
			dq.push_front(data);
		}

		if (!comm.compare("push_back"))
		{
			cin >> data;
			cin.ignore();
			dq.push_back(data);
		}

		if (!comm.compare("pop_front"))
		{
			cin.ignore();
			
			if(dq.size() > 0)
			{
				cout << dq.front() << endl;
				dq.pop_front();
			}
			else
				cout << -1 << endl;
		}

		if (!comm.compare("pop_back"))
		{
			cin.ignore();

			if (dq.size() > 0)
			{
				cout << dq.back() << endl;
				dq.pop_back();
			}
			else
				cout << -1 << endl;
		}

		if (!comm.compare("size"))
		{
			cin.ignore();
			cout << dq.size() << endl;
		}

		if (!comm.compare("empty"))
		{
			cin.ignore();
			int b = dq.empty() ? 1 : 0;
			cout << b << endl;
		}

		if (!comm.compare("front"))
		{
			cin.ignore();

			if (dq.size() > 0)
			{
				cout << dq.front() << endl;
			}
			else
				cout << -1 << endl;
		}

		if (!comm.compare("back"))
		{
			cin.ignore();

			if (dq.size() > 0)
			{
				cout << dq.back() << endl;
			}
			else
				cout << -1 << endl;
		}
	}

	return 0;
}