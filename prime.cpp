#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter a number: ";
cin>>n;
int c=0;
if(n==1)
{
cout<<"Not a Prime Number....";
return 0;
}
for(int i=2;i<n/2;i++)
{
if(n%i==0)
c++;
}
if(c==0)
cout<<n<<"  Is a Prime Number";
else
cout<<n<<"  Not a Prime Number";
}

