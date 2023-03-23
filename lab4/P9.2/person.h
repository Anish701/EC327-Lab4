#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person {
	public:
		std::string name;
		std::string friends;
		Person();
		Person(std::string str);
		void befriend(Person p);
		void unfriend(Person p);
		std::string get_friend_names();
};

#endif
