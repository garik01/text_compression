#include "lib.h"

string precompression(string stroka);
string unpacking(string stroka);
double coeff(string stroka1, string stroka2);

int main() 
{
	background();

	string str;
	cout << "ВВедите строку: " ;
	cin >> str;
	cout << "Сжатая строка: " << precompression(str) << endl;
	cout << "Коэффициент сжатия: " << coeff(str, precompression(str)) << endl;
	cout << "Расжатая строка: " << unpacking(precompression(str)) << endl;

	system("pause");
	return 0;
}

string precompression(string stroka) 
{
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
string unpacking(string stroka) 
{
	string str = "";
	for (int i = 0; i < stroka.length(); i++)
	{
		if (stroka[i] > 47 & stroka[i] < 57)
		{
			for (int j = 0; j < (int)stroka[i] - 49; j++)
			{
				str = str + stroka[i + 1];
			}
		}
		else
		{
			str = str + stroka[i];
		}
	}
	return str;
}
double coeff(string stroka1, string stroka2)
{
	return static_cast<double>(stroka1.length())/stroka2.length();
}
