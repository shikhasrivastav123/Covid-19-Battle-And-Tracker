#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int countpat=0;
class cvd
{
  protected:
    char dcough,tired,dbreath,nasal,diar;
    cvd()
    {
        dcough=tired=dbreath=nasal=diar='N';
    }
    void symp_info()
    {
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
        cout<<"Enter 'Y' for yes and 'N' for no,for following symptoms\n";
        cout<<"1. For dry cough :\t";
        cin>>dcough;
        cout<<"2. For tiredness :\t";
        cin>>tired;
        cout<<"3. For difficult breathing :\t";
        cin>>dbreath;
        cout<<"4. for nasal congestion :\t";
        cin>>nasal;
        cout<<"5. for diarrhoea :\t";
        cin>>diar;
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
    }
    void check_symp ()
    {
        cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
        cout<<"\nReport of Patient's Symptoms\n";
        cout<<"1. For dry cough            :\t"<<dcough<<endl;
        cout<<"2. For tiredness            :\t"<<tired<<endl;
        cout<<"3. For difficult breathing  :\t"<<dbreath<<endl;
        cout<<"4. for nasal congestion :\t"<<nasal<<endl;
         cout<<"5. for diarrhoea :\t"<<diar<<endl;
        if((dcough=='Y' || dcough=='y') && (tired=='Y' || tired=='y')&& (dbreath=='Y' || dbreath=='y')&&(nasal=='Y' || nasal=='y')&&(diar=='Y' || diar=='y'))
        {
            cout<<"Take patient's covid-19 test and keep in isolation immediately\n";
        }
        else
        {
            cout<<"No need of covid-19 test ,do normal check up\n";
        }
    }
};

class all: public cvd
{
private:
  struct address
  {
    int house;
    char street[30],city[30],state[30],country[30];
  };
  struct age
  {
    int day,month,year;
  };
protected:
  struct patient_info
  {
    char name[50];
    address AD1;		//nested structure implemented
    age A1;			//nested structure inplemented
    int martial_status,reg_no,bld_group,sex,temp;
    char cold;
  } PI[100];
  int task;
  void enter_patient_info ();
  void show_patient_detail ();
public:
  void software_detail ();
  void tasks ();
  char answer,answer1,ch;
  int serial;
};
class date
{
private:
  int date,month,year;
public:
  void enter_date ();
  void show_date ();
};

class dob
{
private:
  struct dob1
  {
    int date,month,year;
    int rem;
  } DOB11[100];
public:
  void enter_date ();
  void show_date ();
};

