#include<iostream>
#include<string>
using namespace std;
class work
{
    public:
        friend ostream&operator<<(ostream& out,work &temp);
        work(int num,string name)
        {
            this->num=num;
            this->name=name;
        }
    private:
        int num;
        string name;
};
ostream&operator<<(ostream& out,work &temp)
{
    out<<temp.num<<endl;
    out<<temp.name<<endl;
    return out;
}
int main()
{
    work w1(10,"xxxxxxxx");
    work w2(12,"bbbbbbbb");
    cout<<w1<<w2<<endl;
    return 0;
}
