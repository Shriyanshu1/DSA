
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
       unordered_map<int,int> mapInt;
    
       int count=0;
       
       for(int i=0;i<n; i++)
           mapInt[a[i]]++;
       
       for(int i=0; i<m; i++)
          if(mapInt.count(b[i]))
          {
             mapInt.erase(b[i]);
              
              count++;
          }
   return count;
    }
};


int main() {
    int t=1;
    
    while (t--) {
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
        cout <<"Intersection of the two arrays :"<< obj.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}  
