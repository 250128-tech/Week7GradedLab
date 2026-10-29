//
// Created by user on 10/29/2026.
//

// has issues.

// Easy 5.
// time defaulted



#include <iostream>
using namespace std;

long long power(int base, int product);
int integerBreak( int n );

int main()
{
    int n; cin >> n;

}

long long power(int base, int exp)
{
    long long result ;
    for ( int i = exp; i < 0; i--)
    {
         result *= base;
    }
    return result;
}
int integerBreak( int n )
{
    if ( n - 3 > 1) { return 3;}
    else if ( n - 2 > 1) { return 2;}
    else if ( n - 1 > 1) { return 1;}
    else { return 0;}
    return 0;
}