#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ptr;
	int i,j;
	
	float a[3][2] = {
		{667, 422},
		{233.5, 515},
		{183.4, 335}
	};
	
	float b[3][2] = {
		{100, 151.6},
		{245.5, 312},
		{333, 578.8}
	};
	
	for(i=1;i<=3;i++){
		for(j=1;j<=2;j++){
			printf("element at a[%d],[%d] = %f\n", i,j,a[i][j]);
		}
	}
	
	for(i=1;i<=3;i++){
		for(j=1;j<=2;j++){
			printf("element at b[%d],[%d] = %f\n", i,j,b[i][j]);
		}
	}
	
	return 0;
}
