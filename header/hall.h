#include "header.h"
//#include "database.h"

class Halldetails

{
   public:
        MYSQL *connect;
        MYSQL_RES *res_set;
        MYSQL_ROW row;
        unsigned int numrows;


	Halldetails();
	void selecthall();
	void detail(int hall);
	~Halldetails();
};

