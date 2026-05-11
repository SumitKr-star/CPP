#include <iostream>
using namespace std;

int main()
{
    int  n , sum = 0 ;
    cout << "Entera postive integer" ;
    cin >> n ;

    for (int i = 1 ; i<=n ; i++)
    {
        sum = sum + i ;
    }

    cout << "THe sum of postive integers is = " << sum ;

    return 0;
}