int i = 0,rem,count,regis,attempt,temp;
int show_count = 0;
all A1;				//object declared
date D1;			//object declared
dob DOB1;			//object declared
int main ()
{
  count = 0;
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n";
  cout << "\n\t\t\t\t\t\t\t\t            Welcome To" << "\n\n";
  cout << "\n\t\t\t\t\t\t\t\t**  CORONAVIRUS DISEASE 2019  **" << "\n\n";
  cout << "\n\t\t\t\t\t\t\t\t**      BATTLE AND TRACKER    **" << "\n\n";
  cout<< "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
  D1.enter_date ();
  A1.tasks ();
  return 0;
}
void all::tasks ()
{
  attempt = 0;
  D1.show_date ();
  cout<<"\n\n";
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
  cout << "\n\t\t\t\t\t\t\t\t**           COVID-19           **" << "\n\n";
  cout << "\n\t\t\t\t\t\t\t\t**      BATTLE AND TRACKER      **" << "\n\n";
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
  cout << "Please  select a task to do...." << "\n\n";
  cout << "1. Enter a new patient information ." << "\n";
  cout << "2. No of active patient's.\n";
  cout << "3. View detail of existing patient ." << "\n";
  cout << "4. Know PREVENTION .\n";
  cout << "5. View detail about the program ." << "\n";
  cout << "6. Exit from the program ." << "\n\n";
  //other function remain
  cout << "Enter your task serial :\t";
  cin >> task;
  switch (task)
    {
    case 1:
      {A1.enter_patient_info ();break;}
    case 2:
      {
          system ("CLS");
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
  cout<<"\n\t\t\t\t\t\t\t\t  ACTIVE PATIENTS = "<<countpat<<endl;
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
    getch();
	A1.tasks ();
      }
    case 3:
      {A1.show_patient_detail ();break;}
    case 4:
        {
            system ("CLS");
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
  cout << "\n\t\t\t\t\t\t\t\t**           COVID-19           **" << "\n\n";
  cout << "\n\t\t\t\t\t\t\t\t**          PREVENTION          **" << "\n\n";
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
  cout << "1.STAY home.\n2.Keep SAFE distance.\n3.WASH hands often.\n4.COVER your cough\n5.Always use mask whenever you step out of your house\n6.use sanitizers before entering the house\n";
            getch();
	A1.tasks ();
        }
    case 5:
      {A1.software_detail ();break;}
    case 6:
      {
	system ("CLS");
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
  cout << "Thank You for trying this program !!!" << "\n";
  cout << " This is the end of program...." << "\n";
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
  cout << " Press any key to exit....." << "\n\n";
	getch();
	exit (0);
	break;
      }
    default:
      {
	system ("CLS");
	cout << "Invalid task serial ." << "\n";
	cout << "Press any key to continue...." << "\n";
	getch();
	system ("CLS");
	A1.tasks ();
      }
    }
}

void all::enter_patient_info ()
{
  system ("CLS");
  answer = 'y';
  if (count == 0)
    {serial = 1;}
  else
    {i = serial;}
  for (i = serial; answer == 'y' || answer == 'Y'; i++)
    {
      PI[i].reg_no = i;
      temp = serial;
      cout << "\nENTERING PATIENT'S DETAILS AS PER SERIAL NUMBER :\t" <<i<< "\n";
      cin.get (ch);
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "Registration Number :\t" << PI[i].reg_no <<"\n";
      cout << "Name of patient :\t";
      cin.getline (PI[i].name, 50);
      cout << "Sex (1-Male 2-Female) :\t";
      cin >> PI[i].sex;
      while (PI[i].sex != 1 && PI[i].sex != 2)
	{
	  cout << "Invalid input for sex of patient!!!" << "\n";
	  cout << "Sex :\t";
	  cin >> PI[i].sex;
	}
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "ENTER ADDRESS:-" << "\n\n";
      cout << "House number :\t";
      cin >> PI[i].AD1.house;
      while (PI[i].AD1.house <= 0)
	{
	  cout << "Invalid input for house number ." << "\n";
	  cout << "Again enter the house number :\t";
	  cin >> PI[i].AD1.house;
	}
      cin.get (ch);
      cout << "Street :" << "\t";
      cin.getline (PI[i].AD1.street, 30);
      cout << "City :" << "\t";
      cin.getline (PI[i].AD1.city, 30);
      cout << "State :" << "\t";
      cin.getline (PI[i].AD1.state, 30);
      cout << "Country :" << "\t";
      cin.getline (PI[i].AD1.country, 30);
      DOB1.enter_date ();
      //to calculate age
      cin.get (ch);
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "Martial status(1-Married,2-Not Married ):" << "\t";
      if (count != 0)
        {cout << "\n";}
      cin >> PI[i].martial_status;
      while (PI[i].martial_status < 1 || PI[i].martial_status > 2)
	{
	  cout << "Invalid input for martial status ." << "\n";
	  cout << "Enter a valid martial status :" << "\t";
	  cin >> PI[i].martial_status;
	}
      cin.get (ch);
      if (count != 0)
        {cout << "\n";}
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "Blood group :\n1. A+\n2. A-\n3. B+\n4. B-\n5. AB+\n6. AB-\n7. O+\n8. O-\n";
      cout << "Enter :" << "\t";
      cin >> PI[i].bld_group;
      switch (PI[i].bld_group)
	{
	case 1:case 2:case 3:case 4:case 5:case 6:case 7:
	case 8:
	  {break;}
	default:
	    {while (PI[i].bld_group != 1 && PI[i].bld_group != 2
		   && PI[i].bld_group != 3 && PI[i].bld_group != 4
		   && PI[i].bld_group != 5 && PI[i].bld_group != 6
		   && PI[i].bld_group != 7 && PI[i].bld_group != 8)
	      {
		cout << "Invalid input !" << "\n";
		cout << "Blood Group :" << "\t";
		cin >> PI[i].bld_group;
	      }break;
        }
	}
      cin.get (ch);
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "Enter the patient's fever temperature in celcius :\t";
      cin >> PI[i].temp;
      cout << "Enter 'y' if the patient have cold also :\t";
      cin >> PI[i].cold;
      if((PI[i].temp>=100) && (PI[i].cold=='y'||PI[i].cold=='Y'))
        {
          cout << " We have to check further symptoms, related to COVID-19 Disease\n";
          symp_info();
          check_symp();
        }
      else
        {cout<<"Do normal check up\n";}
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "Want to enter information for another patient ? for yes enter 'Y' " << "\n";
      cin >> answer;
      count++;
      serial++;
    }
  countpat++;
  system ("CLS");
  A1.tasks ();
}

