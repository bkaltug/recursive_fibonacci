#include<stdio.h>


int fibonacci(int step);

int main(void){
	
	int step,x,array[100];


printf("\nPlease enter the step number of fibonacci series that you want to see: ");
scanf("%d",&step);

if(step <1){
	
	printf("\nYou must enter an positive number!");
}

else{

	for(int i=1;i<=step;i++){
		
		printf("\nStep %d = %d",i,fibonacci(i));
	}
	
}
	
}


int fibonacci (int step){
	
		if(step ==2){
		return 1;
	}
	else if(step ==1){
		
		return 1;
	}
	
	else if(step != 1){
		
		return(fibonacci(step-1)+fibonacci(step-2));
	}
	
	
	
}

