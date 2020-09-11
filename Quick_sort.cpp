#include<iostream>
using namespace std;
int partition(int a[], int lb, int ub){
	int start = lb;
	int end = ub;
	int pivot = a[lb];

	while(start < end){

	while(a[start] <= pivot){
		start++;
	}

	while(a[end] > pivot){
		end--;
	}
	if(a[end]>a[start]){
		swap(a[end], a[start]);
	}
}
swap(a[end],a[lb]);
return end;

}

void quicksort(int a[], int lb, int ub){
		while(lb<ub){
		int loc = partition(a,lb, ub);

		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
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
		int lower = 0;
		int upper = n-1;
		quicksort(a, lower, upper);
		return 0;
	}


