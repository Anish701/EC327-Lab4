#ifndef LETTER_H
#define LETTER_H
#include <string>
class Letter {
	public:
		std::string recipient;
		std::string sender;
		std::string text;
		
		Letter();
		Letter(std::string from, std::string to);
		void add_line(std::string line);
		std::string get_text();
	private:
		std::string body;
};

#endif
