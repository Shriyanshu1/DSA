#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t=1;
    
    while (t--) {
        int n; // number of array elements
        cout<<"enter the array size: ";cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) {
        cout<<"enter array element at position "<<i<<" : ";
        cin >> a[i];}

        pair<ll, ll> pp = getMinMax(a, n);

        cout <<"\nminimum element of the array: "<< pp.first << "\n" <<"maximum element of the array: "<< pp.second << endl;
    }
    return 0;
}



    pair<long long, long long> getMinMax(long long a[], int n) {
   ll max=a[0],min=a[0];
   for(int i=0;i<n;i++)
   {
       if(a[i]>max)
           max=a[i];
       if(a[i]<min)
           min=a[i];
   }
   return make_pair(min, max); // or pair<long long, long long>p; p={min,max}; return p;
}

