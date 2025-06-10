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
    int last=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
            arr[i]=arr[i-1];
    }
    arr[0]=last;
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
