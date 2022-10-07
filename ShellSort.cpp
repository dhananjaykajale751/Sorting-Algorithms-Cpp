#include<iostream>
using namespace std;
int main()
{
	int a[]={8,4,3,7,1,10};
	cout<<"The Unsorted array is ";
	cout<<endl;
	int length = sizeof(a)/sizeof(a[0]);
	for(int i=0;i<length;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"The sorted array is :-";
	cout<<endl;
   for(int gap=length/2;gap>0;gap=gap/2){
   	for(int i=gap;i<length;i++) {
				int newElement=a[i];
				int j =i;
				while(j>=gap && a[j-gap]>newElement) {
					a[j]=a[j-gap];
					j-=gap;
				}
				a[j]=newElement;
			}
   }
   for(int i=0;i<length;i++){
		cout<<a[i]<<" ";
	}
}
