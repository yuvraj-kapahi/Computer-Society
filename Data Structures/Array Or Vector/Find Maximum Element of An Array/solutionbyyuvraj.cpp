#include <iostream>

using namespace std;

int main()
{
    int a[10],n,max=0;
    cout<<"Enter the lenght of an array:";
    cin>>n;
    cout<<"Input the array";
    for(int i=0;i<n;i++)
    {cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {if(max<a[j])
     {max=a[j];
     }
    }
    cout<<"The max no is:"<<max;

    return 0;
}
