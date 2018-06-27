//Array sorting in ascending order
#include <iostream>
#include <cstdlib>
using namespace std;
int compare(const void *p1, const void *p2)
{
	return(*(int*)p1 - *(int*)p2);
}
int main()
{
	int arr[5];
	cout<<"Enter Array Elements\n";
	for(int i = 0; i <=4; i++)
	{
		cin>>arr[i];
	}
	qsort(arr, 5, sizeof(int), compare);
	cout<<"Sorted Array Elements\n";
	for(int i = 0; i <=4; i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}