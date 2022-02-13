#include<iostream>

using namespace std;

int main()
{

int arr[5],start, end=4, temp;
cout<<"\n			PROGRAM TO REVERSE AN ARRAY				";
cout<<"Enter 5 elements for an array \n";
for(int i=0; i<5; i++)
{
cout<<"location "<<i<<" :-";
cin>>arr[i];
}
cout<<"\n\n Entered array: ";
for(int l=0; l<5;l++)
{
cout<<arr[l]<<" ";
}
 for(start=0; start<end; start++,end--)
{
temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
}
cout<<"\n\n\ The reversed array is: ";
for(int j=0;j<5;j++)
{

cout<<arr[j]<<" ";
}
return 0;
}