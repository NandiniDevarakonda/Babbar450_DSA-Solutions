#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cout<<"Enter the array size"<<endl;
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter the array elements which consists only 0's 1's 2's"<<endl;
	for(int i=0;i<n;i++)
	{
	 cin>>arr[i];
	}
	int low=0,mid=0,high=n-1;
	while(mid<=high)
	{
	    for(int i=0;i<n;i++)
	    {
	        if(arr[mid]==0)
	        {
	            swap(arr[low],arr[mid]);
	            low++;
	            mid++;
	        }
	        else if(arr[mid]==1)
	        {
	            mid++;
	        }
	        else
	        {
	            swap(arr[mid],arr[high]);
	            high--;
	        }
	    }
	}
	cout<<"Sorted array is "<<endl;
	for(auto x: arr)
	{
	    cout<<x<<" ";
	}
	cout<<endl;
}
