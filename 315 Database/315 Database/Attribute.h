#ifndef ATTRIBUTE_H_
#define ATTRIBUTE_H_

#include <string>

using namespace std;

class Attribute
{
private:
	string name;
	char type;
public:
	Attribute();
	Attribute(string name, char type);
	
	string getName();
	char getType();
	
	void setName(string name);
	void setType(char type);	
};

#endif
