#include <iostream>
#include <string>
#include "student.h"
using namespace std;

int main()
{
	Student a;
	Student b("big",4,400);
	a.add_quiz(40);
	a.add_quiz(80);
	cout << a.get_name() << " has average of: " << a.get_average_score() << endl;
	b.add_quiz(50);
	cout << b.get_name() << " has average of: " << b.get_average_score() << endl;
	return 0;
}
