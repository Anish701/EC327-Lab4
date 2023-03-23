#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student {
	public:
		Student();
		Student(std::string sName);
		Student(std::string sName, int numQ, int totalS);
		std::string get_name();
		std::string name;
		int num;
		int total;
		double avg;
		void add_quiz(int score);
		int get_total_score();
		double get_average_score();
};

#endif
