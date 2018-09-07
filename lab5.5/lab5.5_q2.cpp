#include<iostream>
using namespace std;
int main()
{
//print star and gap
int n=5;
for(int i=0;i<n;i++)
    {
    //print star in first and last row
    if(i==0 || i==4)
        {
        for(int i=0;i<n;i++)
        cout<<"*";
        }

    //print gaps and stars
    else
    //print star
        {
        cout<<"*";
    //print gap
        for(int i=0;i<n-2;i++)	  
        cout<<" ";
    //print star
        cout<<"*";
        }

    cout<<endl;
    }
return 0;
}
