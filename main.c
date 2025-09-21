//
//  main.c
//  03 실습3
//
//  Created by 이예림 on 9/21/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    char d;
    
    printf("enter a character : ");
    scanf("%c", &c);
    d = c + 1;
    
    printf("The next character of %c (%i) is %c (%i) \n", c, c, d, d);
    return 0;
}
