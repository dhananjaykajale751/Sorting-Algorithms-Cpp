#include<iostream>
using namespace std;
int main(){

int r[]= {22,-35,20,-15,56,-98};
		
		for(int fui=1;fui<6;fui++) {
			int i;
			int newElement=r[fui];
			for( i=fui;i>0 && r[i-1]>newElement;i--) {
				r[i]=r[i-1]; 
			}
			r[i]=newElement;
		}
		for(int a=0;a<6;a++) {
			cout<<r[a]<<" ";
		}
	}