//
//  main.c
//  03
//
//  Created by 이예림 on 9/21/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input_int;
    float input_float;
    
    printf("enter an integer : ");
    scanf("%d", &input_int);
    
    printf("enter a float : ");
    scanf("%f", &input_float);
    
    printf("integer : %d, float : %f\n", input_int, input_float);
    
    return 0;
}
