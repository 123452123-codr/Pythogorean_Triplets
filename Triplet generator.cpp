#include<iostream>
using namespace std;
int main()
{
    long int a,n,i,b,c;
    cout<<"Enter the no of triplets you want:";
    cin>>n;
    for(i=0; i<=n, i++)
    {
        a = i*i-1;
        b = 2*i;
        c = i*i+1;
        if(a*a + b*b == c*c)
        {
            cout<<"\n"<<a<<","<<b<<","<<c;
        }
    }
    return 0;
}
