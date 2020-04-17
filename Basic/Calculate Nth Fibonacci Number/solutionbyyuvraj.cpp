#include <iostream>

using namespace std;

int main()
{
    int first=0,second=1,n,m;
    cout<<"Enter the series upto";
    cin>>n;
    cout<<first<<","<<second<<",";
    for(int i=0;i<n-2;i++)
    {m=first+second;
     first=second;
     second=m;
     cout<<m<<",";
    }
        
    
    return 0;
}
