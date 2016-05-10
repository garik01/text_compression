#include "lib.h"

string precompression(string stroka);
string unpacking(string stroka);
double coeff(string stroka1, string stroka2);

int main(int argc, char* argv[]) {
	background();
	// Начало программы

	string str;
	cout << "ВВедите строку: " ;
	cin >> str;
	cout << precompression(str) << endl;
	cout << "Коэффициент сжатия: " << coeff(str, precompression(str)) << endl;


	// Конец программы
	system("pause");
	return 0;
}

string precompression(string stroka) {
	string stroka2;
	for (int i = 0; i < stroka.length(); i++)
	{
		int count = 1;
		for (int j = i; j < stroka.length() - 1; j++)
		{
			if (stroka[j + 1] != stroka[i]) break;
			count++;
			i++;
		}
		if (count == 1) 
			stroka2 += stroka[i];
		else 
			stroka2 += to_string(count) + stroka[i];
	}
	return stroka2;
}
string unpacking(string stroka) {
	return 0;
}
double coeff(string stroka1, string stroka2)
{
	return stroka1.length() / stroka2.length();
}
