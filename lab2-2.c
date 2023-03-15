#include <Stdio.h>
int main(){
    int i;//정수형 변수 i 선언
    int *ptr;//정수형 포인터 ptr 선언
    int **dptr;//정수형 이중 포인터 dptr 선언

    printf("----- 윤혜준 2022041021 -----\n");//이름 학번 출력

    i=1234;
    printf("[checking values before prt = &i]\n");
    printf("value of i == %d\n", i);//변수 i의 값
    printf("address of i == %p\n", &i);//변수 i의 주소값
    printf("value of ptr == %p\n", ptr);//변수 ptr의 값
    printf("address of ptr == %p\n", &ptr);//변수 ptr의 주소값

    ptr = &i; /*ptr is now holding the address of i*/
    printf("\n[checking values after prt = &i]\n");
    printf("value of i == %d\n", i);//변수 i의 값
    printf("address of i == %p\n", &i);//변수 i의 주소값
    printf("value of ptr == %p\n", ptr);//변수 ptr의 값
    printf("address of ptr == %p\n", &ptr);//변수 ptr의 주소값
    printf("value of *ptr == %d\n", *ptr);//변수 ptr이 가리키는 값

    dptr = &ptr;    /*dptr is now holding the address of ptr*/

    printf("\n[checking values after dprt = &ptr]\n");
    printf("value of i == %d\n", i);//변수 i의 값
    printf("address of i == %p\n", &i);//변수 i의 주소값
    printf("value of ptr == %p\n", ptr);//변수 ptr의 값
    printf("address of ptr == %p\n", &ptr);//변수 ptr의 주소값
    printf("value of *ptr == %d\n", *ptr);//변수 ptr이 가리키는 값
    printf("value of dptr == %p\n", dptr);//변수 dptr의 값
    printf("address of dptr == %p\n", &dptr);//변수 dptr의 주소값
    printf("value of *dptr == %p\n", *dptr);//변수 dptr이 가리키는 값
    printf("value of **dptr == %d\n", **dptr);//변수 dptr이 가리키는 값이 가리키는 값

    *ptr = 7777;    /*changing the value of *ptr */

    printf("\n[after *prt = 7777]\n");
    printf("value of i == %d\n", i);//변수 i의 값
    printf("value of *ptr == %d\n", *ptr);//변수 ptr이 가리키는 값
    printf("value of **dptr == %d\n", **dptr);//변수 dptr이 가리키는 값이 가리키는 값

    **dptr = 8888;    /*changing the value of **dptr */

    printf("\n[after **dprt = 8888]\n");
    printf("value of i == %d\n", i);//변수 i의 값
    printf("value of *ptr == %d\n", *ptr);//변수 ptr이 가리키는 값
    printf("value of **dptr == %d\n", **dptr);//변수 dptr이 가리키는 값이 가리키는 값

    return 0;

}