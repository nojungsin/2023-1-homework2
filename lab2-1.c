#include <Stdio.h>
int main(){
    char charType;//문자형 변수 charType 선언
    int integerType;//정수형 변수 integerType 선언
    float floatType;//실수형 변수 floatType 선언
    double doubleType;//실수형 변수 doubleType 선언

    printf("----- 윤혜준 2022041021 -----\n");//이름 학번 출력

    printf("Size of char : %ld byte\n",sizeof(charType));//charType변수 크기 출력을 통해 char형 크기 출력 
    printf("Size of int : %ld bytes\n",sizeof(integerType));//integerType변수 크기 출력을 통해 int형 크기 출력
    printf("Size of float : %ld bytes\n",sizeof(floatType));//floatType변수 크기 출력을 float형 크기 출력
    printf("Size of double : %ld bytes\n",sizeof(doubleType));//doubleType변수 크기 출력을 통해 double형 크기 출력

    printf("-------------------------\n");

    printf("Size of char : %ld byte\n",sizeof(char));//char형 크기 출력
    printf("Size of int : %ld bytes\n",sizeof(int));//int형 크기 출력
    printf("Size of float : %ld bytes\n",sizeof(float));//float형 크기 출력
    printf("Size of double : %ld bytes\n",sizeof(double));//double형 크기 출력

    printf("-------------------------\n");

    printf("Size of char* : %ld byte\n",sizeof(char*));//char포인터 크기 출력.포인터는 주소여서 4byte로 크기 동일
    printf("Size of int* : %ld bytes\n",sizeof(int*));//int포인터 크기 출력.포인터는 주소여서 4byte로 크기 동일
    printf("Size of float* : %ld bytes\n",sizeof(float*));//float포인터 크기 출력.포인터는 주소여서 4byte로 크기 동일
    printf("Size of double* : %ld bytes\n",sizeof(double*));//double포인터 크기 출력.포인터는 주소여서 4byte로 크기 동일

    return 0;

}