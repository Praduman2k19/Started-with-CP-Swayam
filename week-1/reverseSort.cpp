#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],cost=0;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minIndex]>arr[j])
            minIndex=j;
        }

        cost+=minIndex-i+1;
        int k=i;
        // reverse...
        while(k<minIndex)
        {
            int temp=arr[k];
            arr[k]=arr[minIndex];
            arr[minIndex]=temp;
            k++;
            minIndex--;
        }
        
    }
    // print shorted array...
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"cost : "<<cost<<endl;
    return 0;
}