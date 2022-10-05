#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int grade = 0; 
    printf("enter your score:");
    scanf("%d", &grade); 
    if (grade>100 |grade<0){
    	printf("you enter the wrong number!");
	}
    switch(grade) { 
        case 90 ... 100: 
            printf("A"); 
            break; 
        case 80 ... 89: 
            printf("B"); 
            break; 
        case 70 ... 79: 
            printf("C"); 
            break; 
        case 60 ... 69: 
            printf("D"); 
            break; 
        case 0 ... 59: 
            printf("E"); 
            break;
    } 
    return 0;
}
