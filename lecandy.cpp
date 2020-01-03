#include<iostream>
using namespace std;
int main()
{
	long int t,n,c;
	cin>>t;
	while(t--)
	{
		long int sum=0,f=0,j=0;
		cin>>n>>c;
		long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
			}
			if(sum<=c)
			
		cout<<"Yes";
		
		else
		
		cout<<"No";
		cout<<endl;
		
		}
		return 0;
	
}