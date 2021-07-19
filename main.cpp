#include <iostream>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdint.h>
#include <netinet/in.h>


int main(int arcg,char *argv[])
{
    uint8_t buffer1[4];
    uint8_t buffer2[4];

    FILE *file1;
    FILE *file2;

    file1 = fopen(argv[1],"r");
    file2 = fopen(argv[2],"r");
    fread(buffer1,8,1,file1);
    fread(buffer2,8,1,file2);

    uint32_t *p1 = reinterpret_cast< uint32_t * >(buffer1);
    uint32_t *p2 = reinterpret_cast< uint32_t * >(buffer2);
    uint32_t number1 = ntohl(*p1);
    uint32_t number2 = ntohl(*p2);
    uint32_t result = number1 + number2;


    printf ("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", number1, number1, number2, number2, result, result);



    return 0;

// 성공! 2021 07 20 !! 늦었지만 과제 제출합니다!




}
