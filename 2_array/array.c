#include <stdio.h>

#define N 10

int main(void)
{
	int square_matrix[N][N] = {0}, inverse_matrix[N] = {0}, triangular_matrix[N][N] = {0}, snail_matrix[N][N] = {0};
	int size = 0, i = 0, j = 0, counter = 1, div = 0, start = 0, end = 0;


	//square_matrix
	
	printf("1.Square matrix.\nEnter matrix size N (from 1 to 10) = ");
	scanf("%d",&size);

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			square_matrix[i][j] = counter;
			printf("%3d ",square_matrix[i][j]);
			counter++;
		}
		printf("\n");
	}


	//inverse_matrix
	
	printf("\n2. Inverse martix.\n Enter matrix size N (from 1 to 10) = ");
	scanf("%d",&size);
	counter = 1;
	
	printf("Matrix: ");
	for(i = 0; i < size; i++){
		inverse_matrix[i] = counter;
		printf("%2d ",inverse_matrix[i]);
		counter++;
	}
	printf("\nInverse matrix: ");
	for(i = 0; i < size; i++){
		printf("%2d ",inverse_matrix[size - i - 1]);
	}


	//triangular_matrix
	
	printf("\n\n3.Triangular matrix.\n Enter matrix size N (from 1 to 10) = ");
	scanf("%d",&size);

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			triangular_matrix[i][j] = ((i + j) < (size - 1))?0:1;
			printf("%d ",triangular_matrix[i][j]);
		}
		printf("\n");
	}
	

	//snail_matrix
	
	printf("\n4.Snail matrix. \n Enter matrix size N (from 1 to 10) = ");
	scanf("%d",&size);
	counter = 1;
	div = size>>1;
	start = 0;
	end = size;

	while(div > 0){
		i = start;
		j = start;
		while(j < end){
			snail_matrix[i][j] = counter;
			counter++;
			j++;
		}
		j--;
		i++;
		while(i < end){
			snail_matrix[i][j] = counter;
			counter++;
			i++;
		}
		i--;
		j--;
		while(j != (start-1)){
			snail_matrix[i][j] = counter;
			counter++;
			j--;
		}
		i--;
		j++;
		while(i > (start)){
			snail_matrix[i][j] = counter;
			counter++;
			i--;
		}
		end--;
		start++;
		div--;
	}

	if (1 == size) snail_matrix[0][0] = 1;
	else if (size%2) snail_matrix[size/2][size/2] = counter;

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			printf("%3d ",snail_matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
