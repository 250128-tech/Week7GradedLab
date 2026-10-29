//
// Created by user on 10/29/2026.
//

// has issues.

// Easy 4.



#include <iostream>
using namespace std;

void WordPrinter(int n, int k);

int main()
{
    char sp; int n,k; cin >> n >> sp >> k;
    WordPrinter(n, k);
    return 0;
}

void WordPrinter(int n, int k){
    k -= n;
    while ( k > 0 )
    {
        int num = 1;
        if ( k % 26 == 0 ) { num += 25; k-=25;}
        else if ( k % 25 == 0 ) { num += 24; k-=24;}
        else if ( k % 24 == 0 ) { num += 23; k-=23;}
        else if ( k % 23 == 0 ) { num += 22; k-=22;}
        else if ( k % 22 == 0 ) { num += 21; k-=21;}
        else if ( k % 21 == 0 ) { num += 20; k-=20;}
        else if ( k % 20== 0 ) { num += 19; k-=19;}
        else if ( k % 19 == 0 ) { num += 18; k-=18;}
        else if ( k % 18 == 0 ) { num += 17; k-=17;}
        else if ( k % 17 == 0 ) { num += 16; k-=16;}
        else if ( k % 16 == 0 ) { num += 15; k-=15;}
        else if ( k % 15 == 0 ) { num += 14; k-=14;}
        else if ( k % 14 == 0 ) { num += 13; k-=13;}
        else if ( k % 13 == 0 ) { num += 12; k-=12;}
        else if ( k % 12 == 0 ) { num += 11; k-=11;}
        else if ( k % 11 == 0 ) { num += 10; k-=10;}
        else if ( k % 10 == 0 ) { num += 9; k-=9;}
        else if ( k % 9 == 0 ) { num += 8; k-=8;}
        else if ( k % 8 == 0 ) { num += 7; k-=7;}
        else if ( k % 7 == 0 ) { num += 6; k-=6;}
        else if ( k % 6 == 0 ) { num += 5; k-=5;}
        else if ( k % 5 == 0 ) { num += 4; k-=4;}
        else if ( k % 4 == 0 ) { num += 3; k-=3;}
        else if ( k % 3 == 0 ) { num += 2; k-=2;}
        else if ( k % 2 == 0 ) { num += 1; k-=1;}
        cout << static_cast<char>(num+96);
    }
}