/*Hello,this is the STUDENT RECORD MANAGEMENT SYSTEM where the user 
can add the record,search the record,update the record,can see all the
records and at the last user can see the results that have been entered 
by the user.In this program we have use multi-dimensional array to store
the record of multiple students.We can't use one- dimensional array
because if we enter the number of students 3 then the in the
array it will store the student record of the last student entered by the user. 
*/

//--------------------------------------------------------------------------------

using namespace std;
#include <iostream>
#include <iomanip>

class student
{
	int ch,n,i,j=1,k=2;
	string name[60][60],grade[55][55],sgrade;
	float no[50][50],BED[45][45];
	float MATHS[40][40],BOOP[30][30];
	float roll,per[15][15];
	float sum[25][25];
	float rolldel,rollup;
	int ch1,ch2;
	
	public:
		
		void add()
		{
			cout<<"\n\t\t\tEnter the number of students : ";
			cin>>n;
			for(i=0;i<n;i++)
			{
				fflush(stdin);
				cout<<"\n\t\t\tEnter the name of student  : ";
				cin>>name[i][i];
				fflush(stdin);
				
				cout<<"\t\t\tEnter the roll no : ";
				cin>>no[i][i];
				
				cout<<"\t\t\tEnter the marks of Maths : ";
				cin>>MATHS[i][i];
				
				cout<<"\t\t\tEnter the marks of BED : ";
				cin>>BED[i][i];
				
				cout<<"\t\t\tEnter the marks of BOOP : ";
				cin>>BOOP[i][i];
				
				cout<<"\n";		
			}
		}
		
			
		void search()
		{
			cout<<" \t\t\tEnter the roll number : ";
			cin>>roll;
				
			for(i=0;i<n;i++)
			{
				if(roll==no[i][i])
				{
					fflush(stdin);
					cout<<"\n\t\t\tName : "<<name[i][i];
					fflush(stdin);
					cout<<"\n\t\t\tRoll no : "<<no[i][i];
					cout<<"\n\t\t\tMarks of Maths : "<<MATHS[i][i];
					cout<<"\n\t\t\tMarks of BED : "<<BED[i][i];
					cout<<"\n\t\t\tMarks of BOOP : "<<BOOP[i][i];
				}
			}
		}
		
		void update()
		{
			cout<<"\n\t\t\tEnter the roll number to update the marks : ";
			cin>>rollup;
			
			for(i=0;i<n;i++)
			{
				if(rollup==no[i][i])
				{
					cout<<"\n\t\t\t------------------------------";
					cout<<"\n\t\t\t"<<name[i][i]<<"'s"<<"\trecord";
					cout<<"\n\t\t\t------------------------------";
					
					cout<<"\n\t\tEnter the subject name to update the marks(1-MATHS , 2-BOOP , 3-BED): ";
					cin>>ch1;
			
					switch(ch1)
					{
						case 1:
							cout<<"\n\t\t\tUpdate the marks of MATHS : ";
							cin>>MATHS[i][i];
							system("pause");
							system("cls");
							break;
						
						case 2:
							cout<<"\n\t\t\tUpdate the marks of BOOP : ";
							cin>>BOOP[i][i];
							system("pause");
							system("cls");
							break;
							
						case 3:
							cout<<"\n\t\t\tUpdate the marks of BED : ";
							cin>>BED[i][i];
							system("pause");
							system("cls");
							break;
					}
				}
			}
		}
	
			
				
		void all()
		{
			for(i=0;i<n;i++)
			{
				fflush(stdin);
				cout<<"\n\t\t\tName : "<<name[i][i];
				fflush(stdin);
				cout<<"\n\t\t\tRoll no : "<<no[i][i];
				cout<<"\n\t\t\tMarks of Maths : "<<MATHS[i][i];
				cout<<"\n\t\t\tMarks of BED : "<<BED[i][i];
				cout<<"\n\t\t\tMarks of BOOP : "<<BOOP[i][i];
				
				cout<<"\n\n";
			}
			
	
		}
			
				
			
		void result()
		{
			for(i=0;i<n;i++)
			{
				sum[i][i]=sum[i][i]+BED[i][i]+BOOP[i][i]+MATHS[i][i];
				per[i][i]=sum[i][i]/3.0;
			}
				
			for(i=0;i<n;i++)
			{
				fflush(stdin);
				cout<<"\n\t\t\tName : "<<name[i][i];
				fflush(stdin);
				cout<<"\n\t\t\tRoll no : "<<no[i][i];
				cout<<"\n\t\t\tTotal : "<<sum[i][i];
				cout<<"\n\t\t\tPercentage : "<<per[i][i];
					
				if(sum[i][i]>=250.0 && sum[i][i]<=300.0)
				{
					cout<<"\n\t\t\tResult : pass";
					
					grade[i][i]="AA";
					cout<<"\n\t\t\tGrade  : "<<grade[i][i];
				}
				
				else if(sum[i][i]>=200.0 && sum[i][i]<=250.0)
				{
					cout<<"\n\t\t\tResult : pass";
					
					grade[i][i]="AB";
					cout<<"\n\t\t\tGrade  : "<<grade[i][i];
				}
				
				else if(sum[i][i]>=150.0 && sum[i][i]<=200.0)
				{
					cout<<"\n\t\t\tResult : pass";
					
					grade[i][i]="BB";
					cout<<"\n\t\t\tGrade  : "<<grade[i][i];
				}
				
				else if(sum[i][i]>=100.0 && sum[i][i]<=150.0)
				{
					cout<<"\n\t\t\tResult : pass";
					
					grade[i][i]="CC";
					cout<<"\n\t\t\tGrade  : "<<grade[i][i];
				}
				
				else if(sum[i][i]>=50.0 && sum[i][i]<=100.0)
				{
					cout<<"\n\t\t\tResult : pass";
					
					grade[i][i]="DD";
					cout<<"\n\t\t\tGrade  : "<<grade[i][i];
				}
				
				else
				{
					grade[i][i]="FF";
					cout<<"\n\t\t\tResult : fail";
					cout<<"\n\t\t\tGrade  : "<<grade[i][i];
				}
				
				cout<<"\n";
			}
		}
		
		
		
