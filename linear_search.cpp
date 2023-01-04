#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;
    cout<<"enter no of elements\n";
    cin>>n;
    cout<<"enter numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter target value";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(target==arr[i])
        {
            cout<<i+1<<"target fount";
        }
    }

}