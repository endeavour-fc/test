#include<iostream>
#include<string>
using namespace std;
class stu
{
    public:
        stu()
        {
            this->name="xxxx";
            this->num=0;
        }
        stu(string name,int num)
        {
            this->name=name;
            this->num=num;
        }
        void SetData(string name,int num)
        {
            this->name=name;
            this->num=num;
        }
        void SetName(string name)
        {
            this->name=name;
        }
        void SetNum(int num)
        {
            this->num=num;
        }
        string GetName()
        {
            return this->name;
        }
        int GetNum()
        {
            return this->num;
        }
    private:
        string name;
        int num;
};
int main()
{

    return 0;
}
