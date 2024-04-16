#include <iostream>
using namespace std;

struct node
{
    int val;
    node *next;
};
node *new_node(node *current, int x);
void printing_lists(node *current);

int main()
{
    node *head;
    node *current;
    head = new node;
    head->val = 33;
    head->next = NULL;
    current = head;
    current = new_node(current, 22);
    current = head;
    printing_lists(current);
    return 0;
}
node *new_node(node *current, int x)
{
    node *n;
    n = new node;
    n->val = x;
    n->next = NULL;
    current->next = n;
    return n;
}
void printing_lists(node *current)
{
    cout << current->val << "  ";
    // cout << current->next->val;
    current = current->next;
    cout << current->val;
}