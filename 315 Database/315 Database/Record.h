#ifndef RECORD_H_
#define RECORD_H_

#include <vector>
#include <string>

class Record
{
private:
	vector<string> tuple;
public:
	Record();
	Record(vector<string> data);
};

#endif