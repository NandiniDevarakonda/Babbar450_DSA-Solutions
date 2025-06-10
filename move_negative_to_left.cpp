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
	int j=0;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]<0)
	    {
	        swap(arr[i],arr[j]);
	        j++;
	    }
	}
	cout<<"array after moving negative elements to left "<<endl;
	for(auto x: arr)
	{
	    cout<<x<<" ";
	}
	cout<<endl;
}
