#include "letter.h"

Letter::Letter() {
	sender = "sender name";
	recipient = "recipient name";
	std::string s1 = "Dear " + recipient + ":\n\n";
	std::string sf = "\nSincerely,\n\n" + sender;
	body = "";
	text = s1+body+sf;
}

Letter::Letter(std::string from, std::string to) {
	sender = from;
	recipient = to;
	std::string s1 = "Dear " + recipient + ":\n\n";
        std::string sf = "\nSincerely,\n\n" + sender;
        body = "";
        text = s1+body+sf;
}

void Letter::add_line(std::string line) {
	std::string s1 = "Dear " + recipient + ":\n\n";
        std::string sf = "\nSincerely,\n\n" + sender;
	body = body + line + "\n";
	text = s1 + body + sf;
}

std::string Letter::get_text() {
	return text;
}
