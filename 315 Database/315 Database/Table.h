#ifndef TABLE_H_
#define TABLE_H_

#include <map>
#include "Record.h"
#include "Attribute.h"

class Table
{
private:
	vector<Attribute> attributes;
	vector<Record> records;
public:
	Table();
	Table(vector<Attribute> a);

	void addColumn(Attribute att);
	void deleteColumn(string name);
	void insertRecord(Record r);

	vector<Attribute> getAttributes() { return attributes; }
	int getSize() { return records.size(); }


	void renameAttribute(string oldname, string newname);
	void crossJoin(const Table& t1, const Table& t2);
	int sum(string name);
	unsigned int count(string name);
	int min (string name);
	int max (string name);

};

#endif