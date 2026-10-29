//
// Created by user on 10/29/2026.
//

// has issues.

// Easy 3.

#include <iostream>
using namespace std;

int tribonacci(int n);

int main()
{
    int n; cin >> n;
    cout << tribonacci(n);
    return 0;

}

int tribonacci(int n)
{
    if ( n == 0 ) { return 0;} else if ( n == 1 ) { return 1; } else if ( n == 2 ) { return 1;}
    int t0 = 0, t1 = 1, t2= 1;

    int i = n - 2;
    for ( i ; i > 0 ; i--){
        int temp1 = t2;
        int temp2 = t1;
        t2 = t0 + t1 + t2;
        t1 = temp1;
        t0 = temp2;
    }
    return t2;
}