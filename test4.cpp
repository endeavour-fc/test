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
        MyString& operator=(const MyString& another)
        {
            if(strcmp(this->str,another.str)==0)
            {
                return *this;
            }
            if(this->str==NULL)
            {
                this->len=another.len;
                this->str=new char[this->len+1];
                strcpy(this->str,another.str);
                return *this;
            }
            else
            {
                delete []this->str;
                this->str=new char [another.len+1];
                this->len=another.len;
                strcpy(this->str,another.str);
                return *this;

            }

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
    MyString s3;
    s1= (s1+s2);
    cout<<s1.GetString()<<endl;
    return 0;
}
