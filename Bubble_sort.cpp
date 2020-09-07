#include<iostream>
using namespace std;
int main(){
	cout << "Enter the Size of the array:  " ;
	int n;
	cin >> n;
	int a[n];
	int temp;
	cout << "Enter the elements of array: ";
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	for(int i=0; i<n; i++){
		int flag=0;
		// int pass=1;
		for(int j=0; j<n-1-i; j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag =1;
				// pass++;
			}
		}
		// cout << pass << endl; for checking how to times it checked
		if(flag==0){
			break;
		}
	}
	cout << "Sorted elements are:  ";
	for(int i=0; i<n; i++){
		cout<< a[i];
	}

	return 0;
}