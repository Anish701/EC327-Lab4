#include <iostream>
#include "p94c.h"
#include <string>
using namespace std;

int main()
{
	Person a("a");
	Person b("b");
	Person c("c");
	Person d("d");
	b.befriend(a);
	b.befriend(c);
	b.befriend(d);
	cout << b.name << " has friends ";
	for(int i = 0; i < b.get_friend_names().size(); i++)
	{
		cout << (*(b.get_friend_names().at(i))).name << ", ";
	}
	cout << endl;
	b.unfriend(a);
	cout << b.name << " lost friend(s) and now has friends ";
	for(int i = 0; i < b.get_friend_names().size(); i++)
	{
		cout << (b.get_friend_names().at(i))->name << ", ";
	}
	cout << endl;
	return 0;
}
