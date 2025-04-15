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

int totalFactors(int n)
{
    vector<int> powers = power(n);

    int tf = 1;

    for(int x:powers)
    {
        tf = tf*(x+1);
    }

    return tf;
}

long unsigned int prodFactors(int n)
{
    int tf = totalFactors(n);
    cout<<pow(n, tf/2);
    return pow(n, tf/2);
}

int main()
{
    int n;
    cout<<"Enter no: ";
    cin>>n;

    long unsigned int af = prodFactors(n);
    // cout<<endl<<af;

    return 0;
}