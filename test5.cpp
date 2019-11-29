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
    private:
        int m_data;
};
int main()
{
    
    return 0;
}
