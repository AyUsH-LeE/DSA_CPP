#include<iostream>
#include<vector>
using namespace std;

vector<int> factors(int n)
{
    vector<int> fac;

    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
            fac.push_back(i);
    }
    return fac;
}


int main()
{
    int n;
    cout<<"Enter No: ";
    cin>>n;
    
    vector<int> fac = factors(n);

    for(int x:fac)
    {
        cout<<x<<" ";
    }

    return 0;
}