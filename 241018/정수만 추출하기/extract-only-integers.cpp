#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string InputSTR;
	int Answer;

	cin >> InputSTR;
	Answer += stoi(InputSTR);

	cin >> InputSTR;
	Answer += stoi(InputSTR);

	cout << Answer;

	return 0;
}