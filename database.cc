#include "header/database.h"

Database :: Database()
{
    connect = mysql_init(NULL);
	

    if ( !connect )
    {
        cout << "MySQL Initialization Failed";
    }  
   

    connect = mysql_real_connect(connect, SERVER, USER, PASSWORD, 
                                 DATABASE, 0, NULL, 0);
    
    if ( connect == NULL )
    {
        cout << "Connection Failed\n";
    }

}
void Database :: Hall_list()
{

  mysql_query (connect,"select * from name;");
	unsigned int i =0;
	res_set = mysql_store_result(connect);
        numrows = mysql_num_rows(res_set);
	cout<<"Id      Hall Name  "<<endl;
	cout<<"---    ----------"<<endl;
	while (((row= mysql_fetch_row(res_set)) !=NULL ))
   { 
 	cout.width(5);
 	cout<<left<<row[i] << row[i+1] <<endl;
   }

}

void Database :: Halldetails(auto a)
{

cout<<"mysql_query (connect,"select * from name ;");
	
}
