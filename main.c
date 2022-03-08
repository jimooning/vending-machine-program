#include <stdio.h>
#include <stdlib.h>

int tem=0;
int menu=0;
int menu_price[12]={3000,3000,3000,3000,4000,4000,4000,4000,2000,2000,2000,2000 }; //메뉴가격 배열로 지정

//온도선택 함수 선언
void check_tem();
//결제방법 함수 선언
void select_pay();

int main()
{

    while(1){
        printf("┌--------------------------------------------------------------------┐\n");
        printf("│                             메뉴                                   │\n");
        printf("├--------------┬------------┬------------┬-------------┬-------------┤\n");
        printf("│ 커피 3000원  │   1.아메   │   2.라떼   │   3.바닐라  │   4.모카    │ \n");
        printf("├--------------┼------------┼------------┼-------------┼-------------┤\n");
        printf("│ 스무디 4000원│   5.딸기   │   6.초코   │   7.플레인  │  8.바나나   │\n");
        printf("│  (only ice)  │            │            │             │             │\n");
        printf("├--------------┼------------┼------------┼-------------┼-------------┤\n");
        printf("│   티 2000원  │   9.녹차   │10.얼그레이 │ 11.캐모마일 │ 12.페퍼민트 │\n");
        printf("└--------------┴------------┴------------┴-------------┴-------------┘\n");
        puts("원하시는 메뉴를 선택 해 주세요 (1번~12번) ");
        printf(">>");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                printf("아메리카노 선택\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 2:
                printf("카페라떼 선택\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 3:
                printf("바닐라라떼 선택\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 4:
                printf("카페모카 선택\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 5:
                printf("딸기스무디 선택\n");
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 6:
                printf("초코스무디 선택\n");
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 7:
                printf("플레인스무디 선택\n");
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 8:
                printf("바나나스무디 선택\n");
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 9:
                printf("녹차 선택\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 10:
                printf("얼그레이 선택\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 11:
                printf("캐모마일 선택\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            case 12:
                printf("페퍼민트 선택\n");
                check_tem();
                select_pay();
                getchar();
                getchar();
                system("cls");
                break;
            default:
                printf("잘못 입력 하셨습니다 다시입력 부탁드립니다!\n");
                break;

        }
    }
    return 0;
}

//온도선택 함수 정의
void check_tem(){
    while(1){
        printf("① ice, ② hot(*only ice 제외): ");
        scanf("%d", &tem);
    if(tem<=2){
        if(tem==1){
            printf("ice를 선택하셨습니다.");
        }
          if(tem==2){ printf("hot를 선택하셨습니다.");
          }
          printf("\n");
          break;
    }
        printf("잘못 입력 하셨습니다 다시 입력 부탁드립니다!\n");

    }
    return;
}

//결제방법 함수 정의
void select_pay(){
    int pay=0;
    int cash=0;
    printf("결제방법을 선택해 주세요 1.현금 2.카드 >> ");
    scanf("%d",&pay);
    if(pay==1){
        puts("현금결제 선택");
       while(1){
        printf("지폐단위로 돈을 넣어주세요(최대10000원) >> ");
        scanf("%d",&cash);
        if(cash>=menu_price[menu-1]){
            printf("%d넣으셨습니다. 잔돈은 %d입니다\n ",cash,cash-menu_price[menu-1]);
            puts("***잔돈을 챙겨가 주세요!***");
            break;
        }else{
            printf("투입하신 금액 %d 부족한 금액 %d 부족한 금액을 더 넣어주세요  \n",cash,menu_price[menu-1]-cash);
            }
        }
    }


    if(pay==2){
        puts("카드결제 선택");
        puts("카드를 꽂아주시고 결제가 완료메세지가 뜨기 전에 카드를 뽑지마세요!!!");
        _sleep(3000);//3초뒤 다음 메세지 출력
        puts("***결제가 완료되었습니다 카드를 뽑아주세요^^***");
    }
    _sleep(1500);
    printf("음료가 제조되는 중 입니다 잠시만 기다려 주세요~ \n");
    _sleep(3000);
    printf("음료 제조가 완료 되었습니다 감사합니다!\n");
    return;
}
