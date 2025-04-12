/*

*********
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
*********

*/
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter No: ";

    cin>>n;

    for(int i=1; i<=2*n-1; i++)
        cout<<"*";

    cout<<endl;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            cout<<"*";

        for(int j=1; j<=(2*i)-1; j++)
        {
            if(j==1 || j==(2*i)-1)    
                cout<<"*";
            else
                cout<<" ";
        }

        for(int j=1; j<=n-i; j++)
            cout<<"*";

        cout<<endl;
    }


    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=i; j++)
            cout<<"*";

        for(int j=1; j<=((n-i)*2)-1; j++)
        {
            if(j==1 || j==((n-i)*2)-1)
                cout<<"*";
            else
                cout<<" ";
        }

        for(int j=1; j<=i; j++)
            cout<<"*";

        cout<<endl;
    }

    for(int i=1; i<=2*n-1; i++)
    cout<<"*";

    return 0;
        
        
}