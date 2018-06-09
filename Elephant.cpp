#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x, ans=0;
    cin>>x;

    ans=x/5;
    if(x%5!=0)
    {
        ans+=1;
    }

    cout<<ans<<endl;
}
