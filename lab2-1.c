#include <Stdio.h>
int main(){
    char charType;//������ ���� charType ����
    int integerType;//������ ���� integerType ����
    float floatType;//�Ǽ��� ���� floatType ����
    double doubleType;//�Ǽ��� ���� doubleType ����

    printf("----- ������ 2022041021 -----\n");//�̸� �й� ���

    printf("Size of char : %ld byte\n",sizeof(charType));//charType���� ũ�� ����� ���� char�� ũ�� ��� 
    printf("Size of int : %ld bytes\n",sizeof(integerType));//integerType���� ũ�� ����� ���� int�� ũ�� ���
    printf("Size of float : %ld bytes\n",sizeof(floatType));//floatType���� ũ�� ����� float�� ũ�� ���
    printf("Size of double : %ld bytes\n",sizeof(doubleType));//doubleType���� ũ�� ����� ���� double�� ũ�� ���

    printf("-------------------------\n");

    printf("Size of char : %ld byte\n",sizeof(char));//char�� ũ�� ���
    printf("Size of int : %ld bytes\n",sizeof(int));//int�� ũ�� ���
    printf("Size of float : %ld bytes\n",sizeof(float));//float�� ũ�� ���
    printf("Size of double : %ld bytes\n",sizeof(double));//double�� ũ�� ���

    printf("-------------------------\n");

    printf("Size of char* : %ld byte\n",sizeof(char*));//char������ ũ�� ���.�����ʹ� �ּҿ��� 4byte�� ũ�� ����
    printf("Size of int* : %ld bytes\n",sizeof(int*));//int������ ũ�� ���.�����ʹ� �ּҿ��� 4byte�� ũ�� ����
    printf("Size of float* : %ld bytes\n",sizeof(float*));//float������ ũ�� ���.�����ʹ� �ּҿ��� 4byte�� ũ�� ����
    printf("Size of double* : %ld bytes\n",sizeof(double*));//double������ ũ�� ���.�����ʹ� �ּҿ��� 4byte�� ũ�� ����

    return 0;

}