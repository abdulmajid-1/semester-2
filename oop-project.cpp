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
using namespace std;
class Hotel
{
    string name;
    int room_capacity;
    string address;

public:
    Hotel();
    void Greetings();
};
Hotel ::Hotel()
{
    Greetings();
    room_capacity = 100;
    address = "UMT roads, near HBL";
}
void Hotel ::Greetings()
{
    cout << "*******************************************\n*\tWelcome to Hotel Management Software  *\n*******************************************";
}
class Room : public Hotel
{
    bool room_availibity;
    int room_number;
    int room_tier;

public:
    bool Is_room_availible();
};
bool Room ::Is_room_availible()
{
    return false;
}
class Guest : public Hotel
{
    string name;
    int age;
    string email;
};
int main()
{
    return 0;
}
