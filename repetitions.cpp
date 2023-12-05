#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string dna;
    cin >> dna;
    int n=dna.size();
    char a=dna[0];
    int ans=1;
    int count=1;
    for (int i=1;i<n;i++)
    {
        if (a==dna[i])
        {
            count++;
        }
        else
        {
            a=dna[i];
            if(count>ans)
            {
                ans=count;
            }
            count=1;
        }
    }
    cout << ans;
}