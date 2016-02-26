#include <stdio.h>
struct transaction {
	int amount;
	char date[11];
	char description[20];
};
struct transaction commonElement(struct transaction*, int, struct transaction*, int);
int main(){
	struct transaction A[3] = { { 10, "09-10-2003", "First" }, { 20, "19-10-2004", "Second" }, { 30, "03-03-2005", "Third" } };
	struct transaction B[3] = { { 10, "09-10-2003", "First" }, { 220, "18-01-2010", "Sixth" }, { 320, "27-08-2015", "Seventh" } };
	struct transaction C = commonElement(A, 3, B, 3);
	printf("%d\t", C.amount);
	printf("%s\t", C.date);
	printf("%d\t", C.description);
	return 0;
}
struct transaction commonElement(struct transaction A[], int Alen, struct transaction B[], int Blen){
	
	for (int i = 0; i < Alen; i++){
		for (int j = 0; j < Blen; j++){
			if (A[i].amount == B[j].amount){
				if (A[i].date == B[j].date){
					if (A[i].description == B[j].description){
						return A[i];
					}
				}
			}
		}
	}
	/*int arr1[10][3] = { { 0 } };
	int arr2[10][3] = { { 0 } };
	
	for (int i = 0; i < Alen; i++){
		//day
		arr1[i][0] = A[i].date[0] - 48;
		arr1[i][0] *= 10;
		arr1[i][0] += A[i].date[1] - 48;
		//month
		arr1[i][1] = A[i].date[3] - 48;
		arr1[i][1] *= 10;
		arr1[i][1] += A[i].date[4] - 48;
		//year
		arr1[i][2] = A[i].date[6] - 48;
		arr1[i][2] *= 10;
		arr1[i][2] += A[i].date[7] - 48;
		arr1[i][2] *= 10;
		arr1[i][2] += A[i].date[8] - 48;
		arr1[i][2] *= 10;
		arr1[i][2] += A[i].date[9] - 48;
	}
	for (int i = 0; i < Blen; i++){
		//day
		arr2[i][0] = A[i].date[0] - 48;
		arr2[i][0] *= 10;
		arr2[i][0] += A[i].date[1] - 48;
		//month
		arr2[i][1] = A[i].date[3] - 48;
		arr2[i][1] *= 10;
		arr2[i][1] += A[i].date[4] - 48;
		//year
		arr2[i][2] = A[i].date[6] - 48;
		arr2[i][2] *= 10;
		arr2[i][2] += A[i].date[7] - 48;
		arr2[i][2] *= 10;
		arr2[i][2] += A[i].date[8] - 48;
		arr2[i][2] *= 10;
		arr2[i][2] += A[i].date[9] - 48;
	}
	for (int i = 0, j = 0, k = 0; i < Alen + Blen; k++){
		
	}*/
	
	

	return;
}