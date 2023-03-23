#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
class Person {
	public:
		std::string name;
		std::vector<Person*> friends;
		Person();
		Person(std::string str);
		void befriend(Person p);
		void unfriend(Person p);
		std::vector<Person*> get_friend_names();
};

#endif
