#include<iostream>
using namespace std;   
void swap(int arr[], int i ,int j){
	int temp = arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int main(){
	int a[]={8,4,3,2,1};
	int n = 5;
	for(int lui=n-1;lui>0;lui--){
		for(int i=0;i<lui;i++){
			if(a[i]>a[i+1]){
				swap(a,i,i+1);
			}
		}
	}
	for(int i=0;i<n;i++){
			cout<<a[i]<<" , ";
		}cout<<endl;
}
