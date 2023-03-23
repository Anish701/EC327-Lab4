#include "letter.h"
#include <iostream>
using namespace std;

int main()
{
	Letter my("person1","person2");
	my.add_line("first line");
	my.add_line("second line");
	my.add_line("third line");
	my.add_line("fourth line");
	cout << my.get_text() << endl;
	
	return 0;
}
