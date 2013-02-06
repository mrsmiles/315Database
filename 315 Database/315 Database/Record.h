#ifndef RECORD_H_
#define RECORD_H_

#include <vector>
#include <string>

using namespace std;

class Record
{
private:
	vector<string> tuples;
public:
	Record();
	Record(vector<string> data);
	
	string getTuple(int index);
	void setTuple(int index, string newdata);
};

#endif