void dob::enter_date ()
{
  cout << "\nDate of birth" << "\n";
  cout << "Year  :\t";
  cin >> DOB11[temp].year;
  if (DOB11[temp].year <= 0 || DOB11[temp].year > 10000)
    {
        do
	{
	  cout << "Invalid input for year !" << "\n";
	  cout << "Please enter the year correctly :" << "\t";
	  cin >> DOB11[temp].year;
	}
      while (DOB11[temp].year < 0 || DOB11[temp].year > 10000);
    }
  cout << "Month :\t";
  cin >> DOB11[temp].month;
  if (DOB11[temp].month <= 0 || DOB11[temp].month > 12)
    {
      do
	{
	  cout << "Invalid input for month !" << "\n";
	  cout << "Again enter the month :" << "\t";
	  if (count != 0)
	    {
	      cout << "\n";
	    }
	  cin >> DOB11[temp].month;
	}
      while (DOB11[temp].month < 0 || DOB11[temp].month > 12);
    }
  cout << "Date  :\t";
  switch (DOB11[temp].month)
    {
    case 1:case 3:case 5:case 7:case 8:case 10:
    case 12:
      {
	cin >> DOB11[temp].date;
	while (DOB11[temp].date < 1 || DOB11[temp].date > 31)
	  {
	    cout << "Invalid date !" << "\n";
	    cout << "Again enter the date :" << "\t";
	    cin >> DOB11[temp].date;
	  }
	break;
      }
    case 2:
      {
	cin >> DOB11[temp].date;
	if (DOB11[temp].year % 4 == 0)
	  {
	    while (DOB11[temp].date < 0 || DOB11[temp].date > 29)
//for leap year
	      {
		cout << "Invalid date !" << "\n";
		cout << "Again enter the date :" << "\t";
		cin >> DOB11[temp].date;
	      }
	  }
	else
	  {
	    while (DOB11[temp].date < 0 || DOB11[temp].date > 28)
//for non-leap year
	      {
		cout << "Invalid date !" << "\n";
		cout << "Again enter the date :" << "\t";
		cin >> DOB11[temp].date;
	      }
	  }
	break;
      }
    default:
      {
	cin >> DOB11[temp].date;
	while (DOB11[temp].date < 1 || DOB11[temp].date > 30)
	  {
	    cout << "Invalid date !" << "\n";
	    cout << "Again enter the date :" << "\t";
	    cin >> DOB11[temp].date;
	  }
	break;
      }
    }				//end of switch
}

