//
//  main.c
//  03 실습4
//
//  Created by 이예림 on 9/21/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    
    printf("분자를 입력하세요 : ");
    scanf("%d", &a);
    
    printf("분모를 입력하세요 : ");
    scanf("%d", &b);
    
    printf("나누기의 결과는 %.6f 입니다.\n", (float)a/b);
    return 0;
}
