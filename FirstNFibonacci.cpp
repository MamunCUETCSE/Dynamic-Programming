#include<bits/stdc++.h>
using namespace std;
class fibonacci{
public:
    int fib(int n)
    {
        int fi[n+1];
        if(n==1 || n==2)
            return 1;
        else {
        fi[1]=1;
        fi[2]=1;
        for(int i=3;i<=n;i++)
        {
            fi[i]=fi[i-1]+fi[i-2];
        }
        return fi[n];
        }
    }

};
int main()
{
    int n;
    cin>>n;
    fibonacci obj;
    cout<<obj.fib(n);
}
