#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>
#include <cstring>
#include <cctype>
using namespace std;

void p88f(string in)
{	
	//load txt file into string use
	ifstream f;
	f.open(in);

	map <string, int> data;
	string sf, tot = "";
	while(f >> sf)
	{
		tot += sf + " ";
	}

	string use = tot;
	
	int length = use.length();
	for(int i = 0; i < length-1; i++)
	{
		if(data.find(use.substr(i,2)) != data.end())
		{
			data[use.substr(i,2)]++;
		}
		else
		{
			data.insert({use.substr(i,2),1});
		}
	}
	for(auto i : data)
	{
		string s = i.first;
		s.erase(std::remove(s.begin(),s.end(),' '),s.end());
		if(s.length() < 2)
			data.erase(i.first);
		else if(!(isupper(s[0]) && isupper(s[1])))
			data.erase(i.first);
	}
	for(auto i: data)
	{
		cout << i.first << " " << i.second << endl;
	}
}

int main()
{
	p88f("file.txt");	
	return 0;
}
