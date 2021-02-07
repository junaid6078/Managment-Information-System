#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include<conio.h>
using namespace std;

class account{
	public:
		char name[10];
		int acno;
		int amount; const
	
		void getdata(){
			cout<<"\n\tenter costumer name = ";
		//	cin.ignore();
			cin.getline(name , 10);
			cout<<"\n\tenter account number = ";
			cin>>acno;
			cout<<"\n\tenter amount = ";
			cin>>amount;
		}
		void putdata(){
		
			cout<<"\n\t"<<name<<"\t\t"<<acno<<"\t \t"<<amount<<endl;
		}
		void creataccount(){
			ofstream f;
			account ac;
			f.open("bank.dat" , ios::binary | ios::app);
			ac.getdata();
			f.write((char*)&ac , sizeof(ac));
			f.close();
		}
		void show(){
			ifstream f;
			account ac;
			f.open("bank.dat" , ios::binary);
			while(f.read((char*)&ac, sizeof(ac)) != NULL){
				ac.putdata();
			}
			f.close();
			
		}
		int accountno() const {
			return acno;
		}
		
		void myaccount(int n){
			account ac;
			bool flag=false;
			ifstream f;
			f.open("bank.dat",ios::binary);
			if(!f)
			{
				cout<<"File could not be open !! Press any Key...";
				return;
			}
			cout<<"\nBALANCE DETAILS\n";
			cout<<"\tcostumer name\taccount no.\tamount";
    		while(f.read((char*)&ac, sizeof(ac))){
				if(ac.accountno()==n){
				ac.putdata();
				flag=true;
			}
			}
			f.close();
			if(flag==false)
				cout<<"\n\nAccount number does not exist";
		}
		void intro(){
			cout<<"\tWelcome to My Bank :";
			cout<<"\n\t1.Create Account :";
			cout<<"\n\t2.Show All Account :";
			cout<<"\n\t3.Balance Enquiry :";
			
		}


};
void mainfun(){

	account acnt;
	char a='n';
	int x;
	char ch;
	acnt.intro();
	cout<<"\n\tcontinue...";
	cin>>ch;
	cin.ignore();
	
	switch(ch){
		
		case '1':
			do{
				system("CLS");
				acnt.creataccount();
			
			}while(a=='y'||a=='Y');
			break;
		case '2':
			system("CLS");
			cout<<"\n\tname\tacc no.\tamount\n";
			acnt.show();
			break;
		case '3':
			cout<<"\nenter account number = ";
			cin>>x;
			system("CLS");
			acnt.myaccount(x);
			break;
					
	
	}
}



int main(){
	
	mainfun();
	
}



