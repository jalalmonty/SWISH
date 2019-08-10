#include<iostream>
using namespace std;
int main()
{
int x,q=1,p,c;
cin>>c>>p;
int i,s=0;
while(q)
{
q=(c*p)/100;
s=s+c;
c=c-p;
}
cout<<s;
return 0;
}
