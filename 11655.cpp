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

		for (int i = 0; i < length; i++)
		{
			int num = comm[i];

			// 소문자
			if (num >= 97 && num <= 122)
			{
				num += 13;

				if (num > 122)
					num -= 26;

				comm[i] = num;
			}

			// 대문자
			if (num >= 65 && num <= 90)
			{
				num += 13;

				if (num > 90)
					num -= 26;

				comm[i] = num;
			}
		}

		cout << comm << endl;
	}

	return 0;
}