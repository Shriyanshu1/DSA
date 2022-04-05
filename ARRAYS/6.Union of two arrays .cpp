

#include <bits/stdc++.h>
using namespace std;



class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_map<int,int> count;
        for(int i=0; i<n; i++){
            count[a[i]]++;
        }
        for(int i=0; i<m; i++){
            count[b[i]]++;
        }
        return count.size();
    }
};



int main() {
	
	int t=1;
	

	while(t--){
	    
	    int n, m;
	    cout<<"Enter size of first array:";
	    cin >> n;
	    cout<<"\nEnter size of second array:";
	    cin>>m;
	    int a[n], b[m];
	   cout<< "\nEnter "<<n<<" elements for the first array:";
	    for(int i = 0;i<n;i++){
	       cin >> a[i];}
	 cout<< "\nEnter "<<m<<" elements for the second array:";
	    for(int i = 0;i<m;i++){
	       cin >> b[i];}
	    Solution obj;
	    cout << "Union of the two arrays:"<<obj.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  