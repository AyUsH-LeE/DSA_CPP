/*

12345
1234
123
12
1

*/



#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter No: ";

    cin>>n;
    // for(int i = 1; i<=n; i++)
    // {
    //     for(int j=1; j<=n-i+1; j++)
    //         cout<<j;

    //     cout<<endl;

    // }    

    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
            cout<<j+1;

        cout<<endl;

    } 

    return 0;
        
        
}