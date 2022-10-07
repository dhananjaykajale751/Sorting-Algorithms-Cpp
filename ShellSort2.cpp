#include<iostream>
using namespace std;
int main()
{
	int a[]={755,604,126,342,747,102};
	int len = sizeof(a)/sizeof(a[0]);
		cout<<"The Unsorted array is ";
	cout<<endl;
	int length = sizeof(a)/sizeof(a[0]);
	for(int i=0;i<length;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"The sorted array is :-";
	cout<<endl;
	for(int gap=length/2;gap>=1;gap=gap/2){
		for(int j=gap;j<len;j++){
			for(int i=j-gap;i>=0;i=i-gap){
				if(a[i]<a[i+gap]){
					break;
				}
				else
				{
				  int temp = a[i];
				  a[i]=a[i+gap];
				  a[i+gap]=temp;
				}
			}
		}
	}
		for(int i=0;i<length;i++){
		cout<<a[i]<<" ";
	}
	
}