#include<bits/stdc++.h>
using namespace std;
unsigned ugly(unsigned n)
{
    unsigned ug[n+1];
    unsigned m2=2;
    unsigned m3=3;
    unsigned m5=5;

    ug[1]=1;
    unsigned nextugly=1;
    int i2=0,i3=0,i5=0;
    for(int i=1;i<=n;i++)
    {
        nextugly=min(m2,min(m3,m5));
        ug[i]=nextugly;
        if(nextugly==m2)
        {
            i2+=1;
            m2=ug[i2]*2;
        }
        if(nextugly==m3)
        {
            i3+=1;
            m3=ug[i3]*3;
        }
        if(nextugly==m5)
        {
            i5+=1;
            m5=ug[i5]*5;
        }
    }
    return nextugly;
}
int main()
{
    int n;
    cin>>n;
    cout<<ugly(n);
}
