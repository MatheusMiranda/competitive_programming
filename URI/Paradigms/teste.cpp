#include <iostream>
#include <cstdio>
using namespace std;
int fs(int a,int b,int c){
    
    int sec;

    if ( a < b )
    {
        if ( b < c ) sec = b;
        else sec = ( a < c ? c : a );
    }
    else
    {
        if ( a < c ) sec = a;
        else sec = ( b < c ? c : b );
    }

    return sec;
}
int main(void) 
{
    int a, b, c;
    int second_max;

    cin >> a >> b >> c;
    cout << fs(a,b,c);

    return 0;
}
