#include <iostream>
#include <cstring>
#include <cstdlib>

int arr[4];
using namespace std;
int main(int argc, char* argv[])
{
	char* comm = new char[101];
	int length = 0;

	while (cin.getline(comm, 101))
	{
		length = strlen(comm);
		arr[0] = arr[1] = arr[2] = arr[3] = 0;

		for (int i = 0; i < length; i++)
		{
			int num = comm[i];

			// 소문자
			if (num >= 97 && num <= 122)
				arr[0] += 1;

			// 대문자
			if (num >= 65 && num <= 90)
				arr[1] += 1;

			// 숫자
			if (num >= 48 && num <= 57)
				arr[2] += 1;

			// 공백
			if (num == 32)
				arr[3] += 1;
		}

		for (int i = 0; i < 4; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

	return 0;
}