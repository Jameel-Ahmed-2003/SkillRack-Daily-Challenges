/*
return element at specified row and column
*/
#include<bits/stdc++.h>
using namespace std;
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
    int r,c;
    cin>>r>>c;
    cout<<fun_cnCr(r-1,c-1);
    return 0;
}
