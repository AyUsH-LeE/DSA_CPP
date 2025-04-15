#include<iostream>
#include<vector>
#include<math.h>
#include<map>
using namespace std;


bool isPrime(int n)
{
    if(n<=1)
        return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
            return false;
    }

    return true;
}

vector<int> primeFactors(int n)
{
    vector<int> primeFac;
    for(int i=2; i<=n; i++)
    {
        if(n%i == 0)
        {
            if(isPrime(i))
                primeFac.push_back(i);
        }
    }

    return primeFac;
}

map<int, int> power(int n)
{
    vector<int> pf=primeFactors(n);
    map<int, int> powers;
    int count;

    for(int x:pf)
    {
        count=0;
        while(n%x == 0)
        {
            count++;
            n/=x;
        }
        powers[x]=count;
    }

    return powers;

}

int sumFactors(int n)
{
    map<int, int> pf = power(n);
    int sf = 1;
    for(auto p:pf)
    {
        // cout<<"-->"<<((pow(p.first,p.second+1)-1)/(p.first-1))<<endl;
        sf=sf*((pow(p.first,p.second+1)-1)/(p.first-1));
        // cout<<"---->"<<sf<<endl;
    }

    return sf;
}

int main()
{
    int n;
    cout<<"Enter no: ";
    cin>>n;

    cout<<sumFactors(n)<<endl;

    // cout<<"15*4*6 = "<<15*4*6;

    return 0;
}