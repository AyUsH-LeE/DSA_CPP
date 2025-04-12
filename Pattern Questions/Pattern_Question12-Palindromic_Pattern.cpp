/*
    1
   212
  32123
 4321234
543212345
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter No: ";

    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
            cout<<" ";

        for(int j=i+1; j>0; j--)
            cout<<j;

        for(int j=1; j<=i; j++)
            cout<<j+1;

        cout<<endl;

    }    

    return 0;
        
        
}