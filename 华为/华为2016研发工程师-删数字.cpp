#include <iostream>
#include <cstdlib>
using namespace std;

class Node
{
public:
    int data;
    Node *pNext;
};
class CircularLinkList
{
public:
    Node *head;
    CircularLinkList()                        //初始化头结点
    {
         head = new Node;
         head->data = 0;
         head->pNext = head;
    }
    ~CircularLinkList()
    {
        delete head;
    }
    void CreateLinkList(int n);
};
void CircularLinkList::CreateLinkList(int n)  //建立单向循环链表
{
    head->data = n-1;
    Node *pnew,*ptail = head;
    for(int i = n-2;i >= 0; i--)
    {
        pnew = new Node;
        pnew->data = i;
        pnew->pNext = head;
        head = pnew;
    }
    ptail->pNext = head;
}

int main()
{
    int x;
    int c = 1;
    cin >> x;
    CircularLinkList LinkList;
    LinkList.CreateLinkList(x);
    Node *currNode = LinkList.head;
    //Node *pdelete;
    while(currNode->pNext != currNode)
    {
         if(c == 2)                                    //遍历两个就删一个
         {
            //pdelete = currNode->pNext;
            currNode->pNext = currNode->pNext->pNext;
            //delete pdelete;
            currNode = currNode->pNext;
            c = 1;
         }
         else                                          //不够两个就继续遍历
         {
             currNode = currNode->pNext;
             c++;
         }
    }
    cout << currNode->data << endl;
    return 0;
}
