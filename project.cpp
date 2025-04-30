#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


class Account
{
private:
    string name;
    string accno;
    string atype;
public:
	
    void  getAccountDetails()
    {
        cout<<"\nEnter Customer Name : ";
        cin>>name;
        cout<<"Enter Account Number  : ";
        cin>>accno;
        cout<<"Enter Account Type    : ";
        cin>>atype;
    }
    void displayDetails()
    {
        cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<accno;
        cout<<"\nAccount Type    : "<<atype<<endl;
    }
};
class current_account : public Account
{
private:
    double balance=1000.0;
public:
    void c_display()
    {
        cout<<"\nBalance :"<<balance;
    }
    void c_deposit()
    {
        double deposit;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        balance = balance + deposit;
        cout<<"\n\n\tAmount added successfully"<<endl;
		cout<<"Total Amount After Deposit: "<<balance<<endl;
    }
    void c_withdraw()
    {
        double withdraw;
        cout<<"\n\nBalance : "<<balance;
        cout<<"\nEnter amount to be withdraw :";
        cin>>withdraw;
        if(balance > 1000 && balance > withdraw)
        {
            balance=balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
 
    }
 
 
};


 
class saving_account : public current_account
{
private:
    float sav_balance=1000.0;
public:
	 void s_display()
    {
        cout<<"\nBalance :  "<<sav_balance<<endl;
    }
    void s_deposit()
    {
        double deposit,interest;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        cout<<"\n\t\t Amount added...";
        interest=(sav_balance*2)/100;
        sav_balance=sav_balance+interest;
    }
    void s_withdraw()
    {
        double  withdraw;
        cout<<"\nBalance :: "<<sav_balance;
        cout<<"\nEnter amount to be withdraw : ";
        cin>>withdraw;
        if(sav_balance > 500 && sav_balance > withdraw)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }
    
    
   void fun(){
   
    char type;
    cout<<"\nEnter S for saving customer and C for current a/c customer : ";
    cin>>type;
    int choice;
    if(type=='s' || type=='S')
    {
        getAccountDetails();
        
        
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                s_deposit();
                break;
            case 2 :
                s_withdraw();
                break;
            case 3 :
                s_display();
                break;
            case 4 :
                displayDetails();
                s_display();
                break;
            case 5 :
            	//getAccountDetails();
                break;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        
    }
    else if(type=='c' || type=='C')
    {
        getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                c_deposit();
                break;
            case 2 :
                c_withdraw();
                break;
            case 3 :
                c_display();
                break;
            case 4 :
                displayDetails();
                c_display();
                break;
            case 5 :
    
			//getAccountDetails();
            exit(1);
                break;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else
    {
        cout<<"\nInvalid Account Selection";
    }

   }
};
 
 
 





/////////////////////////////////////////////////////////////////////////////////////////////////////////////////





class bank
{
private:
	int f;
	int p;
	int t;
	int pass;
	string Username;
	int Password = 1234;
	int check;
	int menu;
	char back;
	int count;
	int amount;
	int withdraw;
	int transfer;
	char yes;
	int A;
public:

	bank(int F, int P, int T, int z, string u, int pp, int C, int M, char b, int cc, int AA, int W, int t, char y, int A);

