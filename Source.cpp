#include<iostream>
#include<string>
using namespace std;
struct creationdateuser
{
	int day;
	int month;
	int year;
};
struct librariansinfo
{
	string email;
	string password;
}librarian[4];
struct studentsaccounts
{
	string email;
	string password;
}studentaccount;
struct Guestaccounts
{
	string email;
	string password;
}guestaccount;
struct studentinfo
{
	int ID;
	string name;
	string email;
	string passcode;
	string accounttype;
	creationdateuser dateuser;
	int contactnumbers[3];
}s[10];
struct books
{
	string title;
	string productionyear;
	int numberofcopies;
	string category;
	int edition;
}book[3];
int main()
{
	int n = 5; int iindex=0;
	char choice = 'n'; bool choice1 = false; bool choice2 = false; char libchoice = 'y'; int librarianchoice = 4; int studentchoice; string bookpurchase; bool bookpurchasefound = false;
	string booksearch; char choice4 = 'n';
	librarian[0].email = "ahm@lib.com";
	librarian[0].password = "12345";
	librarian[1].email = "moh@lib.com";
	librarian[1].password = "56789";
	librarian[2].email = "kam@lib.com";
	librarian[2].password = "abcde";
	librarian[3].email = "abd@lib.com";
	librarian[3].password = "efghi";
	book[0].title = "The Great Gatsby";
	book[0].productionyear = "1925";
	book[0].numberofcopies = 3;
	book[0].category = "Tragedy";
	book[0].edition = 3;
	book[1].title = "Physics for scientists and engineers";
	book[1].productionyear = "1975";
	book[1].numberofcopies = 6;
	book[1].category = "Scientific";
	book[1].edition = 4;
	book[2].title = "Dracula";
	book[2].productionyear = "1879";
	book[2].numberofcopies = 4;
	book[2].category = "Horror";
	book[2].edition = 1;
	studentaccount.email = "amr@lib.com";
	studentaccount.password = "amr12";
	guestaccount.email = "drmoh@lib.com";
	guestaccount.password = "drmoh14";
	string libemail; string pass; bool match = false; string bookchoice; string bookpurchasechoice;
	bool foundbook = false; string booktitle; int accountchoice; bool studentmatch = false; bool foundstudentbook = false;
	cout << "Welcome to The Library" << endl;
	cout << "Please Enter Account type 1- Student  2- Guest 3- Staff " << endl;
	cin >> accountchoice;
	if (accountchoice == 1)
	{
		cout << "Please Enter the Email" << endl;
		cin >> libemail;
		cout << "Please Enter the password" << endl;
		cin >> pass;
		if (libemail == studentaccount.email&&pass == studentaccount.password)
		{
			studentmatch = true;
		}
		if (!studentmatch)
		{
			cout << "Access Denied" << endl;
			while (!studentmatch)
			{
				cout << "Please Enter the Email" << endl;
				cin >> libemail;
				cout << "Please Enter the Password" << endl;
				cin >> pass;
				if (studentaccount.email == libemail&&studentaccount.password == pass)
				{
					studentmatch = true;
				}

			}
		}
		if (!studentmatch)
		{
			cout << "Access Denied" << endl;
		}

		if (studentmatch)
		{
			cout << "Access Granted" << endl;
			cout << "Welcome Sir" << endl;
			cout << "Would You like to : 1- Buy a Book 2- Search for a book" << endl;
			cin >> studentchoice;
			if (studentchoice == 1)
			{
				cout << "Not Available" << endl;
				cout << "Only Staff are allowed to buy a Book" << endl;
			}
			if (studentchoice == 2)
			{
				cout << "Please Enter The Title of the book or its Production year" << endl;
				cin >> booksearch;
				for (int i = 0; i < 3; i++)
				{
					if (booksearch == book[i].title)
					{
						foundstudentbook = true;
						booktitle = book[i].productionyear;
					}
					if (booksearch == book[i].productionyear)
					{
						foundstudentbook = true;
						booktitle = book[i].title;
					}

				}
				if (foundbook = true)
				{
					cout << " Found" << endl;
					cout << "Further information : " << booktitle << endl;
				}
				else
				{
					cout << "Not Found" << endl;
				}
			}

		}
	}

	if (accountchoice == 3)
	{
		cout << "Please Enter the Email" << endl;
		cin >> libemail;
		cout << "Please Enter the Password" << endl;
		cin >> pass;
		for (int i = 0; i < 4; i++)
		{
			if (librarian[i].email == libemail&&librarian[i].password == pass)
			{
				match = true;
			}
		}
		if (!match)
		{
			cout << "Access Denied" << endl;
			while (!match)
			{
				cout << "Please Enter the Email" << endl;
				cin >> libemail;
				cout << "Please Enter the Password" << endl;
				cin >> pass;
				for (int i = 0; i < 4; i++)
				{
					if (librarian[i].email == libemail&&librarian[i].password == pass)
					{
						match = true;
					}
				}
				if (!match)
				{
					cout << "Access Denied" << endl;
				}
			}
		}
		if (match)
		{
			cout << "Access Granted" << endl;
			cout << "Welcome Sir" << endl;
			cout << "Would You like to : 1- Buy a Book 2- Search for a book 3- Sign up users" << endl;
			cin >> librarianchoice;
			if (librarianchoice == 3)
			{
				cout << "Please Enter the number of users you'd like them to sign up" << endl;
				cin >> n;
				for (int i = 0; i < n; i++)
				{
					cout << "Please Enter the ID of The user" << endl;
					cin >> s[i].ID;
					cout << "Please Enter the Name of the user" << endl;
					cin >> s[i].name;
					cout << "Please Enter the email" << endl;
					cin >> s[i].email;
					cout << "Please Enter the Password" << endl;
					cin >> s[i].passcode;
					cout << "Please Enter the Accounttype" << endl;
					cin >> s[i].accounttype;
					while (s[i].accounttype != "Student"&&s[i].accounttype != "Guest"&&s[i].accounttype != "Staff")
					{
						cout << "Not Available" << endl;
						cout << "Please Enter the Accounttype" << endl;
						cin >> s[i].accounttype;
					}
					cout << "Please Enter the Creation date" << endl;
					cin >> s[i].dateuser.day;
					cin >> s[i].dateuser.month;
					cin >> s[i].dateuser.year;
					cout << "Please Enter the contact number" << endl;
					cin >> s[i].contactnumbers[0];
					cout << "Would You like to add more" << endl;
					cout << "Enter y or Y for agreement and n or N for denial" << endl;
					cin >> choice;
					if (choice == 'y' || choice == 'Y')
					{
						choice1 = true;
					}
					if (choice1 == true)
					{
						cin >> s[i].contactnumbers[1];
						cout << "Would you like to add more" << endl;
						cin >> choice;
						if (choice == 'y' || choice == 'Y')
						{
							choice2 = true;
						}
					}
					if (choice2 == true)
					{
						s[i].contactnumbers[2];
					}
				}
			}
			if (librarianchoice == 2)
			{
				cout << "Please Enter The Title of the book or its Production year" << endl;
				cin >> booksearch;
				for (int i = 0; i < 3; i++)
				{
					if (booksearch == book[i].title)
					{
						foundbook = true;
						booktitle = book[i].productionyear;
					}
					if (booksearch == book[i].productionyear)
					{
						foundbook = true;
						booktitle = book[i].title;
					}

				}
				if (foundbook == true)
				{
					cout << " Found" << endl;
					cout << "Further information : " << booktitle << endl;
				}
				else
				{
					cout << "Not Found" << endl;
				}
				foundbook = false;
			}
			if (librarianchoice == 1)
			{
				cout << "Please Enter The Title of the book or its Production year" << endl;
				cin >> bookpurchasechoice;
				for (int i = 0; i < 3; i++)
				{
					if (bookpurchase == book[i].title&&book[i].numberofcopies>0)
					{
						bookpurchasefound = true;
						booktitle = book[i].productionyear;
						i = iindex;
					}
					if (bookpurchase == book[i].productionyear&&book[i].numberofcopies>0)
					{
						bookpurchasefound = true;
						booktitle = book[i].title;
					}
				if (foundbook = true)
				{
					cout << " Found" << endl;
					cout << "Further information : " << booktitle << endl;
					cout << "Your Copy has been purchased" << endl;
					book[iindex].numberofcopies--;
				}
				else
				{
					cout << "Not Found" << endl;
				}
				cout << "Would You like to search for any thing else" << endl;
				cin >> choice4;
				if (choice4 == 'Y' || choice4 == 'y')
				{
					cout << "Please Enter The Title of the book or its Production year" << endl;
					cin >> booksearch;
					for (int i = 0; i < 3; i++)
					{
						if (booksearch == book[i].title)
						{
							foundbook = true;
							booktitle = book[i].productionyear;
						}
						if (booksearch == book[i].productionyear)
						{
							foundbook = true;
							booktitle = book[i].title;
						}

					}
					if (foundbook = true)
					{
						cout << " Found" << endl;
						cout << "Further information : " << booktitle << endl;
					}
					else
					{
						cout << "Not Found" << endl;
					}
				}
				
			
				}
				
			}

		}
	}
	system("pause");
	return 0;
}

