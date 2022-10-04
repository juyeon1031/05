#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, trial = 0;
	int ans = 59;
	
	do 
	{
		printf("Guess a number:");
		scanf("%i", &i);
		
		if (i>ans)
			printf("High!\n");
		else if(i<ans)
			printf("Low!\n");
		trial++;
	}
	while (i != ans);
		
	
	printf("Congratulations! trials : %i", trial );
		
	return 0;
	
}

