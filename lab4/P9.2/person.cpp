#include "person.h"

Person::Person() {
	name = "name";
	friends = "";
}

Person::Person(std::string str) {
	name = str;
	friends = "";
}

std::string Person::get_friend_names() {
	return friends;
}

void Person::befriend(Person p) {
	std::string s = p.name;
	friends = friends + s + " ";
}

void Person::unfriend(Person p) {
	std::string s = p.name;
	std::string names = friends;
	friends.erase(friends.find(s+" "),s.length()+1);
}









