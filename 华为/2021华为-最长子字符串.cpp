#include <iostream>
#include <string>
using namespace std;

static int Count = 1;       //用来记录链表结点的个数
class Node
{
public:
    char ch;
    int data;
    Node * next;
};
class CircularLinkList
{
public:
    Node *head;
    CircularLinkList()
    {
        head = new Node;
        head -> data = 0;
        head -> ch = '\0';
    }
    ~CircularLinkList()
    {
        delete head;
    }
    void InsertNode(char c)
    {
        Node *pnew;
        pnew = new Node;
        pnew -> data = 1;
        pnew -> ch = c;
        pnew -> next = head;
        head = pnew;
        Count ++;
    }
};
int main()
{
    int length[10] = { 0 };
    int result = 0,flag = 0,fl = 0;
    string a;
    cin >> a;
    CircularLinkList LinkList;
    LinkList.InsertNode(a[0]);
    for (int i = 1;i < a.length();i++)
    {
        Node * currNode;
        Node * sum;
        currNode = LinkList.head;
        for(int j = 0;j < Count; j++)                                //处理一个新的字符
        {
            if(currNode -> ch == a[i] && currNode -> data < 2)       //处理重复小于2次的情况
            {
                currNode -> data++;
                currNode = currNode -> next;
                fl = 1;
                break;
            }
            else if(currNode -> ch == a[i] && currNode -> data == 2) //处理重复出现两次的情况，计算长度并重新开始
            {
                flag++;
                fl = 1;
                sum = LinkList.head;
                for(int k = 0;k < Count; k++)
                {
                    length[i] += sum -> data;
                    sum -> data = 0;
                    sum = sum -> next;
                }
                break;
            }
        }
        if(fl == 0)
            LinkList.InsertNode(a[i]);
        fl = 0;
    }
    for(int n;n < flag;n++)
    {
        cout << length[n] << " ";
    }
    return 0;
}
