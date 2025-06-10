#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cout<<"Enter the array size"<<endl;
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++)
	{
	 cin>>arr[i];
	}
	cout<<"Array is ";
	for(auto x: arr)
	{
	    cout<<x<<" ";
	}
	cout<<endl;
	int min=arr[0],max=arr[0];
	for(int i=1;i<n;i++)
	{
	    if(arr[i]>max) max=arr[i];
	    if(arr[i]<min) min=arr[i];
	}
	cout<<"Minimum element is "<<min<<endl;
	cout<<"Maximum element is "<<max<<endl;
}
