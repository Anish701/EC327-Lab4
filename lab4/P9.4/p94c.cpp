#include "p94c.h"

Person::Person() {
	name = "name";
	friends;
}

Person::Person(std::string str) {
	name = str;
	friends;
}

std::vector<Person*> Person::get_friend_names() {
	return friends;
}

void Person::befriend(Person p) {
	friends.push_back(&p);
}

void Person::unfriend(Person p) {
	for(int i = 0; i < friends.size(); i++)
	{
		if(friends.at(i)->name == p.name){
			friends.erase(friends.begin()+i);
		}
	}
}
