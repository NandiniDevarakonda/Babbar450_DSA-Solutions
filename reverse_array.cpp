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
	reverse(arr.begin(),arr.end());
	cout<<"Reverse of array using reverse function"<<endl;
	for(auto x: arr)
	{
	    cout<<x<<" ";
	}
	cout<<endl;
	cout<<"Again Reverse of array using for loop"<<endl;
	vector<int> temp=arr;
	for(int i=0;i<n;i++)
	{
	    arr[i]=temp[n-i-1];
	}
		for(auto x: arr)
	{
	    cout<<x<<" ";
	}

}
