// sqlite3mem.cpp : SQLite 3 access via trasient memory
//

#include "sqlite3mem.h"

using namespace std;

int main()
{
	cout << "SQLite3 Intro" << endl;

	sqlite3 *connection = nullptr;
	
	int result = sqlite3_open(":memory:", &connection);

	if (SQLITE_OK != result) {
		cout << sqlite3_errmsg(connection);
		sqlite3_close(connection);
	}

	sqlite3_stmt *query = nullptr;
	
	result = sqlite3_prepare16_v2(connection, "select 'Hello Sqlite'", -1, &query, nullptr);

	if (SQLITE_OK != result) {
		cout << sqlite3_errmsg(connection);
		sqlite3_close(connection);
		return result;
	}

	while (SQLITE_ROW == sqlite3_step(query)) {
		cout << sqlite3_column_text(query, 0);
	}

	sqlite3_finalize(query);
	sqlite3_close(connection);


	getchar();
	return 0;
}
