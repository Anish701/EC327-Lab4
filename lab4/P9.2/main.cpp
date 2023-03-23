#include <iostream>
#include "person.h"
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
	cout << b.name << " has friends " << b.get_friend_names() << endl;
	b.unfriend(d);
	cout << b.name << " lost friend(s), and now has friends " << b.get_friend_names() << endl;
	return 0;
}
