#include <iostream>
using namespace std;
int main()
{
	int n , x , y , temp;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i++)cin>>a[i];
	x = 0;
	y = n-1;
	for(int i = 0 ; i < n/2 ; i++)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}
	for(int i = 0 ; i < n ; i++)cout<<a[i]<<" ";
}