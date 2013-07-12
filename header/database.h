#include "header.h"
#include "database-details.h"

class Database
{
  public:
        /** MySQL connectivity Variables */
        MYSQL *connect;
        MYSQL_RES *res_set;
        MYSQL_ROW row;


        unsigned int numrows;            /**< Unsigned int variable */

        STRING_VEC vecTemp;
        
        string query;
 
	Database();
	void Hall_list();
	void Halldetails(auto);
	void Query(string query);
};

