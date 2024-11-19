#include <stdio.h>

int main() {
	
	int score;
	char grade;
	
	printf("Enter your score (out of 100): ");
	scanf("%d",&score);
	
	switch(score/ 10) {
		case 10: 
		case 9: 
		   grade = 'A' ;
		   printf("Your grade is: A\n");
		   printf("Excellent work!\n");
		   break;
		   
		case 8:
			grade = 'B';
			printf("Your grade is: B\n");
		    printf("Well done!\n");
		    break;
		   
		case 7:
		   grade = 'C';
		   printf("Your grade is: C\n");
		   printf("Good job!\n");
		   break;
		   
		case 6:
		   grade = 'D';
		   printf("Your grade is: D\n");
		   printf("You passed, But you could do better\n");
		   break;
		   
		case 5:
		   grade = 'E';
		   printf("Your grade is: E\n");
		   break;
		   
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:  
		   grade ='F';
		   printf("Your grade is: F\n");
		   printf("Sorry, you failed.");
		   break;
		   
		default:
		    printf("Invalid score. Please enter a score between 0 and 100.\n"); 
    }
    
    if(grade >='A' && grade <='E') {
    	printf("You are eligible for the next level.\n");
	}
	else {
		printf("please try again next time.\n");
	}
    
    return 0;
    
}
