#include<iostream>
using namespace std;
int main(){
	cout << "Enter the Size of the array:  " ;
	int n;
	cin >> n;
	int a[n];
	int temp;
	int j;
	cout << "Enter the elements of array: ";
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
		for(int i=1; i<n; i++){
			temp = a[i];
			j = i-1;

			while(a[j]>temp && j>=0){
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = temp;
		}
		cout << "elements are in sorted form that is :";
		for(int i=0; i<n; i++){
		cout <<  a[i];
	}
		return 0;


}