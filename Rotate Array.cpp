#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



   void reverse(vector<int> &arr,int start,int end)
   {
       while(start<end)
       {
           swap(arr[start],arr[end]);
           start++;
           end--;
           
       }
   }
    void rotate_array(vector<int>&arr,int n,int k)
    {
        k=k % n;
        reverse(arr,0,n-1);
       reverse(arr,0,k-1);
        reverse(arr,k,n-1);
    }
    int main()
    {
        int n;
        cin>>n;
        vector<int> arr(n);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
    int k;
cin>>k;
rotate_array(arr,n,k);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
 cout<<"\n" ;  
    return 0;
}
