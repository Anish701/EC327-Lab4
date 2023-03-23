#include "student.h"

Student::Student() {
	name = "name";
	num = 0;
	total = 0;
	avg = 0.0;
}

Student::Student(std::string sName) {
	name = sName;
}

Student::Student(std::string sName, int numQ, int totalS) {
	name = sName;
	num = numQ;
	total = totalS;
	if(num == 0)
		avg = 0;
	else
		avg = (double)total/num;
}

std::string Student::get_name()
{
	return name;
}

void Student::add_quiz(int score)
{
	num++;
	total = total + score;
	avg = (double)total/num;
}

int Student::get_total_score()
{
	return total;
}

double Student::get_average_score()
{
	return avg;
}
