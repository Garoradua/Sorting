#include<bits/stdc++.h>
using namespace std;
int Binary_search(int a[], int n, int data){
	int l=0;
	int r = n-1;
	while(l<=r){
	int mid = (l+r)/2;

	if(a[mid]==data){
		cout << "element found at position " << mid+1 << endl;
		return mid;
	}
	else if(a[mid]>data){
		r= mid-1;
	}
	else{
		l = mid+1;
	}
}
if(l>r){
	return -1;
}
}
int main(){
	cout << "Enter the Size of the array:  " ;
	int n;
	cin >> n;
	int a[n];
	cout << "Enter the elements of array: ";
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int data;
	cout << "Enter the element you want to search the index and location" << " ";
	cin >> data;
	cout << endl;

	cout << Binary_search(a,n,data);
	return 0;
}
