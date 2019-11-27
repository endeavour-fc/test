#include<iostream>
#include<string.h>
using namespace std;
class MyString
{
    public:
        MyString()
        {
            this->str=NULL;
            this->len=0;
        }
        MyString(const char* str)
        {
            this->len=strlen(str);
            this->str=new char[len+1];
            strcpy(this->str,str);
        }
        MyString operator+(MyString& another)
        {
            MyString temp;
            temp.len=another.len+this->len;
            temp.str=new char[another.len+this->len+1];
            strcpy(temp.str,this->str);
            strcat(temp.str,another.str);
            return temp;
        }
        char* GetString()
        {
            return this->str;
        }
    private:
        char* str;
        int len;
};
int main()
{
    MyString s1("hhhhhh");
    MyString s2("mmmmmm");
    s1=s1+s2;
    cout<<s1.GetString()<<endl;
    return 0;
}
