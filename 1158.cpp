#include <iostream>
#include <queue>

using namespace std;
int main(int argc, char* argv[])
{
	queue<int> q;
	int N = 0, K = 0, tmp = 0;

	cin >> N >> K;
	
	for (int i = 1; i <= N; i++)
		q.push(i);

	cout << "<";

	while (q.size() > 1)
	{
		for (int i = 0; i < K - 1; i++)
		{
			tmp = q.front();
			q.push(tmp);
			q.pop();
		}
		
		tmp = q.front();
		q.pop();
		cout << tmp<< ", ";
	}

	cout << q.front() << ">" << endl;

	return 0;
}