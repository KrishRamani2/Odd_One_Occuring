#include <bits/stdc++.h>
using namespace std;
int odd(int arr[],int n)
{
    int res = arr[0];
    for(int i=1;i<n;i++)
    {res=res^arr[i];}
    return res;
}
int main()
{
    int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout <<odd(arr, n);	
	return 0;
}