#include <iostream>
using namespace std;

#define x 1000000007

int main()
{
    int n;
    int ans=1;
    cin >> n;
    if (n>=1 && n<=1000000)
    {
        for(int i=0;i<n;i++)
        {
            ans=ans%x;
            ans=(ans*2)%x;
        }
    }
    cout << ans;
}