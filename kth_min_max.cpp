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
	int k;
	cout<<"Enter k-value ";
	cin>>k;
	cout<<endl;
	sort(arr.begin(),arr.end());
		cout<<"Array after sort is ";
	for(auto x: arr)
	{
	    cout<<x<<" ";
	}
	cout<<endl;
	cout<<k<<"th Minimum element is "<<arr[k-1]<<endl;
	cout<<k<<"th Maximum element is "<<arr[n-k]<<endl;
}
