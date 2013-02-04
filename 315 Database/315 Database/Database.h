#ifndef DATABASE_H_
#define DATABASE_H_

#include <map>
#include "Table.h"

using namespace std;

class Database
{
private:
	map<string,Table> tables;
public:
	Database();

	void addTable(Table& t, string name);
	void dropTable(string name);
	vector<string> listTables();
	map<string,Table> getTables();

};

#endif