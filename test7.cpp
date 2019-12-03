#include<iostream>
using namespace std;
void insert_sort(int* arr,int len)
{
    int j=0;
    for(int i=1;i<len;i++)
    {
        int temp=arr[i];
        for(j=i-1;j>=0&&arr[j]>temp;j--)
            arr[j+1]=arr[j];
        arr[j+1]=temp;
    }
}
void Shell_sort(int* arr,int len)
{
    int j=0;
    int flag=0;
    for(flag=len/2;flag>0;flag/=2)
    {
        for(int i=flag;i<len;i++)
        {
            int temp=arr[i];
            for(j=i-flag;j>=0&&arr[j]>temp;j-=flag)
                arr[j+flag]=arr[j];
            arr[j+flag]=temp;
        }
    }
}
void Quick_sort(int* arr,int start,int end)
{
    int i=start;
    int j=end;
    int temp=arr[i];
    if(i<j)
    {
        while(i<j)
        {
            while(i<j&&arr[j]>=temp)
                j--;
            if(i<j)
            {
                arr[i]=arr[j];
                i++;
            }
            while(i<j&&arr[i]<=temp)
                i++;
            if(i<j)
            {
                arr[j]=arr[i];
                j--;
            }
        }
        arr[i]=temp;
        Quick_sort(arr,start,i-1);
        Quick_sort(arr,i+1,end);
    }
}
void Print_sort(int* arr,int len)
{
    for(int i=0;i<len;i++)
        cout<<arr[i]<<endl;
}
int main()
{
    int arr[]={1,4,2,3,7,5,8,6,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
   // insert_sort(arr,len);
   // Shell_sort(arr,len);
    Quick_sort(arr,0,len-1);
    Print_sort(arr,len);
    return 0;
}
