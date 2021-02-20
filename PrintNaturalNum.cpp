#include<iostream>
using namespace std;
int PrintNaturalNum(int);
int main()
{
int n=1;
cout<<"the first 50 natural number is"<<endl;
PrintNaturalNum(n);
return 0;
}
int PrintNaturalNum(int n)
{
   if(n<=50)
   {
      cout<<n<<endl;
      PrintNaturalNum (n+1);
   }
}