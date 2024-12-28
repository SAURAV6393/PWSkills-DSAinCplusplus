#include<iostream>
using namespace std;
int main ()
{
     int x,c;
   cout<<"Enter size of array :  ";
   cin>>x;
   c = x;
   int crr[c];
   c--;
   int arr[x];
   for(int  i= 0 ; i< x ; i++)
   {
    cin>>arr[i];
    crr[c]=arr[i];
    c--;
   }
  cout<<endl<<" Output array  : ";
  for(int  i= 0 ; i< x ; i++)
   {
    cout<<arr[i]<<" ";
   }
   c= x;
   c--;
   cout<<endl<<"COPY REVERSE ARRAY : ";
   for(int  i= 0 ; i<x ; i++)
   {
    cout<<crr[i]<<" ";
   }
  
  
}