#include<bits/stdc++.h>
using namespace std;
int d;
struct node
{
    int data;
    node* l, *r;
    node (int data)
    {
        this->data = data;
        this->l = this->r = 0;
    }
};
void tree(node*& head, int x)
{
    if (!head) head = new node(x);
    else
    {
        if (x < head->data) tree(head->l, x);
        else tree(head->r, x);
    }
}
void tt(node* head)
{
    if ((head->l && head->r) || (!head->l && head->r) || (head->l && !head->r)) ++d;
    if (head->l) tt(head->l);
    if (head->r) tt(head->r);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        node* head = 0;
        while (n--)
        {
            int x;
            cin >> x;
            tree(head, x);
        }
        tt(head);
        cout << d << "\n";
        d = 0;
    }
}
