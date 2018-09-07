#include<iostream>
using namespace std;
int main()
{
   //print stars in rows
   for (int i=5;i>0;i--)
   {
   //print i-1 stars
      for (int j=0;j<i;j++)
      {cout<<"*";}
   cout<<endl;
   }
return 0;
}	
