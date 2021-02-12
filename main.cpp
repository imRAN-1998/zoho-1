#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string a;
	cin>>a;
	int n = a.length();
	int m= n/2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<"  ";
		}
		for(int j=m;j<=m+i;j++){
			if(j<n){
			cout<<a[j]<<" ";
			}else{
				cout<<a[j-n]<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
