#include<iostream>
using namespace std;
int reversed_number=0;
bool checkprime(int a)
{
   // cout<<a<<endl;
    if(a==1)
    {
        //cout<<"Prime"<<endl;
        return true;
    }
    else if(a>1 && a!=0)
    {
       for(int i=2;i<a;i++)
       {
        if(a%i==0)
        {
           // cout<<"Not prime"<<endl;
            return false ;
        }
        else {
           // cout<<"prime"<<endl;
            return true ;
        }
       }
    } 
}
int main()
{
    int n;
    int remainder;
    
    cin>>n;
    int m = n;
    while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
    }

    cout<<reversed_number<<endl;

  if(checkprime(m) && checkprime(reversed_number))
  {
    cout<<"Twisted prime no"<<endl;
  }
  else{
    cout<<"no"<<endl;
  }
    return 0;
}