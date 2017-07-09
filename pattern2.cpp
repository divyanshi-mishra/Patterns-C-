#include<stdio.h>
#include<iostream>
int main() {
	int rw, c, no=1 ,len;

	for (rw=1; rw<=4; rw++) {

		for (c=1; c<=rw; c++) {
		    if(c == rw){
		        std::cout<<no;
		        no++;
		    }
		    else{
			    std::cout<<no<<" ";
			    no++;
		    }
		}
		std::cout<<"\n";
	}
	return 0;

}
