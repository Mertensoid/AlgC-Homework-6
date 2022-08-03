//
//  main.c
//  AlgC-Homework-6
//
//  Created by admin on 03.08.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void solution1();
//void solution2();
//void solution3();
//void solution4();
//void solution5();
void menu();

int main(int argc, const char * argv[]) {
    menu();
    return 0;
}

void menu() {
    srand( time(NULL) );
    int solutionNumber;
    printf("Choose solution (1..3):\n");
    scanf("%d", &solutionNumber);
    switch (solutionNumber) {
        case 1:
            solution1();
            break;
//        case 2:
//            solution2();
//            break;
//        case 3:
//            solution3();
//            break;
//        case 4:
//            solution4();
//            break;
//        case 5:
//            solution5();
//            break;
        default:
            printf("Wrong solution number!");
            break;
    }
}
