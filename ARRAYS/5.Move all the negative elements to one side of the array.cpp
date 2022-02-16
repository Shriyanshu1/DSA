#include <bits/stdc++.h>
using namespace std;

 
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
          int a[n],j=0,k=0,count=0;
        for (int i=0;i<n;i++){     //copying all the positive elements from the main array to a temporary array
            if(arr[i]>=0){
                a[j]=arr[i];
                j++;
                count++;
            }
        }
        for (int q=0;q<n;q++){    //copying all the negative elements from the main array to a temporary array
            if(arr[q]<0){
                a[count+k]=arr[q];
                k++;
            }
        }
            
        for (int l=0;l<n;l++){   //copying sorted elements from temporary array to the main array
            arr[l]=a[l];
        }
    }
};


int main() {
	
	int t=1;
	
	while(t--)
	{
		int n;
		cin>>n; //entering the size of array
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}