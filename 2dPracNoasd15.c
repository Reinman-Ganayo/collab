#include <stdio.h>


void Avg (int A[][100], float B[], int n) {
    int i, j;
	float sum;

    for (i = 0; i < n; i++) {
sum = 0;		
        for (j = 0; j < n; j++) {
        	
        	
        		sum+=	A[i][j] ;
 			
        }
        B[i] = sum / j;
    }

}

int Print(int A[][100], int rows, int columns)
{
    int i, j;


    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", A[i][j]);
            }
            printf("\n");
        }
  }

int main() {
	int n;
    int A[100][100] = {{123,2,3},{4,5,6},{7,8,9}};
	float B [3];
    Avg (A, B, 3);
    Print(A, 3, 3);
    printf("\n");
    for(int i = 0;i < 3; i ++) {
    	printf("%.2f ", B[i]);
	}


    return 0;
}
