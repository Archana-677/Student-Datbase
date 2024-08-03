#include<iostream>
using namespace std;
#include<conio.h>
#include<process.h>
class student
{
	protected:
		int rno;
		char fname[10],lname[10],course[100],dob[15],mo[15],addr[20],city[10],email[30];
        int sub1, sub2, sub3, sub4, sub5, sub6, total;
        float per;
		public:
			void input_details()
			{
				cout<<"\n\n Enter Roll No ===>";
				cin>>rno;
				cout<<"\n";
				cout<<"\n\n Enter First Name ===>";
				cin>>fname;
				cout<<"\n";
				cout<<"\n\n Enter Last Name ===>";
				cin>>lname;
				cout<<"\n";
				cout<<"\n\n Enter Course ===>";
				cin>>course;
				cout<<"\n";
				cout<<"\n\n Enter Date Of Birth ===>";
				cin>>dob;
				cout<<"\n";
				cout<<"\n\n Enter Mobile No ===>";
				cin>>mo;
				cout<<"\n";
				cout<<"\n\n Enter Address ===>";
				cin>>addr;
				cout<<"\n";
				cout<<"\n\n Enter City ===>";
				cin>>city;
				cout<<"\n";
				cout<<"\n\n Enter Email ===>";
				cin>>email;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of Fundamental programming ==>";
				cin>>sub1;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of Discrete Mathmetics ==>";
				cin>>sub2;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of English ==>";
				cin>>sub3;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of Electronic ==>";
				cin>>sub4;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of IDS ==>";
				cin>>sub5;
				cout<<"\n";
				cout<<"\n\nEnter the Mark of Process ==>";
				cin>>sub6;
				cout<<"\n";
				total=sub1+sub2+sub3+sub4+sub5+sub6;
				per=total/6;

			}
			void output_details()
			{
				cout<<"\tOdisha University of Technology and Research"<<endl;
				cout<<"\n_____________________________________________________________________________"<<endl;
				cout<<"\n Roll No       :---> "<<rno;
				cout<<"\n First Name    :---> "<<fname;
				cout<<"\t\t Last Name     :---> "<<lname;
				cout<<"\n course        :---> "<<course;
				cout<<"\t Date Of Birth :---> "<<dob;
				cout<<"\n Mobile No     :---> "<<mo;
				cout<<"\t\t Address       :---> "<<addr;
				cout<<"\n Email         :---> "<<email;
                cout<<"\n City          :---> "<<city;
			}
			void output_marksheet()
			{
				cout<<"\n_____________________________________________________________________________"<<endl;
				cout<<"Subject                               total marks              obtained marks"<<endl;
				cout<<"_____________________________________________________________________________"<<endl;
				cout<<"Marks of Fundamental Programming         100            	      "<<sub1<<endl;
				cout<<"Marks of Discrete Mathmetics		 100            	      "<<sub2<<endl;
				cout<<"Marks of English			 100                          "<<sub3<<endl;
				cout<<"Marks of Electronic			 100                          "<<sub4<<endl;
				cout<<"Marks of IDS 		    	 	 100                          "<<sub5<<endl;
				cout<<"Marks of Process	 		 100                          "<<sub6<<endl;
				cout<<"Percentage 				 100                          "<<per<<endl;
				cout<<"_____________________________________________________________________________"<<endl;
				cout<<"Total Marks				 600                          "<<total;
					if(per>=90 && per<=100)
				{
					cout<<"\n\n\t\t Your Grade is :----> A+";
					cout<<"\n";
				}
				else if(per>=80 && per<=90)
				{
					cout<<"\n\n\t\t Your Grade is :----> A";
					cout<<"\n";
				}
				else if(per>=70 && per<=80)
				{
					cout<<"\n\t\t Your Grade is :----> B+";

				}
				else if(per>=60 && per<=70)
				{
					cout<<"\n\t\t Your Grade is :----> B";

				}
				else if(per>=50 && per<=60)
				{
					cout<<"\n\t\t Your Grad is :----> C";

				}
				else if(per>=40 && per<=50)
				{
					cout<<"\n\t\t Your Grad is :---->D";

				}
				else
				{
					cout<<"\n\t\t You Are Fail......";

				}

			}
};
class master : virtual public student
{
	public:
		void create()
		{
			cout<<"\n\n===========================> Insert Information <==========================\n\n";
			input_details();
		}
		void display()
		{
			cout<<"\n\n=========================> Summary Report <============================\n\n";
			output_details();
			cout<<"\n\n=========================> Student Marksheet Report <==========================\n\n";
			output_marksheet();
			cout<<"\n\n\t=========================> End Of Marksheet <==========================\n\n";
			cout<<"\n\n\t=========================> End of Report <=============================\n\n";

		}
		void update()
		{
			int choice;
			cout<<"\n\n\t=========================> Update Information <=========================\n\n";
			cout<<"\n\n\t ---------------> choose Details You Want to Perform <--------------\n\n";
			cout<<"\n\n Roll No ===>"<<rno<<"\n";
			cout<<"\n\n First Name ===>"<<fname<<"\n";
			cout<<"\n\n Last Name ====>"<<lname<<"\n";
			cout<<"\n\n Course ===>"<<course<<"\n";
			cout<<"\n\n Date Of Birth ===>"<<dob<<"\n";
			cout<<"\n\n Mobile No ===>"<<mo<<"\n";
			cout<<"\n\n Address ===>"<<addr<<"\n";
			cout<<"\n\n City ===>"<<city<<"\n";
			cout<<"\n\n Email ===>"<<email<<"\n";
			cout<<"\n\n Fundamental Programming Marks ===>"<<sub1<<"\n";
			cout<<"\n\n Discrete Mathmetics Marks ===>"<<sub2<<"\n";
			cout<<"\n\n English Marks ===>"<<sub3<<"\n";
			cout<<"\n\n Electronic Marks ===>"<<sub4<<"\n";
			cout<<"\n\n IDS Marks ===>"<<sub5<<"\n";
			cout<<"\n\n Process Marks ===>"<<sub4<<"\n";
			cout<<"\n\n Enter Your Choice ====>";
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"\n\n Enter Roll No :--->";
					cin>>rno;
					cout<<"\n";
					break;
				case 2:
					cout<<"\n\n Enter First Name :--->";
					cin>>fname;
					cout<<"\n";
					break;
				case 3:
					cout<<"\n\n Enter Last Name :--->";
					cin>>lname;
					cout<<"\n";
					break;
				case 4:
					cout<<"\n\n Enter Course :--->";
					cin>>course;
					cout<<"\n";
					break;
				case 5:
					cout<<"\n\n Enter Date Of Birth :--->";
					cin>>dob;
					cout<<"\n";
					break;
				case 6:
					cout<<"\n\n Enter Mobile No :--->";
					cin>>mo;
					cout<<"\n";
					break;
				case 7:
					cout<<"\n\n Enter Address :--->";
					cin>>addr;
					cout<<"\n";
					break;
				case 8:
					cout<<"\n\n Enter city :--->";
					cin>>city;
					cout<<"\n";
					break;
				case 9:
					cout<<"\n\n Enter Email :--->";
					cin>>email;
					break;
				case 10:
					cout<<"\n\n Enter Marks Of Fundamental Programming :--->";
					cin>>sub1;
					break;
				case 11:
					cout<<"\n\n Enter Marks of Discrete Mathmetics :--->";
					cin>>sub2;
					cout<<"\n";
					break;
				case 12:
					cout<<"\n\n Enter Marks of English :--->";
					cin>>sub3;
					cout<<"\n";
					break;
				case 13:
					cout<<"\n\n Enter Marks of English :--->";
					cin>>sub4;
					cout<<"\n";
					break;
				case 14:
					cout<<"\n\n Enter Marks of IDS :--->";
					cin>>sub4;
					cout<<"\n";
					break;
				case 15:
					cout<<"\n\n Enter Marks of Process :--->";
					cin>>sub4;
					cout<<"\n";
					break;
				default:
					cout<<"\n\n=======> Invalid Choice <=========\n ******** Try again ********\n\n";
					break;
			}
		}
};
int main()
{
	master ms;
	while(1)
	{
		cout<<"\n\t==============> Developed By : Archana Patro <=================\n";
		cout<<"\n\t==============> Master Database <================\n";
		cout<<"\n\n\t ********** Choose Operation You Want To Perform **********\n\n";
		cout<<"\n\n\t\t 1--> Create Record";
		cout<<"\n\n\t\t 2--> Display Record";
		cout<<"\n\n\t\t 3--> Update Record";
		cout<<"\n\n\t\t 4--> Exit Program";
		cout<<"\n\n Enter your choice====>";
		
		int ch;
		
		cin>>ch;
		switch(ch)
		{
			case 1:
				ms.create();
				break;
			case 2:
				ms.display();
				break;
			case 3:
				ms.update();
				break;
			case 4:

				goto out;
			default:
				cout<<"\n\n\t========> Invalid choice <========";
				break;
		}
	}
	out:
getch();
}