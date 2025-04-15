#include<iostream>
#include<vector>
#include<math.h>
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

vector<int> power(int n)
{
    vector<int> pf=primeFactors(n);
    vector<int> powers;
    int count;

    for(int x:pf)
    {
        count=0;
        while(n%x == 0)
        {
            count++;
            n/=x;
        }
        powers.push_back(count);
    }

    return powers;

}

int oddFactors(int n)
{
    vector<int> powers = power(n);

    int of=1;

    for(int i=1; i<powers.size(); i++)
    {
        of=of*(powers[i]+1);
    }

    return of;
}

int evenFactors(int n)
{
    vector<int> powers = power(n);

    int ef=1;

    for(int i=0; i<powers.size(); i++)
    {
        if(i==0)
            ef=ef*powers[i];
        else
            ef=ef*(powers[i]+1);
    }

    return ef;
}

int main()
{
    int n, e, o;
    cout<<"Enter no: ";
    cin>>n;

    e=evenFactors(n);
    o=oddFactors(n);
    cout<<"Even factors of "<<n<<" are: "<<e<<endl;
    cout<<"Odd factors of "<<n<<" are: "<<o<<endl;

    return 0;
}