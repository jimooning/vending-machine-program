#include <stdio.h>
#include <stdlib.h>

int tem=0;
int menu=0;
int menu_price[12]={3000,3000,3000,3000,4000,4000,4000,4000,2000,2000,2000,2000 }; //�޴����� �迭�� ����

//�µ����� �Լ� ����
void check_tem();
//������� �Լ� ����
void select_pay();

int main()
{

    while(1){
        printf("��--------------------------------------------------------------------��\n");
        printf("��                             �޴�                                   ��\n");
        printf("��--------------��------------��------------��-------------��-------------��\n");
        printf("�� Ŀ�� 3000��  ��   1.�Ƹ�   ��   2.��   ��   3.�ٴҶ�  ��   4.��ī    �� \n");
        printf("��--------------��------------��------------��-------------��-------------��\n");
        printf("�� ������ 4000����   5.����   ��   6.����   ��   7.�÷���  ��  8.�ٳ���   ��\n");
        printf("��  (only ice)  ��            ��            ��             ��             ��\n");
        printf("��--------------��------------��------------��-------------��-------------��\n");
        printf("��   Ƽ 2000��  ��   9.����   ��10.��׷��� �� 11.ĳ���� �� 12.���۹�Ʈ ��\n");
        printf("��--------------��------------��------------��-------------��-------------��\n");
        puts("���Ͻô� �޴��� ���� �� �ּ��� (1��~12��) ");
        printf(">>");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                printf("�Ƹ޸�ī�� ����\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 2:
                printf("ī��� ����\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 3:
                printf("�ٴҶ�� ����\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 4:
                printf("ī���ī ����\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 5:
                printf("���⽺���� ����\n");
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 6:
                printf("���ڽ����� ����\n");
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 7:
                printf("�÷��ν����� ����\n");
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 8:
                printf("�ٳ��������� ����\n");
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 9:
                printf("���� ����\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 10:
                printf("��׷��� ����\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 11:
                printf("ĳ���� ����\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 12:
                printf("���۹�Ʈ ����\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            default:
                printf("�߸� �Է� �ϼ̽��ϴ� �ٽ��Է� ��Ź�帳�ϴ�!\n");
                break;

        }
    }
    return 0;
}

//�µ����� �Լ� ����
void check_tem(){
    while(1){
        printf("�� ice, �� hot(*only ice ����): ");
        scanf("%d", &tem);
    if(tem<=2){
        if(tem==1){
            printf("ice�� �����ϼ̽��ϴ�.");
        }
          if(tem==2){ printf("hot�� �����ϼ̽��ϴ�.");
          }
          printf("\n");
          break;
    }
        printf("�߸� �Է� �ϼ̽��ϴ� �ٽ� �Է� ��Ź�帳�ϴ�!\n");

    }
    return;
}

//������� �Լ� ����
void select_pay(){
    int pay=0;
    int cash=0;
    printf("��������� ������ �ּ��� 1.���� 2.ī�� >> ");
    scanf("%d",&pay);
    if(pay==1){
        puts("���ݰ��� ����");
       while(1){
        printf("��������� ���� �־��ּ���(�ִ�10000��) >> ");
        scanf("%d",&cash);
        if(cash>=menu_price[menu-1]){
            printf("%d�����̽��ϴ�. �ܵ��� %d�Դϴ�\n ",cash,cash-menu_price[menu-1]);
            puts("***�ܵ��� ì�ܰ� �ּ���!***");
            break;
        }else{
            printf("�����Ͻ� �ݾ� %d ������ �ݾ� %d ������ �ݾ��� �� �־��ּ���  \n",cash,menu_price[menu-1]-cash);
            }
        }
    }


    if(pay==2){
        puts("ī����� ����");
        puts("ī�带 �Ⱦ��ֽð� ������ �Ϸ�޼����� �߱� ���� ī�带 ����������!!!");
        _sleep(3000);//3�ʵ� ���� �޼��� ���
        puts("***������ �Ϸ�Ǿ����ϴ� ī�带 �̾��ּ���^^***");
    }
    _sleep(1500);
    printf("���ᰡ �����Ǵ� �� �Դϴ� ��ø� ��ٷ� �ּ���~ \n");
    _sleep(3000);
    printf("���� ������ �Ϸ� �Ǿ����ϴ� �����մϴ�!\n");
    return;
}
