//
// Created by user on 10/29/2026.
//

// has issues.

// Easy 2.

#include <iostream>
using namespace std;

bool hasAlternatingBits(int n);

int main()
{
    int n; cin >> n;
    cout << boolalpha << hasAlternatingBits(n);
}

bool hasAlternatingBits(int n)
{
    int Binary = 0;
    int Power = 1;
    bool returnV = 1;
    while ( n > 0 ) {
        if ( n % 2 == 1 ){
            Binary += Power;
        }
        n /= 2;
        Power *= 10;
    }
    int cache = Binary % 10;
    Binary /= 10;
    while ( Binary > 0 ) {
        if ( cache == ( Binary % 10) ) { return 0;}
        cache = Binary % 10;
        Binary /= 10;
    }
    return returnV;
}