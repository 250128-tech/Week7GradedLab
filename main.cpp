//
// Created by user on 10/29/2026.
//

// Easy 1.

#include <iostream>
using namespace std;

int toMinutes(int h, int m);
int ConvertTime(int time1, int time2);

int main()
{
    char colon; char space;
    int h = 0, m = 0; int h1 = 0, m1 = 0;
   /* for (int i = 1; i <= 0 ; i++ )
    {
        if (i==1){cin >> h >> colon >> m;}
        else {cin >> h1 >> colon >> m1;}
    } */
    cin >> h >> colon >> m; cin >> h1 >> colon >> m1;
    int time1 = toMinutes(h,m);
    int time2 = toMinutes(h1,m1);
    cout << ConvertTime (time1, time2);

    return 0;
}

int toMinutes(int h, int m)
{
    int time = 60*h+m; cout << time << endl;
    return time;
}

int ConvertTime(int time1, int time2)
{
    int stepCount = 0;
    int timeDiff = time2-time1;
    do
    {
        if (timeDiff % 60 == 0 ) {stepCount++; timeDiff -= 60;}
        else if (timeDiff % 15 == 0 ) {stepCount++; timeDiff -= 15;}
        else if (timeDiff % 5 == 0 ) { stepCount++; timeDiff -= 5;}
        else{stepCount++; timeDiff -= 1;}
    } while ( timeDiff > 0 );
    return stepCount;
}