void date::enter_date ()
{
  cout << "Enter today's date in numeric format..." << "\n\n";
  cout << "Year  :\t";
  cin >> year;
  if (year <= 0 || year > 10000)
    {
      do
	{
	  cout << "Invalid input for year !" << "\n";
	  cout << "Please enter the year correctly :" << "\n";
	  cin >> year;
	}
      while (year < 0 || year > 10000);
    }
  cout << "Month :\t";
  cin >> month;
  if (month <= 0 || month > 12)
    {
      do
	{
	  cout << "Invalid input for month !" << "\n";
	  cout << "Again enter the month :" << "\n";
	  cin >> month;
	}
      while (month < 0 || month > 12);
    }
  cout << "Date  :\t";
  switch (month)
    {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
      {
	cin >> date;
	while (date < 1 || date > 31)
	  {
	    cout << "Invalid date !" << "\n";
	    cout << "Again enter the date :" << "\n";
	    cin >> date;
	  }
	break;
      }
    case 2:
      {
	cin >> date;
	if (year % 4 == 0)
	  {
	    while (date < 0 || date > 29)	//for leap year
	      {
		cout << "Invalid date !" << "\n";
		cout << "Again enter the date :" << "\n";
		cin >> date;
	      }
	  }
	else
	  {
	    while (date < 0 || date > 28)	//for non-leap year
	      {
		cout << "Invalid date !" << "\n";
		cout << "Again enter the date :" << "\n";
		cin >> date;
	      }
	  }
	break;
      }
    default:
      {
	cin >> date;
	while (date < 1 || date > 30)
	  {
	    cout << "Invalid date !" << "\n";
	    cout << "Again enter the date :" << "\n";
	    cin >> date;
	  }
	break;
      }
    }				//end of switch
}

void date::show_date ()		//remove the goto ststements in this function
{
  system ("CLS");
  cout << "HEY.,..It's ";
  cout << date;
  rem = date % 10;
  switch (date)
    {
    case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:
    case 20:
      {
	cout << "th ";
	goto over;
      }
    }
  switch (rem)
    {
    case 1:
      {cout << "st ";break;}
    case 2:
      {cout << "nd ";break;}
    case 3:
      {cout << "rd ";break;}
    default:
      {cout << "th ";break;}
    }
over:
  switch (month)
    {
    case 1:
      {cout << "January , ";break;}
    case 2:
      {cout << "February , ";break;}
    case 3:
      {cout << "March , ";break;}
    case 4:
      {cout << "April , ";break;}
    case 5:
      {cout << "May , ";break;}
    case 6:
      {cout << "June , ";break;}
    case 7:
      {cout << "July , ";break;}
    case 8:
      {cout << "August , ";break;}
    case 9:
      {cout << "September , ";break;}
    case 10:
      {cout << "October , ";break;}
    case 11:
      {cout << "November , ";break;}
    case 12:
      {cout << "December , ";break;}

    }
  cout << year << " ";
}

