#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int y,x;
        cin >> y;cin >> x;
        int n=(y>x)?y:x;
        int arr[n][n];
        int left=0,top=0;
        arr[0][0]=1;
        int count=2;
        for (int i=2;i<=n;i++)
        {
            if (i%2==0)
            {
                left++;
                while(top<i)
                {
                    arr[top][left]=count++;
                    top++;
                }
                top--;
                left--;
                while(left>=0)
                {
                    arr[top][left]=count++;
                    left--;
                }
                left++;
            }
            else
            {
                top++;
                while(left<i)
                {
                    arr[top][left]=count++;
                    left++;
                }
                left--;
                top--;
                while(top>=0)
                {
                    arr[top][left]=count++;
                    top--;
                }
                top++;
            }
        }
        cout << arr[y-1][x-1] << endl;
    }
}