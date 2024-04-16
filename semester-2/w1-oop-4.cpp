#include <iostream>
using namespace std;

struct Book
{
    string title;
    string author;
    string publisher;
    int year;
};

int main()
{
    cout << "How many books you want to enter: ";
    int n;
    cin >> n;
    cin.ignore();

    Book books[n];
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Enter data of book #" << i + 1 << endl;
        cout << "Enter title of book: ";
        getline(cin, books[i].title);

        cout << "Enter author of book: ";
        getline(cin, books[i].author);

        cout << "Enter publisher of book: ";
        getline(cin, books[i].publisher);

        cout << "Enter year of publication: ";
        cin >> books[i].year;
        cin.ignore();
    }

    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (books[j].title[0] < books[smallest].title[0])
            {
                smallest = j;
            }
        }
        // swapping with the ith element
        Book temp = books[i];
        books[i] = books[smallest];
        books[smallest] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Book #" << i + 1 << ":" << endl;
        cout << "Title of book: " << books[i].title << endl;
        cout << "Author of book: " << books[i].author << endl;
        cout << "Publisher of book: " << books[i].publisher << endl;
        cout << "Year of book: " << books[i].year << endl;
    }
    return 0;
}
