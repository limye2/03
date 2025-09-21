//
//  main.c
//  03 실습2
//
//  Created by 이예림 on 9/21/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    int i;
    
    printf("input a number : ");
    scanf("%c", &c);
    
    i = c-'0';
    printf("The input number is %i\n", i);
    
    return 0;
}
