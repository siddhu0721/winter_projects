#include <iostream>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    int fact=1;
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    int count2=0;
    int count5=0;
    while(fact%2==0)
    {
        count2++;
        fact=fact/2;
    }
    while(fact%5==0)
    {
        count5++;
        fact=fact/5;
    }
    int ans=(count2<count5)?count2:count5;
    cout << ans;
}