		void filter()
		{
			cout<<"\n\t\t\tEnter the grade to filter the students : ";
			cin>>sgrade;
			
			fflush(stdin);
			cout<<"\n\t\t\t------------------------------------------------------";
			cout<<"\n\t\t\tName"<<"\t\tRoll no"<<"\t\tTotal"<<"\t\tGrade";
			cout<<"\n\t\t\t------------------------------------------------------";
			cout<<"\n\t\t\t"<<name[i][i];
			fflush(stdin);
			
			for(i=0;i<n;i++)
			{
				if(sgrade==grade[i][i])
				{
					fflush(stdin);
					cout<<"\n\t\t\t"<<name[i][i];
					fflush(stdin);
					cout<<"\t\t"<<no[i][i];
					cout<<"\t\t"<<sum[i][i];
					cout<<"\t\t"<<grade[i][i];
					
					cout<<"\n";
					
				}
			}
		}
		
		
		
		void remove()
		{
			cout<<"\n\t\t\tEnter the rollnum to delete the record : ";
			cin>>rolldel;
			
			for(i=0;i<n;i++)
			{
				if(rolldel==no[i][i])
				{
					fflush(stdin);
					name[i][i]=name[i+1][i+1];
					fflush(stdin);
					no[i][i]=no[i+1][i+1];
					MATHS[i][i]=MATHS[i+1][i+1];
					BOOP[i][i]=BOOP[i+1][i+1];
					BED[i][i]=BED[i+1][i+1];
				}
			}
				
				for(i=0;i<n;i++)
				{
					fflush(stdin);
					name[i+j][i+j]=name[i+k][i+k];
					fflush(stdin);
					no[i+j][i+j]=no[i+k][i+k];
					MATHS[i+j][i+j]=MATHS[i+k][i+k];
					BOOP[i+j][i+j]=BOOP[i+k][i+k];
					BED[i+j][i+j]=BED[i+k][i+k];
				
					j++;
					k++;	
				}
					
		
			cout<<"\n\t\t\tRecord deleted successfullyyyy......";
			cout<<"\n\t\t\tDo you want to see the all records ? (1=Yes,2=No): ";
			cin>>ch2;
			
			switch(ch2)
			{
				case 1:
					for(i=0;i<n-1;i++)
					{
						fflush(stdin);
						cout<<"\n\t\t\tName : "<<name[i][i];
						fflush(stdin);
						cout<<"\n\t\t\tRoll no : "<<no[i][i];
						cout<<"\n\t\t\tMarks of Maths : "<<MATHS[i][i];
						cout<<"\n\t\t\tMarks of BED : "<<BED[i][i];
						cout<<"\n\t\t\tMarks of BOOP : "<<BOOP[i][i];
				
						cout<<"\n\n";
						
					}
					
					if(n>=1)
					{ 
						n=n-1;
					}
					
					system("pause");
					system("cls");
					
					break;
					
					
				case 2:
					exit(0);
					break;
			}
		}
		
}s;


int main()
{
	int ch;
	A:
	cout<<"\t\t\t----------Student Record Management System----------";
	cout<<"\n\t\t\t\t1.Add student record";
	cout<<"\n\t\t\t\t2.Search student record";
	cout<<"\n\t\t\t\t3.Update student record";
	cout<<"\n\t\t\t\t\t4.View all records";
	cout<<"\n\t\t\t\t5.See the results";
	cout<<"\n\t\t\t\t6.Filter student record";
	cout<<"\n\t\t\t\t7.Delete student record";
	cout<<"\n\t\t\t\t8.Exit";
	
	cout<<"\n\t\t\tEnter your choice : ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			s.add();
			system("pause");
			system("cls");
			goto A;
			break;
			
			
		case 2:
			s.search();
			system("pause");
			system("cls");
			goto A;
			break;
			
			
		case 3:
			s.update();
			system("pause");
			system("cls");
			goto A;
			break;
			
			
		case 4:
			s.all();
			system("pause");
			system("cls");
			goto A;
			break;
			
			
		case 5:
			s.result();
			system("pause");
			system("cls");
			goto A;
			break;
			
		
		case 6:
			s.filter();
			system("pause");
			system("cls");
			goto A;
			break;
			
			
		case 7:
			s.remove();
			system("pause");
			system("cls");
			goto A;
			break;
			
			
		case 8:
			exit(0);
			break;
			
	}
	
	return 0;	
}
