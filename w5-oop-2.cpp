// Problem Statement 2:
// Implement a shallow copy constructor for a class that represents a playlist. The Playlist class
// contains an array of songs which has a name and a duration. Test your implementation by creating
// two instances of the Playlist class and using the copy constructor to create a shallow copy of one
// of them.

#include <iostream>
using namespace std;

struct song
{
	string name;
	int duration;
};
class Playlist
{
	song s[10];

public:
	Playlist()
	{
		s[0].duration = 2;
		s[0].name = "dil dil Pakistan ";
	}
	void display()
	{
		cout << "The name of the song is : " << s[0].name << endl;
		cout << "The duration of the song is : " << s[0].duration << " min " << endl;
	}
};
int main()
{
	Playlist p1;
	Playlist p2 = p1;
	p1.display();
	p2.display();
}
