/*

1
23
456
78910
1112131415

*/

#include<iostream>

using namespace std;

int main()
{
    int n, m=1;
    cout<<"Enter No: ";

    cin>>n;
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
            cout<<m++;

        cout<<endl;

    }    

    return 0;
        
        
}