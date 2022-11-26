// Дано літерний рядок, який містить послідовність символів s0, …, sn, … .
// 1. Вияснити, чи є серед цих символів всі букви, що входять в слово “while”.
// 2. Замінити кожну групу букв “while” парою зірочок “ * *”.
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 

using namespace std;

bool Include(const string s, const string cs)
{
	bool r = true;
	for (size_t i = 0; i < cs.length(); i++)
		r = r && (s.find(cs[i]) != -1);
	
	return r;
}
int main()
{
	string s = "while";
	string cs = "is";

	if (Include(s, cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}