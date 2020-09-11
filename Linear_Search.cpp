#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "Enter the size of array" << " ";
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int data;
	cout << "Enter the element you want to search the index and location" << " ";
	cin >> data;
	cout << endl;
	int i;

	for( i =0; i<n; i++){
		if(a[i]==data){
			cout << "element found at pos " << i+1 <<" at index "<< i << endl;  
			break;
			}
		}
		if(i==n){
			cout << "Element not found" << endl;
		}
	return 0;
}