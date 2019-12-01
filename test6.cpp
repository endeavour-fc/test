#include<iostream>
using namespace std;
class Test
{
    public:
      static int Get_Count()
      {
          return count;
      }
      Test(int n=0):num(n)
     {
        
     }
      ~Test()
      {

      }
    private:
      static int count;
      int num;
};
int Test::count=0;
class ListHead;
class ListNode
{
    friend class ListHead;
    public:
    ListNode(int n=0,ListNode*ls=NULL):num(n),next(ls)
    {

    }
    private:
    int num;
    ListNode* next;
};
class ListHead
{
    public:
    ListHead(ListNode* ls=NULL):head(ls)
    {

    }
    void Push_val(int x)
    {
        ListNode* temp=new ListNode;
        temp->num=x;
        if(head==NULL)
        {
            head=temp;
            head->next=NULL;
        }
        else
        {
            temp->next=head->next;
            head->next=temp;
        }
    }
    private:
    ListNode* head;
};
int main()
{
    Test t1;
    cout<<Test::Get_Count()<<endl;
}
