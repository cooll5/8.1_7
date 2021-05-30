#include <iostream>
#include <string>

using namespace std;

int Count(const string s, int t, const char* rstr, const char* str, int k, int j)
{
	size_t pos = 0;

	while ((pos = rstr[t] != '\0') != -1)
	{
		pos++;
		if (rstr[k] == str[j] && rstr[k] != '\0')
			k++;
	}
	return k;
}

int main()
{
	char* pdest;
	int result;

	char rstr[] = "abc";
	char str[101] = "Repeat abc";

	cout << "String to be searched:" << endl << " " << str << endl;
	string getline(str);
	pdest = strstr(str, rstr);
	result = (int)(pdest - str + 1);

	if (pdest != NULL)
		cout << rstr << " found at position " << result << endl;
	else
		cout << rstr << " not found" << endl;
	return 0;
}