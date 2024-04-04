//return an entire row in pascal triangle
#include<bits/stdc++.h>
using namespace std;
/*
int fun_cnCr(int n,int r)
{
    int res=1;
    for(int i=0;i<r;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main()
{
    int row;
    cin>>row;
    for(int column=1;column<=row;column++)
    cout<<fun_cnCr(row-1,column-1)<<" ";
    return 0;
}
*/
int main()
{
    int row,ans=1;
    cin>>row;
    cout<<ans<<" ";
    for(int i=1;i<row;i++)
    {
        ans*=(row-i);
        ans/=i;
        cout<<ans<<" ";
    }
    return 0;
}
