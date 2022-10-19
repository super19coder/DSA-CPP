#include <iostream>
using namespace std;
struct node
{
    int r;
    // char c;
    node *ptr;
};
void link_list_traversal(struct node *p)
{
    while (p != NULL)
    {
        cout << "element are =  " << p->r << endl;
        // cout << "char are = " << p->c << endl;
        p = p->ptr;
    }
}

struct node *insertion(struct node *head, int index)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->r = index;
    new_node->ptr = head;
    return new_node;
}

int main()
{
    struct node *head;

    head = (struct node *)malloc(sizeof(struct node));

    head->r = 7;
    // head->c = 'q';
    head->ptr = (struct node *)malloc(sizeof(struct node));

    head->ptr->r = 8;
    // head->ptr->c = 'u';
    head->ptr->ptr = (struct node *)malloc(sizeof(struct node));

    head->ptr->ptr->r = 55;
    // head->ptr->ptr->c = 'm';
    head->ptr->ptr->ptr = NULL;

    link_list_traversal(head);

    head = insertion(head, 88);

    link_list_traversal(head);

    return 0;
}