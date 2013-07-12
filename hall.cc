#include "header/hall.h"
#include "header/database.h"

Halldetails :: Halldetails()
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
/*Halldetails :: selecthall()
{
  mysql_query (connect,"select * from name;");
        unsigned int i =0;
        res_set = mysql_store_result(connect);
   unsigned int numrows = mysql_num_rows(res_set);
        cout<<"Location  Projector  Inverter   Board   Seating Capacity   Audio "<<endl;
        cout<<"--------  ---------  --------  -------  -----------------  ----- "<<endl;
        while (((row= mysql_fetch_row(res_set)) !=NULL ))
   {
        cout.width(5);
        cout<<left<<row[i] << row[i+1] <<endl;
   }

}*/

Halldetails :: ~ Halldetails()
{
 //destructor
}

