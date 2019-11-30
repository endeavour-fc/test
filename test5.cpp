#include<iostream>
using namespace std;
class Test
{
    public:
        Test(int data=0)
        {
            this->m_data=data;
        }
        Test(const Test&another)
        {
            this->m_data=another.m_data;
        }
        ~Test()
        {

        }
        int Getdata()
        {
            return this->m_data;
        }
        void Setdata(const int data)
        {
            this->m_data=data;
        }
        Test& operator=(const Test& another)
        {
            if(this!=&another)
            {
                this->m_data=another.m_data;
            }
            return *this;
        }
        Test operator+(const Test& another)
        {
            Test temp(0);
            temp.m_data=this->m_data+another.m_data;
            return temp;
        }
    private:
        int m_data;
};
int main()
{
    Test t1(10);
    Test t2(2);
    Test t3;
    t3=t1+t2;
    cout<<t1.Getdata()<<endl;
    cout<<t2.Getdata()<<endl;
    cout<<t3.Getdata()<<endl;
    return 0;
}
