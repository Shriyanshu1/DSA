#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+r+1);
        
        return arr[k-1];
    }
};

 
int main()
{
    int t=1;
    
    
    while(t--)
    {
        int n; //number of elements in the array
        cout<<"enter the size of array :";cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++){
          cout<<"enter array element at position "<<i<<" : ";
           cin>>a[i]; }  //entering array elements
            
        int k;
        cout<<"\nInput the value of K to get the Kth minimum value from the array :";cin>>k;
        Solution ob;   //object of class "solution declared"
        cout<<"The minimum Kth element in the array is :"<< ob.kthSmallest(a, 0, n-1, k)<<endl;  
    }
    return 0;
} 
