#include <iostream>
#include <Windows.h>
#include <math.h>
//Доданий коментар
//second commit
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char bracket;

	cin >> bracket;

	switch (bracket) {
	case '(':cout << "відкрита кругла дужка"; break;
	case ')':cout << "закрита кругла дужка "; break;
	case '[':cout << "відкрита квадратна дужка"; break;
	case ']':cout << "закрита квадратна дужка"; break;
	case '{':cout << "відкрита фігурна дужка"; break;
	case '}':cout << "закрита фігурна дужка"; break;
	default:cout << "Не дужка";
	}
}
