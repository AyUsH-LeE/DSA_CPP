/*

     1 
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter No: ";
    cin>>n;

    int coef;

    for(int i=0; i<n;  i++)
    {
        for(int j=0; j<n-i; j++)
            cout<<" ";

        for(int j=0; j<=i; j++)
        {
            if(j==0 || i==0)
                coef=1;
            else
                coef = coef*(i-j+1)/j;

            cout<<coef<<" ";
        }

        cout<<endl;
    }

    return 0;
}