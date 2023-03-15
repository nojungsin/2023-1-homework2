#include <Stdio.h>
int main(){
    int i;//������ ���� i ����
    int *ptr;//������ ������ ptr ����
    int **dptr;//������ ���� ������ dptr ����

    printf("----- ������ 2022041021 -----\n");//�̸� �й� ���

    i=1234;
    printf("[checking values before prt = &i]\n");
    printf("value of i == %d\n", i);//���� i�� ��
    printf("address of i == %p\n", &i);//���� i�� �ּҰ�
    printf("value of ptr == %p\n", ptr);//���� ptr�� ��
    printf("address of ptr == %p\n", &ptr);//���� ptr�� �ּҰ�

    ptr = &i; /*ptr is now holding the address of i*/
    printf("\n[checking values after prt = &i]\n");
    printf("value of i == %d\n", i);//���� i�� ��
    printf("address of i == %p\n", &i);//���� i�� �ּҰ�
    printf("value of ptr == %p\n", ptr);//���� ptr�� ��
    printf("address of ptr == %p\n", &ptr);//���� ptr�� �ּҰ�
    printf("value of *ptr == %d\n", *ptr);//���� ptr�� ����Ű�� ��

    dptr = &ptr;    /*dptr is now holding the address of ptr*/

    printf("\n[checking values after dprt = &ptr]\n");
    printf("value of i == %d\n", i);//���� i�� ��
    printf("address of i == %p\n", &i);//���� i�� �ּҰ�
    printf("value of ptr == %p\n", ptr);//���� ptr�� ��
    printf("address of ptr == %p\n", &ptr);//���� ptr�� �ּҰ�
    printf("value of *ptr == %d\n", *ptr);//���� ptr�� ����Ű�� ��
    printf("value of dptr == %p\n", dptr);//���� dptr�� ��
    printf("address of dptr == %p\n", &dptr);//���� dptr�� �ּҰ�
    printf("value of *dptr == %p\n", *dptr);//���� dptr�� ����Ű�� ��
    printf("value of **dptr == %d\n", **dptr);//���� dptr�� ����Ű�� ���� ����Ű�� ��

    *ptr = 7777;    /*changing the value of *ptr */

    printf("\n[after *prt = 7777]\n");
    printf("value of i == %d\n", i);//���� i�� ��
    printf("value of *ptr == %d\n", *ptr);//���� ptr�� ����Ű�� ��
    printf("value of **dptr == %d\n", **dptr);//���� dptr�� ����Ű�� ���� ����Ű�� ��

    **dptr = 8888;    /*changing the value of **dptr */

    printf("\n[after **dprt = 8888]\n");
    printf("value of i == %d\n", i);//���� i�� ��
    printf("value of *ptr == %d\n", *ptr);//���� ptr�� ����Ű�� ��
    printf("value of **dptr == %d\n", **dptr);//���� dptr�� ����Ű�� ���� ����Ű�� ��

    return 0;

}