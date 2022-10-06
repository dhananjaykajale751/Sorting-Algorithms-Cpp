#include<iostream>
using namespace std;
void swap(int i, int j) {
		int temp =i;
		 i=j;
		 j=temp;
			}
	
 int partition(int arr[],int start, int end) {
		int pivot=arr[start];
		int count =0;
		for (int i=start+1;i<=end;i++) {
			if (arr[i]<=pivot) {
				count++;
				
			}
			
		}
		int pivotIndex=start+count;
		 int temp = pivot;
	        arr[start] = arr[pivotIndex];
	        arr[pivotIndex] = temp;
		int i=start;
		int j= end;
		while(i<pivotIndex && j>pivotIndex) {
			while(arr[i]<pivot) {
				i++;
			}
			while(arr[j]>pivot) {
				j--;
			}
			if(i<pivotIndex && j>pivotIndex) {
				swap(arr[i++], arr[j--]);
			}
		}
		
		return pivotIndex;
	}
	 void quicksort(int arr[],int start, int end) {
		if(start>=end) {
			return;
		}
		if(start<end) {
		int p=partition(arr,start,end);
		quicksort(arr, start, p-1);
		quicksort(arr, p+1, end);
		}
	}
	
int main() {
		int a[]= {2,5,3};
		int n = 3;
		quicksort(a, 0, n-1);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}cout<<endl;
		
	}


