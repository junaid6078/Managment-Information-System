#include<iostream>
#include<cstring>
#include<string>
#include<conio.h>
using namespace std;

class MIS{
	public:
	string citiname; 
	string citiadd;
	string papaname; 
	string papaadd;
	string childname; 
	string childadd;
	int citinic , papanic , childnic;

	
	
	void get_data(){
		cout<<"enter citizen name = ";
		cin>>citiname;
		cout<<"enter CNIC number = ";
		cin>>citinic;
		cout<<"enter address = ";
		cin>>citiadd;		
		cout<<"enter father's name = ";
		cin>>papaname;
		cout<<"enter CNIC number = ";
		cin>>papanic;
		cout<<"enter address = ";
		cin>>papaadd;
		cout<<"enter child name = ";
		cin>>childname;
		cout<<"enter CNIC number = ";
		cin>>childnic;
		cout<<"enter address = ";
		cin>>childadd;
		cin.ignore();
		
	}
	void put_data(){
		cout<<"=========Search citizen=========\n";
		cout<<"\ncitizen name = "<<citiname;
		cout<<"\ncitizen CNIC = "<<citinic;
		cout<<"\ncitizen address = "<<citiadd;
		cout<<"\nfather's name = "<<papaname;
		cout<<"\nfather's CNIC = "<<papanic;
		cout<<"\nfather's address = "<<papaadd;
		cout<<"\nchildren's name = "<<childname;
		cout<<"\nchildren's CNIC = "<<childnic;
		cout<<"\nchildren's address = "<<childadd;
		
	}
	int return_citinic(){
		return citinic;
	}
	
};

int main(){
	MIS mis;
	mis.get_data();
	mis.put_data();
	int x=mis.return_citinic();
	cout<<x;
	
	
	
	
}
