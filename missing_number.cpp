#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int arr[n-1];
    for (int i=0;i<n-1;i++)
    {
        cin >> arr[i] ;
    }
    for (int i=1;i<=n;i++)
    {
        int check=1;
        for (int j=0;j<n-1;j++)
        {
            if (arr[j]==i)
            {
                check=1;
                break;
            }
            else
            {
                check=0;
            }
        }
        if(check==0)
        {
            cout << i;
            break;
        }
    }
}