/*

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter No: ";

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            cout<<" ";


        for(int j=1; j<2*i; j++)
        cout<<"*";

        cout<<endl;
    }


    for(int i=n; i>0; i--)
    {
        for(int j=n-i; j>0; j--)
            cout<<" ";

        for(int j=(2*i)-1; j>0; j--)
        cout<<"*";

        cout<<endl;
    }

    return 0;
        
        
}