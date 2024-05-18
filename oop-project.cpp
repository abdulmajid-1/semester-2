/*
 we want to make a hotel management system
 we will use Absraction , inheritance , polymorphism , encapsulation
 we will take user registration
 we will take user data and store it in file
 we will make a login setup
 we will check room availibility
 we will check login date and time to see weather the room is availible or not
 we will give an administrator login
 we will give staff login and attendence
 we will register staff
 we will setup a paygrade and pay of the staff
 we will make a restruant management system
 Creating a hotel management system using object-oriented programming (OOP) in C++ is a great project idea.
  Here are some key components and features you can include
     Classes:
         Hotel: Representing the hotel itself, containing information
         such as name, address, contact details, etc.
         Room: Representing individual rooms in the hotel, including
         attributes like room number, type (single, double, suite), availability, price, etc.
         Guest: Representing guests staying at the hotel, with attributes
         such as name, contact information, check-in/check-out dates, room assigned, etc.
         Employee: Representing hotel staff, with attributes such as name, role, contact information, etc
     Functionality:
         Room Management: Functions to add, remove, and update room
         details (e.g., availability, price).
         Reservation Management: Allowing guests to make reservations,
         check room availability, and manage bookings.
         Check-in/Check-out: Handling guest check-in and check-out processes,
         updating room availability accordingly.
         Billing: Calculating and managing guest bills, including room charges,
         additional services, taxes, etc.
         Employee Management: Functions to add, remove, and update employee details,
         as well as manage their roles and permissions.
         Reporting: Generating various reports such as occupancy rates, revenue, guest demographics, etc
     Data Management:
         Use of data structures like arrays, linked lists, or vectors to
          store and manage information about rooms, guests, and employees.
         Consider using file handling to save and retrieve data to/from external files for persistence
     User Interface:
         Design a user-friendly interface for both hotel staff (management) and guests
         (booking/reservation system).
         For a console-based application, use menus and prompts for user interaction.
         For a more advanced project, consider implementing a graphical user interface (GUI) using libraries like Qt or SFML
     Error Handling:
         Implement robust error handling mechanisms to deal with invalid user inputs,
          database errors, etc.
         Use exceptions to handle exceptional cases gracefully
     Security:
         Implement authentication mechanisms for hotel staff to access management functionalities.
         Ensure data privacy and integrity by applying appropriate access controls
     Scalability and Extensibility:
         Design the system in a modular way so that it can be easily extended
         or modified to accommodate new features or changes in requirements.
         Consider using design patterns like Factory, Observer, or Strategy
          to manage complexity and promote flexibility.

     Testing:
         Write test cases to ensure that the system functions correctly under
          various scenarios, including edge cases and boundary conditions.

By incorporating these elements into your hotel management system,
you can create a comprehensive and efficient solution that effectively manages hotel operations.

*/

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>
#include <limits> // For numeric_limits
using namespace std;
class Hotel
{
    string hotel_name;
    int room_capacity;
    string hotel_address;

public:
    Hotel();
    void Greetings();
};
Hotel ::Hotel()
{
    Greetings();
    // room_capacity = 100;
    hotel_address = "UMT roads, near HBL";
}
void Hotel ::Greetings()
{
    cout << "*******************************************\n*   Welcome to Hotel Management Software  *\n";
    cout << "*******************************************\n\n";
}
class Room : public Hotel
{
    bool room_availibity;
    string room_type[3] = {"Single", "Double", "Suite"};
    int total_rooms;

protected:
    int room_price[3];
    int room_number[10];

public:
    int Is_room_availible();
    void Room_service();
    Room();
};
Room ::Room()
{
    total_rooms = 10;
    for (int i = 0; i < total_rooms; i++)
    {
        room_number[i] = i + 100;
    }
    for (int i = 0; i < 3; i++)
    {
        room_price[i] = (i + 10) * 100;
    }
}
int Room ::Is_room_availible()
{
    int p = 0;
    int customer_room = 0;
    int rooms1;
    ifstream file;
    file.open("rooms.txt");
    while (file >> rooms1)
    {
        if (rooms1 == room_number[p])
        {
            customer_room++;
        }
        p++;
    }

    file.close();

    if (customer_room < 10)
    {
        return customer_room;
    }
    else
        return 20;
}
void Room ::Room_service()
{
    int price[7] = {400, 450, 1100, 800, 250, 30, 50};
    string name_of_dishes[7] = {"chicken biryani", "chicken qorma", "chicken karahi", "aloo qeema", "omelette", "bread", "roti"};
    int order = 0;
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
}
class Guest : public Room
{
protected:
    string name;
    int age;
    string password;
    string email;
    int check_in_date;
    int check_out_date;
    int room_assigned;

public:
    void Register();
    void signin();
    void booking();
    void list_of_rooms();
    int check_in_checker(string c_date, char c_year[5], char c_month[3], char c_day[3]);
    string current_date();
    void datasaver(string filename);
    //  void Bill_saver(int b);
};
void Guest ::Register()
{
    cout << "Enter your age : ";
    cin >> age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Enter your email address : ";
    getline(cin, email);
    cout << "Make a password that will be use to sign in (use a strong password) : ";
    getline(cin, password);

    // work on check in date
    //  booking();
    datasaver("usercomplete_data.txt");
    // ofstream file("userscomplete_data.txt", ios::app);
    // file << name << endl
    //      << age << endl
    //      << email << endl
    //      << password << endl
    //      << check_in_date << endl;
    // file.close();
    ofstream signin_file("users_signin_data.txt", ios ::app);
    signin_file << email << endl
                << password << endl;
    signin_file.close();
}
void Guest ::signin()
{
    string c;
    string s_email;
    string s_password;
    int Try = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter your email : ";
        cin >> email;
        cout << "Enter your password : ";
        cin >> password;
        ifstream signin_file("users_signin_data.txt");
        // do work here

        while (!signin_file.eof())
        {

            getline(signin_file, s_email);
            if (s_email == email)
            {
                while (!signin_file.eof())
                {
                    getline(signin_file, s_password);

                    if (s_password == password)
                    {
                        cout << "Congrats " << endl;
                        cout << "Do you want to use room service (yes or no) : ";
                        cin >> c;
                        if (c == "yes")
                        {
                            Room_service();
                        }
                        // return 1;
                        //  cout << "\n\n\n\n\n";
                        Try = 1;
                        i = 3;
                    }
                }
            }
        }

        if (Try != 1)
        {
            cout << "\nIncorrect password \n";
            cout << "You have " << (2 - i) << " chances left \n"
                 << endl;
        }
    }
}
void Guest ::booking()
{
    string other;
    string choice;
    Register();
    int customer_Room = 0;
    customer_Room = Is_room_availible();
    if (customer_Room == 20)
    {
        cout << "Sorry we are fully booked ";
    }
    else
    {
        do
        {

            char c_year[5];
            char c_month[3];
            char c_day[3];
            int temp_bill = 0;
            int choice;
            int nights = 0;
            list_of_rooms();
            // cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "What kind of room you want : ";
            cin >> choice;
            if (choice >= 0 && choice < 3)
            {

                if (choice < 3)
                {
                    int temp_checker;
                    cout << "Enter check in year (YYYY) : ";
                    cin >> c_year;
                    cout << "Enter check in month (MM) : ";
                    cin >> c_month;
                    cout << "Enter check in date (DD) : ";
                    cin >> c_day;
                    temp_checker = check_in_checker(current_date(), c_year, c_month, c_day);

                    if (temp_checker == 1)
                    {
                        // do your work here

                        cout << "How many nights do you want to stay ! ";
                        cin >> nights;
                        if (nights < 10)
                        {
                            temp_bill = nights * room_price[choice];
                            cout << "\n\nCongrats your room is booked sucessfully !\n";
                            cout << "Your bill will be : " << temp_bill << endl;
                            cout << "you will check in at " << c_day << "/" << c_month << "/" << c_year << endl;

                            cout << "your room number will be " << room_number[customer_Room] << endl;
                            ofstream room_file("rooms.txt", ios ::app);
                            room_file << room_number[customer_Room] << endl;
                            room_file.close();
                            customer_Room++;
                        }
                        else
                        {
                            cout << "You cannot stay more than 9 nights ";
                        }
                    }
                    else
                    {
                        cout << "Invalid date ";
                    }
                }
            }
            else
            {
                cout << "Invalid choice !\n";
            }
            cout << "Do you want another room (yes or no) ";
            cin >> other;
        } while (other == "yes");
        cout << "Do you want to use Room service (yes or no) : ";
        cin >> choice;
        if (choice == "yes")
        {
            Room_service();
        }
    }
}
int Guest ::check_in_checker(string c_date, char c_year[5], char c_month[3], char c_day[3])
{

    char year[5];
    char month[3];
    char day[3];

    int i = 0;
    cout << c_date << endl;

    while (c_date[i] != '-')
    {
        year[i] = c_date[i];
        i++;
    }
    year[i] = '\0';
    i++;
    int j = 0;
    while (c_date[i] != '/')
    {

        month[j] = c_date[i];
        i++;
        j++;
    }
    month[2] = '\0';
    int count = 0;
    int integer_date = stoi(c_day);
    // day[0] = c_date[8];
    // day[1] = c_date[9];
    // int int_check_date = stoi(day);

    for (int j = 0; j < 4; j++)
    {
        if (c_year[j] == year[j] && 0 < integer_date && integer_date <= 31)
        {
            count++;
        }
    }
    for (int j = 0; j < 2; j++)
    {
        if (c_month[j] == month[j])
        {
            count++;
        }
    }
    if (count == 6)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Guest ::list_of_rooms()
{
    cout << " \tRooms\tPrice\n0)\tSingle\t1000\n1)\tDouble\t2000\n2)\tSuite\t3000\n";
}
string Guest ::current_date()
{
    // Get the current time
    time_t currentTime = time(nullptr);

    // Format the current time to get the date only
    char dateString[12]; // Allocate space for the formatted date string
    strftime(dateString, sizeof(dateString), "%Y-%m/%d", localtime(&currentTime));

    // Output the current date
    cout << "Current date: " << dateString << endl;
    return dateString;
}
void Guest ::datasaver(string filename)
{
    ofstream file(filename, ios::app);
    file << name << endl
         << age << endl
         << email << endl
         << password << endl;
    file.close();
}
// void Bill_saver(int b)
// {
//     int T_bill = b;
// }
class Employee : public Hotel
{
    string name;
    int age;
    long phone_number;
    string designation;
    int payscale;
    int salary;
};
class Admin : public Hotel
{
};

int main()
{
    Guest g1;
    string Choice;
    int temp = 0;
    cout << "Do want to sign in or sign up (enter signin or signup) ";
    cin >> Choice;
    if (Choice == "signin")
    {
        g1.signin();
    }
    if (Choice == "signup")
    {
        Choice = "0";
        g1.booking();
        // cout << "Do you want to use Room service (yes or no) : ";
        // cin >> Choice;
        // if (Choice == "yes")
        // {
        //     g1.Room_service();
        // }

        // g1.Room_service();
    }
    return 0;
}
