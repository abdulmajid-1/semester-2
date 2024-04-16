#include <iostream>
#include <fstream>

using namespace std;

//  Function declarations

void service(void);
void shuttle(void);
void booking(void);
void roommenu(void);
int room_capacity(void);
double bill(int a, int b, int c);

//  This is a struct to store customers information

struct customer
{
	string username, password, email;
};

//	These are some global variables

string rooms;
int l, room_counter = 0;
string roomnum[21] = {"100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120"};
string other;

//	This is main function

int main()
{
	int user[20];
	int j = 0, i = 0;
	string book, reserved, shuttle1, service1, namecus, pass;
	int persons, nights, res, breakfast, distance;
	int counter = 0;
	string check_pass, check_username1;

	cout << "\tWelcome To Hotel Mangement System \n\n";

	//*****************Booking************************

	cout << "do you want to book a room (yes or no )\n";
	cin >> book;
	if (book == "yes" || book == "Yes" || book == "YES")
	{
		//	If rooom is available then book a room

		int n = room_capacity();
		if (n <= 0)
		{
			//	we call booking function for booking

			booking();
		}

		//	we display this message if the hotel is completely booked
		if (other != "no")
		{
			cout << "\nSorry!  Hotel is completey booked \n";
		}
	}

	//******************login**********************

	cout << "do you have a reservation\n";
	cin >> reserved;
	if (reserved == "yes" || reserved == "YES" || reserved == "Yes")
	{
		//	We are using this loop to check user's identity

		do
		{
			cout << "enter your name ";
			cin >> namecus;
			cout << "enter your password ";
			cin >> pass;

			//	We open file and then compare all the names and passwords with the given name and password
			ifstream file;
			file.open("username_data.txt");
			while (file >> check_username1 >> check_pass)
			{
				if (check_username1 == namecus && check_pass == pass)
				{

					counter = 1;

					//	We use system cls to clear screen

					system("cls");
				}
			}
			file.close();

			if (counter == 1)
			{

				cout << "welcome " << namecus << " ! \n";
			}
			else
			{
				cout << "Wrong username or password \n";
			}
		} while (counter != 1);

		cout << "do you want to use a shuttle (yes or no ) ";
		cin >> shuttle1;
		if (shuttle1 == "yes" || shuttle1 == "Yes")
		{
			shuttle();
			cout << endl;
		}
		cout << "do you want to use room service (yes or no ) ";
		cin >> service1;
		if (service1 == "Yes" || service1 == "YES" || service1 == "yes")
		{
			service();
		}

		j++;
	}
	return 0;
}

//********************** Functions ******************************

//	This function is used to calculate shuttle bill

void shuttle(void)
{
	int a, b;
	cout << "enter the distance you want to travel in kilometer ";
	cin >> a;
	b = a * 200;
	cout << "\nThis distance will cost you extra " << b << " which will be included in your bill ";
}

//	This functions is used for ordering food
void service(void)
{
	int price[7] = {400, 450, 1100, 800, 250, 30, 50};
	string name_of_dishes[7] = {"chicken biryani", "chicken qorma", "chicken karahi", "aloo qeema", "omelette", "bread", "roti"};
	int a, b, order = 0;
	int w = 0;
	int d[7] = {0, 0, 0, 0, 0, 0, 0};
	int t_sum = 0;
	string cancel;
	cout << "what you want to order choose from the menu \n\n";
	cout << "\t  M e n u\n\n\tNAME\t\t PRICE\n";
	cout << "1)    chicken biryani   400 pkr\n2)    chicken qorma     450 pkr\n3)    chicken karahi    1100 pkr\n4)    aloo qeema        800 pkr\n";
	cout << "5)    omelette     \t250 pkr\n6)    bread           \t30 pkr\n7)    roti    \t\t50 pkr\n";
	do
	{
		cout << "what you want to order (enter the item no.)";
		cin >> order;
		if (order == 1)
		{
			d[0]++;
		}
		else if (order == 2)
		{
			d[3]++;
		}
		else if (order == 3)
		{
			d[2]++;
		}
		else if (order == 4)
		{
			d[3]++;
		}
		else if (order == 5)
		{
			d[4]++;
		}
		else if (order == 6)
		{
			d[5]++;
		}
		else if (order == 7)
		{
			d[6]++;
		}
		else
		{
			cout << "invalid number \n";
		}

		cout << "do you want something else (yes or no) ";
		cin >> cancel;
	} while (cancel == "yes");
	cout << "\nquantity\tprice \t\ttotal\n\n";
	do
	{
		if (d[w] != 0)
		{
			cout << d[w] << "\t\t" << price[w] << "\t\t" << d[w] * price[w] << "\n\n";
			t_sum = d[w] * price[w] + t_sum;
		}
		w++;
	} while (w != 7);
	cout << "Total amount\t\t\t" << t_sum << endl
		 << endl;
	cout << "This amount will be included in your total bill ";
}

