#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
{
cout<<"\n";
for(int j=4;j>=i;j--)
{
cout<<" ";
}
for(int k=1;k<=i;k++)
{
cout<<"*";
}
}
return 0;

}
