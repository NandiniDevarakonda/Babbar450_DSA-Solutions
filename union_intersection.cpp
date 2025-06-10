#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
	cout<<"Enter the array 1 size"<<endl;
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter the array 1 elements"<<endl;
	for(int i=0;i<n;i++)
	{
	 cin>>arr[i];
	}
	cout<<endl;
	int m;
	cout<<"Enter the array 2 size"<<endl;
	cin>>m;
	vector<int> arr2(m);
	cout<<"Enter the array 2 elements"<<endl;
	for(int i=0;i<m;i++)
	{
	 cin>>arr2[i];
	}
	cout<<endl;
	set<int> uni;
	for(int i=0;i<n;i++)
	{
	    uni.insert(arr[i]);
	}
	for(int i=0;i<m;i++)
	{   
      uni.insert(arr2[i]);
	}
	cout<<"Union of array 1 and 2 "<<endl;
	for(auto x: uni)
	{
	    cout<<x<<" ";
	}
	cout<<endl;
	set<int> inter;
	for(int i=0;i<m;i++)
	{
	    if(find(arr.begin(),arr.end(),arr2[i])!=arr.end())
	    {
	        inter.insert(arr2[i]);
	    }
	}
		cout<<"Intersection of array 1 and 2 "<<endl;
	for(auto x: inter)
	{
	    cout<<x<<" ";
	}
	cout<<endl;
	
}
