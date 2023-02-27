#include <iostream>
#include <string>

using namespace std;
int main(int argc, char* argv[])
{
	string numA = "";
	string numB = "";
	string numC = "";
	string numD = "";

	cin >> numA >> numB >> numC >> numD;

	string AB = numA + numB;
	string CD = numC + numD;

	std::string::size_type sz = 0;

	long long numAB = stoll(AB, &sz, 10);
	long long numCD = stoll(CD, &sz, 10);

	cout << numAB + numCD << endl;

	return 0;
}