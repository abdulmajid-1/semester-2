#include <iostream>
using namespace std;
int main()
{
    struct node
    {
        int val;
        node *next;
    };
    node *n;
    n = new node;
    n->val = 33;
    n->next = new node;
    n->next->val = 22;
    n->next->next = NULL;
    cout << n->val << endl;
    cout << n->next->val << endl;
    delete n;
    cout << n->val << endl;
    return 0;
}