//	This function is used to calculate bill of room

double bill(int a, int b, int c)
{
	double d = (a * b) + c;
	return d;
}

//	This function is used for booking

void booking(void)
{

	int price[8] = {2500, 5000, 7500, 10000, 8000, 12000, 15000, 20000};
	string checkin;
	double bill1 = 0;
	int choice, nights, multiple_user = 0, checkin_year = 0;
	int customer_number = 0;
	customer c[20];

	//	Here we register user and store his data in the file

	cout << "Enter your name ";
	cin >> c[customer_number].username;
	cout << "Enter a password ";
	cin >> c[customer_number].password;
	cout << "Enter your email ";
	cin >> c[customer_number].email;

	//	The file username_data is used to store the name and password of user

	ofstream file("username_data.txt", ios::app);
	file << c[customer_number].username << ' ' << c[customer_number].password << ' ';
	file.close();

	//	The file users_complete_data is used to store complete data of user

	ofstream outfile("users_complete_data.txt", ios::app);
	outfile << c[customer_number].username << ' ' << c[customer_number].password << ' ' << c[customer_number].email << ' ';
	outfile.close();

	cout << "Welcome " << c[customer_number].username << endl;

	//	we use the function roommenu for the list of rooms

	roommenu();

	do
	{

		// the variable other is used for room availibility

		other = "NO";
		multiple_user++;
		cout << "enter your choice ";
		cin >> choice;
		if (choice < 8)
		{
			cout << "how many nights you will be staying with us " << endl;
			cin >> nights;
			if (nights < 10)
			{
				//	We take checkin so the user can only book in 2024

				cout << "Enter your check in year ";
				cin >> checkin_year;
				if (checkin_year == 2024)
				{
					cout << "Enter your checkin date (DD/MM) ";
					cin >> checkin;

					//	we will only assign the available rooms in the hotel by checking all the rooms against the booked rooms

					ifstream file;
					file.open("rooms.txt");
					while (file >> rooms)
					{
						if (rooms == roomnum[l])
						{
							l++;
						}
					}
					file.close();

					//	we will enter the booked room in the file

					ofstream ofile;
					ofile.open("rooms.txt", ios::app);
					ofile << roomnum[l] << ' ';
					file.close();

					//	we will calculate the bill using bill function

					bill1 = bill(nights, price[choice], bill1);
					cout << "\n\nCongrats your room is booked sucessfully !\n";
					cout << "Your bill will be : " << bill1 << endl;
					cout << "you will check in at " << checkin << endl;
					cout << "your room number will be " << roomnum[l] << endl;
					ofstream outfile("users_complete_data.txt", ios::app);
					outfile << bill1 << ' ' << checkin << ' ' << roomnum[l] << ' ' << "..." << endl;
					outfile.close();
				}
				else
				{
					cout << "You can only book in year 2024 " << endl;
				}
			}
			if (nights > 10)
			{
				cout << "you cannot book a room for more than 9 days" << endl;
			}
		}

		else
		{
			cout << "invalid\n";
		}

		//	here we will check for rooms availibility before booking another room and we do that by using the function room_capacity

		int y = room_capacity();
		if (y <= 0)
		{
			cout << "do you want to book another room (yes or no ) " << endl;
			cin >> other;
			l++;
		}

	} while (other == "YES" || other == "Yes" || other == "yes");
}

void roommenu(void)
{
	cout << "index    ROOMS      CAPACITY      PRICE\n";
	cout << "0)      Regular     1 person      2500\n";
	cout << "1)      Regular     2 person      5000\n";
	cout << "2)      Regular     3 person      7500\n";
	cout << "3)      Regular     4 person      10000\n";
	cout << "4)      Suite       2 person      8000\n";
	cout << "5)      Suite       4 person      12000\n";
	cout << "6)      Suite       5 person      15000\n";
	cout << "7)      deluxe      2 person      20000\n";
}

//	This function is used to check the availibility

int room_capacity(void)
{
	int p = 0;
	room_counter = 0;
	string rooms1;
	ifstream file;
	file.open("rooms.txt");
	while (file >> rooms1)
	{
		if (rooms1 == roomnum[p])
		{
			room_counter++;
		}
		p++;
	}

	file.close();

	if (room_counter > 20)
	{
		return 1;
	}
	return 0;
}
