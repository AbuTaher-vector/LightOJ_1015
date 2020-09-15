#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   for(int i=1;i<=t;i++)
    {
        int x,a,sum=0;
        cin>>x;
        while(x--)
        {
            cin>>a;
            if(a>0) sum+=a;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
}