	void set();
	void s();
	void s1();
	void s2();
	void s3();
	void space();
	void front();
	void manager();
	void mainmenu();
	void staff();
};
bank::bank(int F = 0, int P = 0, int T = 0, int z = 0, string u = "", int pp = 0, int C = 0, int M = 0, char b = 0, int cc = 0, int AA = 0, int W = 0, int t = 0, char y = 0, int A = 0)
{
	{
		f = F;
		p = P;
		t = T;
		pass = z;
		Username = "waheed";
		Password = 1234;
		check = C;
		menu = M;
		back = b;
		count = 0;
		amount = AA;
		withdraw = W;
		transfer = t;
		yes = 'Y';
		A = 0;
	}
}
void bank::s() {
	cout << setw(40) << "||||||||||||||||||||||||||||||||||";
}
void bank::s1() {
	cout << setw(90) << "////////////////////////////////////////////////////////////////////////////////";
}
void bank::s2() {
	cout << setw(80) << "|============================================================|";
}
void bank::s3() {
	cout << setw(80) << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
}


void bank::front()
{
	cout << setw(57) << "| Press 1 for Manager |" << endl << endl;
	cout << setw(58) << "| Press 2 for Customer |" << endl << endl;
	cout << setw(55) << "| Press 3 for Staff |" << endl << endl;
}

void bank::manager()
{
	//cout << setw(65) << "press 1 for View All records" << endl << endl;
	cout << setw(67) << "| Press 2 for change  passwords |" << endl << endl;
	cout << setw(69) << "| Press 3 to see staff Attandence |" << endl << endl;
	cout << setw(69) << "| Press 4 to see All new Accounts |" << endl << endl;
	cout << setw(81) << "| Press 5 to delete All records of Attandence |" << endl << endl;
	cout << setw(68) << "| Press 6 to delete All Accounts |" << endl << endl;
	cout << setw(60) << "| Press 7 to go back |" << endl << endl;


}

void bank::mainmenu() {//for customer
	cout << setw(65) << "\n| press 1 for Opening Account |" << endl << endl;
	cout << setw(64) << "| press 2 for Deposit Amount  |" << endl << endl;
	cout << setw(65) << "| press 3 for Withdraw Amount |" << endl << endl;
	cout << setw(69) << "| press 4 for Display Amountt |" << endl << endl;
	//cout << setw(64) << "press 5 for Delete Account" << endl << endl;
	cout << setw(54) << "| press 6 for Loan |" << endl << endl;
	cout << setw(65) << "| press 7 for Transfer Amount |" << endl << endl;
	cout << setw(60) << "| press 8 to go back |" << endl << endl;
}

void bank::staff() {
	cout << setw(64) << "| press 1 to see your Attandence |" << endl << endl;
	cout << setw(65) << "| press 2 to mark your Attandence |" << endl << endl;
	cout << setw(66) << "| press 3 to open someonce Account |" << endl << endl;
	cout << setw(70) << "| press 4 to  Deposit somewonce Amount |" << endl << endl;
	cout << setw(69) << "| press 5 to Withdraw someonce Amount |" << endl << endl;
	cout << setw(74) << "| press 6 for Display someonce All Account |" << endl << endl;
	cout << setw(68) << "| press 7 to Delete someonce Accout |" << endl << endl;
	cout << setw(70) << "| press 8 for Transfer someonce Amount |" << endl << endl;
	cout << setw(60) << "| press 9 to go back |" << endl << endl;
}

void bank::space() {
	cout << endl;
	cout << endl;
	cout << endl;

}

void bank::set()
{
	int f;
	int p;
	int t;
	int pass;
	string Username;
	int Password = 1234;
	int check;
	int menu;
	char back;
	int count = 0;
	int amount;
	int withdraw;
	int transfer;
	char yes;
	int A = 0;

	/*void s();
	void s1();
	void s2();
	void s3();
	void space();
	void front();
	void manager();
	void mainmenu();
	void staff();*/

	struct Person
	{
		char name[50];
		char F_name[50];
		int age;
		float salary;
		int cnic;
		string email;
		string Address;
	};
	struct del
	{
		char name[50];
		int Account_no;
		int cnic;

	};
	struct attandence
	{
		char name[50];
		int id;

	};
	struct loan
	{
		char name[50];
		char F_name[50];
		int age;
		float salary;
		int loan;
		string email;
		int cnic;
		string Address;
	};
	struct Transfer
	{
		char name[50];
		char F_name[50];
		int Banificry_Account_no;
		int Amount;
		int your_Acount_no;
		int cnic;
		string email;
		string Address;
	};


	system("cls");

	space();
	space();
	s1();
	cout << endl;
	s();
	cout << setw(0) << "    Main Menu";
	s();
	cout << endl;
	s1();

	/*
	calling functions
	*/
mainn:
	space();
	s3();
	cout << endl;
	cout << endl;

	front();
	s3();
	cout << endl;
	cin >> f;
	//main switch
	switch (f)
	{
		/*************************************************** For Manager *****************************************************************************/

	case 1:
	{
		cout << "Enter user name: ";
		cin >> Username;
		if (Username == "shaheer")
		{
			cout << "Enter password: ";
			cin >> check;
			if (check == Password)
			{
				space();
				s();
				cout << "  Welcome Back";
				s();
				space();
				s2();
				cout << endl;
				cout << endl;
			manager:
				manager();
				s2();
				cin >> menu;

				switch (menu)
				{
				case 2:
				{
					cout << "do you want to Change  Passwords (y/n) ?" << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{
						cout << "Enter old Password:";
						cin >> pass;
						if (pass == Password)
						{
							cout << "Enter new Password: ";
							cin >> Password;
							cout << "Password Succesfully changed!";
							space();
							cout << "do you want to go back (y/n) or press (M/m) to go in Main Menu" << endl;
							cin >> yes;
							if (yes == 'y' || yes == 'Y')
							{
								goto manager;
								cout << endl;
							}
							else if (yes == 'm' || yes == 'M')
							{
								cout << "Do you want to go back in Main Menu(y/n)" << endl;
								cin >> yes;
								if (yes == 'Y' || yes == 'y')
								{
									goto mainn;
									cout << endl;
								}
							}
							else
							{
								cout << "the program is terminated!";
								space();
							}
						}
						else
						{
							cout << "you Enter wrong password!";
							space();
							goto manager;
							cout << endl;
						}
					}
					else
					{
						goto manager;
						cout << endl;
					}
				}
				break;

				case 3:
				{
					cout << "Do you want to see Staff Attandence (y/n) ?" << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{

						space();
						fstream new_file;
						new_file.open("your_Attandence.txt", ios::in);// for reading file
						if (!new_file)
							//new_file.close();
							cout << "aaaaaa";

						else {
							char ch; while (!new_file.eof()) {

								new_file >> ch;
								if (ch == ',')
								{
									cout << ch << endl;
								}
								else if (ch == ':')
								{
									cout << endl;
									A++;
								}
								else
								{
									cout << ch;
								}

							}

							new_file.close();


							A--;
							if (A > 0)
							{
								cout << setw(20) << A;
								cout << " Staff Members are present";
							}
							else
							{
								cout << " No Staff Members are present";
							}

						}
					}
					cout << endl;
					cout << "do you want to go back (y/n) or press (M/m) to go in Main Menu" << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{
						goto manager;
						cout << endl;
					}
					else if (yes == 'm' || yes == 'M')
					{
						cout << "Do you want to go back in Main Menu(y/n)";
						cin >> yes;
						if (yes == 'Y' || yes == 'y')
						{
							goto mainn;
							cout << endl;
						}
					}
					else
					{
						cout << "the program is terminated!";
						space();
					}
					cout << endl;
					cout << "do you want to go back (y/n) or press (M/m) to go in Main Menu" << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{
						goto manager;
						cout << endl;
					}
					else
					{
						goto manager;
						cout << endl;
					}
				}

				break;

				case 4:
				{
					cout << "Do you want to see All New Accounts (y/n)? " << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{
						fstream new_file;
						new_file.open("open_Account.txt", ios::in);
						if (!new_file)
							cout << "No such file";

						else
						{
							char ch; while (!new_file.eof()) {
								new_file >> ch;
								if (ch == ',')
								{
									//new_file >> ch;
									cout << ch << endl;
								}
								else
								{

									cout << ch;
								}


							}
							new_file.close();
						}
					}
					cout << endl;
					cout << "do you want to go back (y/n) or press (M/m) to go in Main Menu" << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{
						goto manager;
						cout << endl;
					}
					else if (yes == 'm' || yes == 'M')
					{
						cout << "Do you want to go back in Main Menu(y/n)";
						cin >> yes;
						if (yes == 'Y' || yes == 'y')
						{
							goto mainn;
							cout << endl;
						}
					}
					else
					{
						cout << "program is terminated!";
					}
				}break;

				case 5:
				{
					cout << "DO you want to Delete All Record of Attandence(y/n)?" << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{
						A = 0;
						cout << "| Attandence record is deleted!! |";
						fstream new_file;

						new_file.open("your_Attandence.txt", ios::out | ios::trunc);

						new_file.close();

					}
					cout << endl;
					cout << "do you want to go back (y/n) or press (M/m) to go in Main Menu" << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{
						goto manager;
						cout << endl;
					}
					else if (yes == 'm' || yes == 'M')
					{
						cout << "Do you want to go back in Main Menu(y/n)";
						cin >> yes;
						if (yes == 'Y' || yes == 'y')
						{
							goto mainn;
							cout << endl;
						}
					}
					else
					{
						cout << "program is terminated!";
					}
				}
				break;

				case 6:
				{
					cout << "DO you want to delete All Accounts (y/n) ?" << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{
						cout << "All Record is deleted" << endl;
						fstream new_file;
						new_file.open("open_Account.txt", ios::out | ios::trunc);
						if (!new_file)
						{
							cout << "|| All Accounts deleted ||" << endl;
							count = 0;
						}
						else
						{
							char ch; while (!new_file.eof()) {
								new_file >> ch;
								cout << ch;
							}
							new_file.close();
						}

					}
					cout << "do you want to go back (y/n) or press (M/m) to go in Main Menu" << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{
						goto manager;
						cout << endl;
					}
					else if (yes == 'm' || yes == 'M')
					{
						cout << "Do you want to go back in Main Menu(y/n)";
						cin >> yes;
						if (yes == 'Y' || yes == 'y')
						{
							goto mainn;
							cout << endl;
						}
					}
					else
					{
						cout << "program is terminated!";
					}
				}
				break;
				case 7:
				{
					cout << "DO you want to go back(y/n)?:" << endl;
					cin >> yes;
					if (yes == 'y' || yes == 'Y')
					{
						goto mainn;
						cout << endl;
					}
					else
					{
						goto manager;
						cout << endl;
					}
				}
				default:
					cout << "please enter between (1 to 8)";
					goto manager;
					cout << endl;
					break;
				}

			}
			else
			{
				cout << "|| incorrect password !!! ||" << endl;
				goto mainn;
			}
		}
		else
		{
			cout << "|| incorrect Username!!! ||" << endl;
			goto mainn;
		}
	}break;

	/*************************************************** For Customers *****************************************************************************/

	case 2:
	{
//	customer:
		space();
		s();
		cout << "  ASSALAMOALAIKUM";
		s();
		space();
		s2();
		cout << endl;
		cout << endl;
		saving_account Sav;//composition
		Sav.fun();
		set();

	}break;

	/*************************************************** For Staff Members *****************************************************************************/

	case 3:
	{

		cout << "you are a staff member ? (y/n)";
		cin >> yes;
		cout << "Enter the password: ";
		cin >> check;
		if (check == Password)
		{
			cout << endl;
		staff:
			s2();
			cout << endl;
			cout << endl;

			staff();
			s2();
			cin >> menu;
			switch (menu)
			{
			case 1:
			{
				cout << "Do you want to see your Attancence?(y,n)" << endl;
				cin >> yes;
				if (yes == 'y' || yes == 'Y')
				{
					fstream new_file;
					new_file.open("your_Attandence.txt", ios::in);// for reading file
					if (!new_file)
						cout << "No such file";

					else {
						char ch; while (!new_file.eof()) {
							new_file >> ch;
							cout << ch;
						}
						new_file.close();
					}

				}
				cout << endl;
				cout << "|| do you want to go back (y/n) or press (M/m) to go back to main menu ||" << endl;
				cin >> back;
				if (back == 'y' || back == 'Y')
				{
					goto staff;
					cout << endl;
				}
				else if (back == 'm' || back == 'M')
				{
					cout << "Do you want to go back in Main Menu(y/n)";
					cin >> yes;
					if (yes == 'Y' || yes == 'y')
					{
						goto mainn;
						cout << endl;
					}
				}
				else
				{
					cout << "Are you sure to terminate program?(y)" << endl;
					cin >> back;
					if (back == 'y' || back == 'Y')
					{
						cout << "your program is terminated";
					}
					else {

						goto staff;
						cout << endl;
					}
				}
			}
			break;
			case 2:
			{
				cout << "Do you want to mark your Attancence?(y,n)" << endl;
				cin >> yes;
				if (yes == 'y' || yes == 'Y')
				{
					attandence a1;

					cout << "Enter your Name:";
					cin >> a1.name;
					cout << "Enter your roll no/id:";
					cin >> a1.id;

					s2();
					cout << endl;
					cout << setw(67) << "|| Check your Information! ||" << endl << endl;
					cout << setw(55) << "your Name: " << a1.name << endl;

					cout << setw(55) << "your roll no/id: " << a1.id << endl;
					fstream new_file;
					new_file.open("your_Attandence.txt", ios::app);
					cout << endl;
					if (!new_file)
					{
						cout << "File creation failed";
					}
					else
					{
						cout << "New file created";
						new_file << "Name   \t  " <<" "<< a1.name << " , " << endl;
						new_file << "Id    \t " << a1.id << ":  " << endl;

						new_file.close();

					}
					space();
					cout << setw(67) << "***Your Attandence is marked***";

					//A = A + 1;

					cout << endl;
					s2();
					space();
					cout << "|| do you want to go back (y/n) or press (M/m) to go to Main Menu||" << endl;
					cin >> back;
					if (back == 'y' || back == 'Y')
					{
						goto staff;
						cout << endl;
					}
					else if (back == 'm' || back == 'M')
					{
						cout << "Do you want to go back in Main Menu(y/n)";
						cin >> yes;
						if (yes == 'Y' || yes == 'y')
						{
							goto mainn;
							cout << endl;
						}
					}
					else
					{
						cout << "Are you sure to terminate program?(y)" << endl;
						cin >> back;
						if (back == 'y' || back == 'Y')
						{
							cout << "your program is terminated";
						}
						else {
							;
							goto staff;
							cout << endl;
						}
					}
				}
			}
			break;
			case 3:
			{
				cout << "Do you want to open someonce Account?(y,n)" << endl;
				cin >> yes;
				if (yes == 'y' || yes == 'Y')
				{
					cout << "ok ";
					Person p1;

					cout << "Enter His/her Name: ";
					cin >> p1.name;
					cout << "Enter His/her Father Name: ";
					cin >> p1.F_name;
					cout << "Enter His/her age: ";
					cin >> p1.age;
					cout << "Enter His/her salary: ";
					cin >> p1.salary;
					cout << "Enter His/her CNIC: ";
					cin >> p1.cnic;
					cout << "Enter His/her E-Mail: ";
					cin >> p1.email;
					cout << "Enter His/her Address: ";
					cin >> p1.Address;

					space();
					
                    fstream new_file;
					new_file.open("open_Account.txt", ios::out);
					if (!new_file)
					{
						cout << "File creation failed";
					}
					else
					{
						s2();
						cout << endl;
						cout << setw(67) << "|| Check your Information! ||" << endl << endl;
						cout << setw(55) << "| His/her Name: " << p1.name << " |" << endl;
						cout << setw(55) << "| His/her Father Name: " << p1.F_name << " |" << endl;
						cout << setw(55) << "| His/her Age: " << p1.age << " |" << endl;
						cout << setw(55) << "| His/her Salary: " << p1.salary << " |" << endl;
						cout << setw(55) << "| His/her CNIC: " << p1.cnic << " |" << endl;
						cout << setw(55) << "| His/her E-Mail: " << p1.email << " |" << endl;
						cout << setw(55) << "| His/her Address: " << p1.Address << " |" << endl;
					}


					space();
					cout << setw(67) << "***Account Succesfully Open***";
					cout << endl;
					s2();
					space();

					cout << endl;
					cout << "|| do you want to go back (y/n) or press (M/m) to go to Main Menu||" << endl;
					cin >> back;
					if (back == 'y' || back == 'Y')
					{
						goto staff;
						cout << endl;
					}
					else if (back == 'm' || back == 'M')
					{
						cout << "Do you want to go back in Main Menu(y/n)";
						cin >> yes;
						if (yes == 'Y' || yes == 'y')
						{
							goto mainn;
							cout << endl;
						}
					}
					else
					{
						cout << "Are you sure to terminate program?(y)" << endl;
						cin >> back;
						if (back == 'y' || back == 'Y')
						{
							cout << "your program is terminated";
						}
						else {
							;
							goto staff;
							cout << endl;
						}
					}

				}
			}
			break;
			case 4:
			{
				cout << "Do you want to Deposit somewonce Amount?(y,n)" << endl;
				cin >> yes;
				if (yes == 'y' || yes == 'Y')
				{
					cout << "Enter Amount:";
					cin >> amount;
					count = count + amount;
					cout << endl;
					cout << endl;
					cout << "||* Amount Succesfully Deposit *||" << endl;

				}
				cout << endl;
				cout << "|| do you want to go back (y/n) or press (M/m) to go to Main Menu||" << endl;
				cin >> back;
				if (back == 'y' || back == 'Y')
				{
					goto staff;
					cout << endl;
				}
				else if (back == 'm' || back == 'M')
				{
					cout << "Do you want to go back in Main Menu(y/n)";
					cin >> yes;
					if (yes == 'Y' || yes == 'y')
					{
						goto mainn;
						cout << endl;
					}
				}
				else
				{
					cout << "Are you sure to terminate program?(y)" << endl;
					cin >> back;
					if (back == 'y' || back == 'Y')
					{
						cout << "your program is terminated";
					}
					else {

						//mainmenu();
						goto staff;
						cout << endl;
					}
				}

			}

			break;
			case 5:
			{
				cout << "Do you want to Withdraw someonce Amount?(y,n)";
				cout << endl;
				cin >> yes;
				if (yes == 'y' || yes == 'Y')
				{
					cout << "enter amount to withdraw: ";
					cin >> withdraw;
					if (withdraw < count)
					{
						cout << "Ammount Succesfully Withdrawed" << endl;

					}
					else
					{
						cout << "insufficient balance!";
					}
					cout << endl;
					cout << "|| do you want to go back (y/n) or press (M/m) to go to Main Menu||" << endl;
					cin >> back;
					if (back == 'y' || back == 'Y')
					{
						goto staff;
					}
					else if (back == 'm' || back == 'M')
					{
						cout << "Do you want to go back in Main Menu(y/n)";
						cin >> yes;
						if (yes == 'Y' || yes == 'y')
						{
							goto mainn;
						}
					}
					else
					{
						cout << "Are you sure to terminate program?(y)" << endl;
						cin >> back;
						if (back == 'y' || back == 'Y')
						{
							cout << "your program is terminated";
						}
						else {

							goto staff;
						}
					}

				}
			}
			break;
			case 6:
			{
				cout << "Do you want to Display someonce All Account?(y,n)" << endl;
				cin >> yes;
				if (yes == 'y' || yes == 'Y')
				{
					cout << count;

				}
				cout << "|| do you want to go back (y/n) or press (M/m) to go to Main Menu||" << endl;
				cin >> back;
				if (back == 'y' || back == 'Y')
				{
					goto staff;
				}
				else if (back == 'm' || back == 'M')
				{
					cout << "Do you want to go back in Main Menu(y/n)";
					cin >> yes;
					if (yes == 'Y' || yes == 'y')
					{
						goto mainn;
					}
				}
				else
				{
					cout << "Are you sure to terminate program?(y)" << endl;
					cin >> back;
					if (back == 'y' || back == 'Y')
					{
						cout << "your program is terminated";
					}
					else {


						goto staff;
					}
				}
			}
			break;
			case 7:
			{
				cout << "Do you want to Delete someonce Account?(y,n)" << endl;
				cin >> yes;
				if (yes == 'y' || yes == 'Y')
				{
					del d1;
					cout << "Enter his/her Name: ";
					cin >> d1.name;
					cout << "Enter his/her Account no: ";
					cin >> d1.Account_no;
					cout << "Enter his/her CNIC: ";
					cin >> d1.cnic;

					space();

					s2();
					cout << endl;
					cout << setw(67) << "|| Check your Information! ||" << endl << endl;
					cout << setw(55) << "his/her Name: " << d1.name << endl;
					cout << setw(55) << "his/her Account no: " << d1.Account_no << endl;
					cout << setw(55) << "his/her CNIC: " << d1.cnic << endl;

					cout << "Enter Account Password: ";
					cin >> p;
					if (p == 1912307)
					{
						space();
						cout << setw(67) << "***Account Succesfully Deleted!***";
						cout << endl;
						s2();
						space();
					}


				}
				cout << endl;
				cout << "|| do you want to go back (y/n) or press (M/m) to go to Main Menu||" << endl;
				cin >> back;
				if (back == 'y' || back == 'Y')
				{
					goto staff;
				}
				else if (back == 'm' || back == 'M')
				{
					cout << endl;
					cout << "Do you want to go back in Main Menu(y/n)";
					cin >> yes;
					if (yes == 'Y' || yes == 'y')
					{
						goto mainn;
					}
				}
				else
				{
					cout << "Are you sure to terminate program?(y)" << endl;
					cin >> back;
					if (back == 'y' || back == 'Y')
					{
						cout << "your program is terminated";
					}
					else {

						//mainmenu();
						goto staff;
					}
				}


			}
			break;
			case 8:
			{
				cout << "Do you want to Transfer someonce Amount to Another Account?(y,n)" << endl;
				cin >> yes;
				if (yes == 'y' || yes == 'Y')
				{
					Transfer t1;
					cout << "Enter his/her Name: ";
					cin >> t1.name;
					cout << "Enter his/her Father Name: ";
					cin >> t1.F_name;
					cout << "Enter his/her Banificry_Account_no";
					cin >> t1.Banificry_Account_no;
					cout << "Enter Amount: ";
					cin >> t1.Amount;
					cout << "Enter his/her Acount_no:";
					cin >> t1.your_Acount_no;
					cout << "Enter his/her CNIC: ";
					cin >> t1.cnic;
					cout << "Enter his/her E-Mail: ";
					cin >> t1.email;
					cout << "Enter his/her Address: ";
					cin >> t1.Address;

					space();

					s2();
					cout << endl;
					cout << setw(67) << "|| Check your Information! ||" << endl << endl;
					cout << setw(55) << "| his/her Name: " << t1.name << " |" << endl;
					cout << setw(55) << "| his/her Father Name: " << t1.F_name << " |" << endl;
					cout << setw(55) << "| his/her Banificry_Account_no : " << t1.Banificry_Account_no << " |" << endl;
					cout << setw(55) << "| The Amount is: " << t1.Amount << endl;
					cout << setw(55) << "| his/her_Acount_no: " << t1.your_Acount_no << " |" << endl;
					cout << setw(55) << "| his/her CNIC: " << t1.cnic << " |" << endl;;
					cout << setw(55) << "| his/her E-Mail: " << t1.email << " |" << endl;;
					cout << setw(55) << "| his/her Address: " << t1.Address << " |" << endl;;

					space();
					cout << setw(67) << "***Amount Succesfully sent!***";
					cout << endl;
					s2();
					space();

				}
				cout << "|| do you want to go back (y/n) or press (M/m) to go to Main Menu||" << endl;
				cin >> back;
				if (back == 'y' || back == 'Y')
				{
					goto staff;
					cout << endl;
				}
				else if (back == 'm' || back == 'M')
				{
					cout << "Do you want to go back in Main Menu(y/n)";
					cin >> yes;
					if (yes == 'Y' || yes == 'y')
					{
						goto mainn;
						cout << endl;
					}
				}
				else
				{
					cout << "Are you sure to terminate program?(y)" << endl;
					cin >> back;
					if (back == 'y' || back == 'Y')
					{
						cout << "your program is terminated";
					}
					else {

						//mainmenu();
						goto staff;
						cout << endl;
					}
				}


			}
			case 9:
			{
				cout << "DO you want to go back:" << endl;
				cin >> yes;
				if (yes == 'y' || yes == 'Y')
				{
					goto mainn;
					cout << endl;
				}
				else
				{
					goto staff;
					cout << endl;
				}
			}
			default:
				cout << "please enter between (1 to 8)";
				goto staff;
				cout << endl;
			}
			break;
		}
		else {
			cout << "|| incorrect password!!! ||" << endl;
		}
	}

	default:
		cout << "please enter between (1 to 3)" << endl;
		goto mainn;
		cout << endl;


		//	return 0;
	}


}

int main()
{
	bank b1;
	b1.set();
	return 0;
}

