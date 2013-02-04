#ifndef ATTRIBUTE_H_
#define ATTRIBUTE_H_

#include <string>

class Attribute
{
private:
	string name;
	char type;
public:
	Attribute();
	Attribute(string name, char type);
};

#endif