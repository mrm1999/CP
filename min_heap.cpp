#include <bits/stdc++.h>
using namespace std;
vector <int> x_part;
vector <int> y_part;

void heapify(int arr[] , int i , int n)
{
	int root= i;
	int left = (2*i)+1;
	int right = (2*i)+2;
	if( left < n && arr[left] < arr[root])
	{
		root = left;
	}
	if(right < n && arr[right] < arr[root])
	{
		root = right;
	}
	if(root != i)
	{
		swap(arr[root] , arr[i]);
		x_part.push_back(i);
		y_part.push_back(root);
		heapify(arr , root , n);
	}
	
}
int extract_min(int arr[] , int heap_size)
{
	if( heap_size <=0)
	{
		return INT_MAX;
	}
	if(heap_size ==1)
	{
		
		return arr[0];
	}
	int root = arr[0];
	arr[0]= arr[heap_size-1];
	heap_size--;
	heapify(arr , 0 , heap_size);
	return root;
}
void build_min_heap(int arr[] , int n)
{
	
	int x = (n/2)-1;
	for(int i = x;i>=0;i--)
	{
		heapify(arr , i ,n);
	}
	cout<<"The Heapified array is :-     ";
	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	/*int m = x_part.size();
	cout<<m<<endl;
	for(int i =0;i<m;i++)
	{
		cout<<x_part[i]<<" "<<y_part[i]<<endl;
	}*/
	int sort_array[n];
	int heap_size = n;
	for(int i=0;i<n;i++)
	{
		sort_array[i] = extract_min(arr , heap_size);
		heap_size--;
	}
	cout<<"The sorted array is :-      ";
	for(int i=0;i<n;i++)
	{
		cout<<sort_array[i]<<" ";
	}
	
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	build_min_heap(arr , n);
}
