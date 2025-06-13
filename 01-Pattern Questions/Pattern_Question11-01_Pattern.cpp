/*

1
01
010
1010
10101

*/



#include<iostream>
using namespace std;

int main() {
    int n;
    bool count=1;
    cout << "Enter No: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
        {
            cout<<count;
            count = !count;
        }
        cout << endl;
    }    
    return 0;
}