void all::show_patient_detail ()
{
  do
    {
      system ("CLS");
      cout << "Enter registration number :" << "\n";
      cin >> regis;
      cin.get (ch);
      show_count++;
      if (regis > 0 && regis < serial)
	{
	  cout << "\nINFORMATION FOR PATIENT REGISTRATION NUMBER " << regis<< "\n";
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "Name           : " << PI[regis].name << "\n";
	  cout << "Sex            : ";
	  if (PI[regis].sex == 1)
	    {cout << "Male " << "\n";}
	  if (PI[regis].sex == 2)
	    {cout << "Female " << "\n";}
	  cout << "Blood Group    : ";
	  switch (PI[regis].bld_group)
	    {
	    case 1:
	      {cout << "A+\n";break;}
	    case 2:
	      {cout << "A-\n";break;}
	    case 3:
	      {cout << "B+\n";break;}
	    case 4:
	      {cout << "B-\n";break;}
	    case 5:
	      {cout << "AB+\n";break;}
	    case 6:
	      {cout << "AB-\n";break;}
	    case 7:
	      {cout << "O+\n";break;}
	    case 8:
	      {cout << "O-\n";break;}
	    }
	  cout << "Date of birth  : ";DOB1.show_date (); cout<<endl;
	  cout << "Martial Status : ";
	  if (PI[i].martial_status == 1)
	    {cout << "Married " << "\n";}
	  else
	    {cout << "Not married " << "\n";}
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "\nADDRESS:-"<<endl;
	  cout << "House no.      : " << PI[regis].AD1.house<<endl;
	  cout << "Street         : " << PI[regis].AD1.street<<endl;
	  cout << "City           : " << PI[regis].AD1.city<<endl;
	  cout << "State          : " << PI[regis].AD1.state<<endl;
	  cout << "Country        : " << PI[regis].AD1.country<<endl;
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "Temperature in celcius :\t"<<PI[regis].temp<<endl;
      cout << "Have Cold :\t"<<PI[regis].cold<<endl;
      if((PI[regis].temp>=100) && (PI[regis].cold=='y'||PI[regis].cold=='Y'))
        {check_symp();}
        else
        {cout<<"Normal check up\n";}
	}
      else
	{
	  if (regis==1)
	    {
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "Database is empty !!!" << "\n";
      cout << "Press any key to exit to main task menu..." << "\n";
	      getch();
	      system ("CLS");
	      A1.tasks ();
	    }
	  attempt++;
	  if (attempt == 3)
	    {
	      cout << "You have entered wrong registration number 3 times ."
		<< "\n\n";
	      cout << "Access Denied!!! " << "\n";
	      cout << "Please try again later. " << "\n";
	      cout << "Press any key to exit to main task menu..." << "\n";
	      getch();
	      system ("CLS");
	      A1.tasks ();
	    }

      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "Sorry, the registration number is invalid ." << "\n";
	  cout << "Press any key to continue...." << "\n";
	  getch();
	  A1.show_patient_detail ();
	}
      cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
      cout << "Want to see information of another patient :for yes enter 'Y' " << "\n";
      cin >> answer1;
    }
  while (answer1 == 'y' || answer1 == 'Y');
  system ("CLS");
  A1.tasks ();
}

void dob::show_date ()
{
  cout << DOB11[regis].date;
  rem = DOB11[regis].date % 10;
  switch (DOB11[regis].date)
    {
    case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:
      {
	cout << "th ";
	goto over;
      }
    }
  switch (rem)
    {
    case 1:
      {cout << "st ";break;}
    case 2:
      {cout << "nd ";break;}
    case 3:
      {cout << "rd ";break;}
    default:
      {cout << "th ";break;}
    }
over:
  switch (DOB11[regis].month)
    {
    case 1:
      {cout << "January , ";break;}
    case 2:
      {cout << "February , ";break;}
    case 3:
      {cout << "March , ";break;}
    case 4:
      {cout << "April , ";break;}
    case 5:
      {cout << "May , ";break;}
    case 6:
      {cout << "June , ";break;}
    case 7:
      {cout << "July , ";break;}
    case 8:
      {cout << "August , ";break;}
    case 9:
      {cout << "September , ";break;}
    case 10:
      {cout << "October , ";break;}
    case 11:
      {cout << "November , ";break;}
    case 12:
      {cout << "December , ";break;}
    }
  cout << DOB11[regis].year << " ";
}

void all::software_detail ()
{
  system ("CLS");
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
  cout << "\n\t\t\t\t\t\t\t\t**       SOFTWARE DETAILS       **" << "\n\n";
  cout << "\n\t\t\t\t\t\t\t\t**  COVID-19(BATTLE & TRACKER)  **" << "\n\n";
  cout << " Programming Language     : C++ " << "\n";
  cout << " Aim                      : Simulation of the software used in Hospitals,railways etc"<< "\n";
  cout << " Hope you like it..." << "\n";
  cout << " Thank You. " << "\n";
  cout << "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<"\n\n";
  cout << "Press any key to return to the main task menu......." << "\n";
  getch();
  A1.tasks ();
}
