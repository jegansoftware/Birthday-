#include<iostream>
using namespace std;

class calculation
{
	
	public:
		int present_date;
		int present_month;
		int present_year;
		int birth_date;
		int birth_month;
		int birth_year;
		int final_date,final_month,final_year;
	  	int td;
		int tm;
		int ty;
	
		int present()
		{
		
		cout<<endl<<"Enter Present Date  :";
		cin>>present_date;
		
		cout<<endl<<"Enter Present Month :";
		cin>>present_month;
		
		
		cout<<endl<<"Enter Present Year  :";
		cin>>present_year;
		
		td=present_date;
		tm=present_month;
		ty=present_year;
		
		}
		
		
		int birth()
		{
		
		cout<<endl<<"Enter Birth Date :";
		cin>>birth_date;
		
		
		cout<<endl<<"Enter Birth Month:";
		cin>>birth_month;
		
		
		cout<<endl<<"Enter Birth Year :";
		cin>>birth_year;
		
		}
		
		int cal()
		{
			int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	
			
			
		 	if (birth_date > present_date) 
		 	{
     	 	present_date = present_date + month[birth_month - 1];
     	 	present_month = present_month - 1;
		 	}
   	
  		 	if (birth_month > present_month) 
		 	{
     		present_year = present_year - 1;
      		present_month = present_month + 12;
   			}
		
		}
		
		int final()
		{
		
		  final_date = present_date - birth_date;
   		  final_month = present_month - birth_month;
   		  final_year = present_year - birth_year;
		}
		
		
		
		int result()
		{
		
		cout<<endl<<"Birth Date"<<td<<"/"<<tm<<"/"<<ty;
		cout<<endl<<"Your Age  "<<final_year<<"years"<<final_month<<"Month"<<final_date<<"Days";
	
		}
		
		
		
};

int main()
{

calculation e;

e.present();
e.birth();
e.cal();
e.final();
e.result();
}

