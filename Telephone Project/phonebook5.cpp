#include<iostream>
#include<windows.h>
using namespace std;
void start();
int menu();
int k=0;


int main()
{
	start();
	string name[10000];
	string surname[10000];
	string no[10000];
	string address[10000];
	int check=0;
	int Total_contacts=0;
    check=menu();
    do
    {
    	// Add contacts 
    	if(check==1)
    	{
			cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
    		cout<<"\n\n\t\t\t\t\t\t Name :";
    		cin>>name[k];
			cout<<"\t\t\t\t\t\t Surname :";
    		cin>>surname[k];
    		cout<<"\t\t\t\t\t\t Phone no :";
    		cin>>no[k];
			cout<<"\t\t\t\t\t\t Address :";
			cin>>address[k];
			cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
    		k++;
    		Total_contacts++;
		}
		
		//Diplay contacts
		else if (check==2)
		{
			cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			cout<<"\n\n\t\t\t\t\t\t   ALL CONTACTS\n\n";
			cout<<"\t----------------------------------------------------------------------------------------------------";
			cout<<"\n\n\t\tNAME\t\t\tSURNAME\t\t\tNUMBER\t\t\tADDRESS\n";
			int check2=0;
			for(int i=0; i<100;i++)
			{
				if(name[i]!="\0")
				cout<<"\n\t\t"<<name[i]<<"\t\t\t"<<surname[i]<<"\t\t\t"<<no[i]<<"\t\t"<<address[i]<<endl;
				check2++;
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t";
				cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			}
		}
		//Search by Number
		else if(check==3)
		{
			string temp;
			cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			cout<<"\n\n\t\t\t\t\tNumber : ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==no[i])
				{
					cout<<"\n\t\t\t\t\tNumber is Found\n\n";
					cout<<"\t\t\t\tName : "<<name[i]<<"     Surname:"<<surname[i]<<"        Phone :"<<no[i]<<"    Address : "<<address[i]<<endl;
					cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
					check2++;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t This Number is Not found in your contact list\n";
				cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			}
		}
		//Search By Name
		else if(check==4)
		{
			string temp, temp1;
			cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			cout<<"\n\n\t\t\t\t\tName : ";
			cin>>temp;
			cout<<"\n\t\t\t\t\tSurname : ";
			cin>>temp1;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if((temp==name[i])&&(temp1==surname[i]))
				{
					cout<<"\n\t\t\t\t\tName is Found\n\n";
					cout<<"\t\t\t\tName : "<<name[i]<<"      Surname :"<<surname[i]<<"        Phone :"<<no[i]<<"    Address : "<<address[i]<<endl;
					cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
					check2++;
				}
				
			}
			if(check2==0)
			{
				cout<<"\n\t\t\t\t\t This name is Not found in your contact list\n";
				cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			}
		}
		// Update
		else if(check==5)
		{
			string temp,temp2,temp3,temp4,temp5,temp6;
			cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			cout<<"\n\n\t\t\t\t\tName : ";
			cin>>temp;
			cout<<"\n\t\t\t\t\tSurname : ";
			cin>>temp6;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if((temp==name[i])&&(temp6==surname[i]))
				{
					cout<<"\n\n\t\t\t\tName : "<<name[i]<<"      Surname :"<<surname[i]<<"        Phone :"<<no[i]<<"    Address : "<<address[i]<<endl;
					cout<<"\n\n\t----------------------------------------------------------------------------------------------------\n\n";
					cout<<"\t\t\t\t\tNew Name : ";
					cin>>temp2;
					cout<<"\t\t\t\t\tNew Surname : ";
					cin>>temp3;
					cout<<"\t\t\t\t\tNew Number : ";
					cin>>temp4;
					cout<<"\t\t\t\t\tNew Address: ";
					cin>>temp5;
					name[i]=temp2;
					surname[i]=temp3;
					no[i]=temp4;
					address[i]=temp5;
					check2++;
					cout<<"\t\t\t\t\tUpdated Successfully ";
					cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
				}
			
			}
				if(check2==0)
			{
				cout<<"\t\t\t\t\t This name is Not found in your contact list\n";
				cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			}
		}
		// delete
		else if(check==6)
		{
				string temp,temp1;
				cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			cout<<"\n\n\t\t\t\t\tFor Delete";
			cout<<"\n\t\t\t\t\tName : ";
			cin>>temp;
			cout<<"\n\t\t\t\t\tSurname : ";
			cin>>temp1;

			int check2=0;
			for(int i=0;i<100;i++)
			{
				if((temp==name[i])&&(temp1==surname[i]))
				{
					cout<<"\t\t\t\t\tDeleted Successfully\n\n";
					cout<<"\t\t\t\tName : "<<name[i]<<"      Surname :"<<surname[i]<<"        Phone :"<<no[i]<<"    Address : "<<address[i]<<endl;
					cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
					name[i]="\0";
					surname[i]="\0";
					no[i]="\0";
					address[i]="\0";
					check2++;
					Total_contacts--;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t This name is Not found in your contact list\n";
				cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			}
		}
		// delete All
		else if(check==7)
		{	
			        cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
					cout<<"\n\n\t\t\t\t\t All Deleted Successfully\n";
					cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
					for(int i=0;i<k;i++)
					{
						name[i]="\0";
						surname[i]="\0";
						no[i]="\0";
						address[i]="\0";
					}
					k=0;
					Total_contacts=0;
		}
		// Diplay numbers of contacts
		else if(check==8)
		{
			cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			cout<<"\n\n\t\t\t\t\tTotal Number of contact list are : "<<Total_contacts<<endl;
			cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
			
		}
		
		check=menu();
		
	}while(check!=9);
	
}
int menu()
{
	cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
	cout<<"\n\n\t\t\t\t\t**********WELCOME TO PHONE BOOK*************";
	cout<<"\n\n\t\t\t\t\t\t          MENU     \t\t\n\n";
	cout<<"\t\t\t[1]  Add Contacts    \t[2]  Diplay All Contacts    \t[3]  Search by Number    \n\t\t\t[4]  Search by Name    \t[5]  Update    \t\t\t[6]  Delete    \n\t\t\t[7]  Delete All    \t[8]  Number of contacts    \t[9]  Exit  ";
	cout<<"\n\n\t----------------------------------------------------------------------------------------------------";
	int a;
	cout<<"\n\n\t\t\t\t\tEnter Your Choice: ";
	cin>>a;
	system("cls");
	return a;
}

void start()
{
	system("color 0e");
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t---------------------------------------\n";
	cout<<"\t\t\t\t\t\t---------Phonebook Project by----------\n";
	cout<<"\t\t\t\t\t\t----------Shubhankar Ranjan------------\n";
	cout<<"\t\t\t\t\t\t----------       and       ------------\n";
	cout<<"\t\t\t\t\t\t----------   Sivam Pratik  ------------\n";
	cout<<"\t\t\t\t\t\t---------------------------------------\n";
	cout<<"\t\t\t\t\t\t         PHONE BOOK APPLICATION        \n";
	cout<<"\t\t\t\t\t\t---------------------------------------\n\n";
	cout<<"\t\t\t\t\tLoading   ";
	char x = 219;
	for(int i=0; i<35; i++)
	{
		cout<<x;
		if(i<10)
		Sleep(300);
		if(i>=10 && i<20)
		Sleep(150);
		if(i>=10)
		Sleep(25);
	}
	system("cls");
	
}
