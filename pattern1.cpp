#include<iostream>
#include<stdio.h>

int main() {
	int i,j,n;

	for (i=1;i<=5;i++) {
		for (j=5;j>=i;j--) {
			std::cout<<i;
		}
		std::cout<<"\n";
	}
	return 0;
}

