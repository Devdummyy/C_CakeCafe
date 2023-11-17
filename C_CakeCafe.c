#include <stdio.h>
#include <stdlib.h>
//***** Code :: Discount = "1420" *****//

//"++++++++++Detail Project++++++++++"
//"+ 1. Void                        +"
//"+ 2. Struct                      +"
//"+ 3. While do / For loop         +"
//"+ 4. Switch case                 +"
//"+ 5. IF Else                     +"
//"+ 6. Pointer                     +"
//"+ 7. Array                       +"
//"+ 8. String / Float / Int        +"
//"+ 9. Return                      +"
//"+ 10. Input / Output             +"
//"++++++++++++++++++++++++++++++++++"

//struct
struct employee {
  int Choose;
};

//void1
void Termail() {
  
  printf("++++++++++++++++++++++++++++++\n");
  printf("+           -Menu-           +\n");
  printf("++++++++++++++++++++++++++++++\n");
  printf("|1. Banana    cake | 40 Bath.|\n|2. Blueberry cake | 40 Bath.|\n|3. "
         "Chocolate cake | 40 Bath.|\n|4. Stawberry cake | 40 Bath.|\n|5. "
         "Lemon     cake | 40 Bath.|\n");
  printf("++++++++++++++++++++++++++++++\n");
  printf("+          -Drink-           +\n");
  printf("++++++++++++++++++++++++++++++\n");
  printf("|6. Water          | 10 Bath.|\n|7. Cocoa          | 45 Bath.|\n|8. "
         "Coffee         | 40 Bath.|\n|9. Tea            | 45 Bath.|\n|10. "
         "Latte         | 45 Bath.|\n");
  printf("++++++++++++++++++++++++++++++\n\n");
};

//void Termil1
void Termail1() {
  printf("\n-Cafe Cake[Discount]-\n\n");
  printf("++++++++++++++++++++++++++++++\n");
  printf("+      -Menu[Discount]-      +\n");
  printf("++++++++++++++++++++++++++++++\n");
  printf("|1. Banana    cake | 25 Bath.|\n|2. Blueberry cake | 25 Bath.|\n|3. "
         "Chocolate cake | 25 Bath.|\n|4. Stawberry cake | 25 Bath.|\n|5. "
         "Lemon     cake | 25 Bath.|\n");
  printf("++++++++++++++++++++++++++++++\n");
  printf("+          -Drink-           +\n");
  printf("++++++++++++++++++++++++++++++\n");
  printf("|6. Water          | 5 Bath. |\n|7. Cocoa          | 35 Bath.|\n|8. "
         "Coffee         | 35 Bath.|\n|9. Tea            | 35 Bath.|\n|10. "
         "Latte         | 35 Bath.|\n");
  printf("++++++++++++++++++++++++++++++\n\n");
};

// System
void System() {
  
  printf("\nChoose\n1. Yes = 1 \n2. No = 0\n3. Discount = 99\n");
};

// System1
void System1() { printf("\nWhat would you like to eat/drink?\n"); };
//---------------------------------------------

int main(void) {
  int a = 1;
  
  do{
    //-------------------------
    struct employee emp1;
    //-------------------------
    printf("\n-Welcome to the Cafe Cake-\n\n");
    System();
    printf("\nEnter number. : ");
    scanf("%d", &emp1.Choose);
    int Money;
    int Choose;
    int Unit_Price;
    int Total_Amount;
    int Balance;
    int QTY, QTY1, QTY2, QTY3, QTY4, QTY5, QTY6, QTY7, QTY8, QTY9, QTY10;
    int Sum[10];
    int Totald[10];
    int Totala[10];
    int ID_Discount, List;
    int Id = 1420;
    int *id;
    id = &Id;
    Sum[0] = 0;
    Sum[1] = 0;
    Sum[2] = 0;
    Sum[3] = 0;
    Sum[4] = 0;
    Sum[5] = 0;
    Sum[6] = 0;
    Sum[7] = 0;
    Sum[8] = 0;
    Sum[9] = 0;
    //-------------------
    Totald[0] = 0;
    Totald[1] = 0;
    Totald[2] = 0;
    Totald[3] = 0;
    Totald[4] = 0;
    Totald[5] = 0;
    Totald[6] = 0;
    Totald[7] = 0;
    Totald[8] = 0;
    Totald[9] = 0;
    //-------------------
    Totala[0] = 0;
    Totala[1] = 0;
    Totala[2] = 0;
    Totala[3] = 0;
    Totala[4] = 0;
    Totala[5] = 0;
    Totala[6] = 0;
    Totala[7] = 0;
    Totala[8] = 0;
    Totala[9] = 0;
    //-------------------
    int A;
    switch (emp1.Choose) {
    case 1:
        Termail();
        System1();
        printf("\nEnter number(How many item)? : ");
        scanf("%d", &A);
        if (A >= 1) {
          printf("\n--%d--\n", A);
        } else {
          printf("\nValue error, Try a again.\n");
          printf("-------------------------------\n");
           a = 0;
           break;
        }
        for (int i = 0; i < A; i++) {
          printf("\nPress menu for item number [%d]. : ", i + 1);
          scanf("%d", &Choose);
          printf("\nPress(QTY). : ");
          scanf("%d", &QTY);
          if (Choose == 1) {
            Unit_Price = 40;
            QTY1 = QTY;
            Sum[0] = Unit_Price * QTY1;
            Totala[0] = Totala[0] + Sum[0];
            Totald[0] = Totald[0] + QTY1;
          } else if (Choose == 2) {
            Unit_Price = 40;
            QTY2 = QTY;
            Sum[1] = Unit_Price * QTY2;
            Totala[1] = Totala[1] + Sum[1];
            Totald[1] = Totald[1] + QTY2;
          } else if (Choose == 3) {
            Unit_Price = 40;
            QTY3 = QTY;
            Sum[2] = Unit_Price * QTY3;
            Totala[2] = Totala[2] + Sum[2];
            Totald[2] = Totald[2] + QTY3;
          } else if (Choose == 4) {
            Unit_Price = 40;
            QTY4 = QTY;
            Sum[3] = Unit_Price * QTY4;
            Totala[3] = Totala[3] + Sum[3];
            Totald[3] = Totald[3] + QTY4;
          } else if (Choose == 5) {
            Unit_Price = 40;
            QTY5 = QTY;
            Sum[4] = Unit_Price * QTY5;
            Totala[4] = Totala[4] + Sum[4];
            Totald[4] = Totald[4] + QTY5;
          } else if (Choose == 6) {
            Unit_Price = 10;
            QTY6 = QTY;
            Sum[5] = Unit_Price * QTY6;
            Totala[5] = Totala[5] + Sum[5];
            Totald[5] = Totald[5] + QTY6;
          } else if (Choose == 7) {
            Unit_Price = 45;
            QTY7 = QTY;
            Sum[6] = Unit_Price * QTY7;
            Totala[6] = Totala[6] + Sum[6];
            Totald[6] = Totald[6] + QTY7;
          } else if (Choose == 8) {
            Unit_Price = 40;
            QTY8 = QTY;
            Sum[7] = Unit_Price * QTY8;
            Totala[7] = Totala[7] + Sum[7];
            Totald[7] = Totald[7] + QTY8;
          } else if (Choose == 9) {
            Unit_Price = 45;
            QTY9 = QTY;
            Sum[8] = Unit_Price * QTY9;
            Totala[8] = Totala[8] + Sum[8];
            Totald[8] = Totald[8] + QTY9;
          } else if (Choose == 10) {
            Unit_Price = 45;
            QTY10 = QTY;
            Sum[9] = Unit_Price * QTY10;
            Totala[9] = Totala[9] + Sum[9];
            Totald[9] = Totald[9] + QTY10;
          } else if (Choose <= 0 && Choose <= 10 || QTY <= 0 && QTY <= 10) {
            printf("Value, Try a again.\n");
            printf("-------------------------------\n");
            Total_Amount = Totala[0] = 0, Totala[1] = 0, Totala[2] = 0,
            Totala[3] = 0, Totala[4] = 0, Totala[5] = 0, Totala[6] = 0,
            Totala[7] = 0, Totala[8] = 0, Totala[9] = 0;
             a = 0;
            break;
          }
          Total_Amount = Totala[0] + Totala[1] + Totala[2] + Totala[3] +
                         Totala[4] + Totala[5] + Totala[6] + Totala[7] +
                         Totala[8] + Totala[9];
        }
        if (1 <= Choose && 10 >= Choose) {
          if (1 <= QTY && 10 >= QTY) {
            printf("\n------------------------------");
            printf("\nTotal amount = %d Bath.\n", Total_Amount);
            printf("\nEnter Money. : ");
            scanf("%d", &Money);
            Balance = Money - Total_Amount;
            printf("-------------------------------\n");
            printf("Money Balance = %d Bath.\n", Balance);
            if (Balance <= -1) {
              printf("-------------------------------");
              printf("\nNot enough money.\n");
              printf("Try again.\n");
              Total_Amount = Totala[0] = 0, Totala[1] = 0, Totala[2] = 0,
              Totala[3] = 0, Totala[4] = 0, Totala[5] = 0, Totala[6] = 0,
              Totala[7] = 0, Totala[8] = 0, Totala[9] = 0;
              printf("-------------------------------\n");
               a = 0;
              break;
            } else {
              printf("-------------------------------\n");
              printf("Balance money.\n");
              printf("Successful confirmation.\n");
              printf("-------------------------------\n");
              printf("You can check the list of services.\n");
              printf("1. Yes = 1\n2. No = 0\n Choose : ");
              scanf("%d", &List);
              if (List == 1) {
                printf("\n*****************[List]******************\n");
                printf("1.Banana Cake    | %d Psc. | %d Bath.  \n", Totald[0],
                       Totala[0]);
                printf("2.Blueberry Cake | %d Psc. | %d Bath.   \n", Totald[1],
                       Totala[1]);
                printf("3.Chocolate Cake | %d Psc. | %d Bath.   \n", Totald[2],
                       Totala[2]);
                printf("4.Stawberry Cake | %d Psc. | %d Bath.   \n", Totald[3],
                       Totala[3]);
                printf("5.Lemon Cake     | %d Psc. | %d Bath.   \n", Totald[4],
                       Totala[4]);
                printf("6.Water          | %d Psc. | %d Bath.   \n", Totald[5],
                       Totala[5]);
                printf("7.Cocoa          | %d Psc. | %d Bath.   \n", Totald[6],
                       Totala[6]);
                printf("8.Coffee         | %d Psc. | %d Bath.   \n", Totald[7],
                       Totala[7]);
                printf("9.Tea            | %d Psc. | %d Bath.   \n", Totald[8],
                       Totala[8]);
                printf("10.Latte         | %d Psc. | %d Bath.  \n", Totald[9],
                       Totala[9]);
                printf("*******************************************\n");
                printf("-------------------------------------------------------\n");
                 a = 0;
                break;
              } else if (List == 0) {
                printf("-------------------------------\n");
                printf("Off the list.\n");
                printf("-------------------------------\n");
                 a = 0;
                break;
              }
            }
          } else {
            printf("Value error, Try a again.\n");
            printf("-------------------------------\n");
            Total_Amount = Totala[0] = 0, Totala[1] = 0, Totala[2] = 0,
            Totala[3] = 0, Totala[4] = 0, Totala[5] = 0, Totala[6] = 0,
            Totala[7] = 0, Totala[8] = 0, Totala[9] = 0;
             a = 0;
            break;
          }
        } else {
          printf("Value error, Try a again.\n");
          printf("-------------------------------\n");
          Total_Amount = Totala[0] = 0, Totala[1] = 0, Totala[2] = 0,
          Totala[3] = 0, Totala[4] = 0, Totala[5] = 0, Totala[6] = 0,
          Totala[7] = 0, Totala[8] = 0, Totala[9] = 0;
            a = 0;
           break;
        }
      
      break;
//-------------------------------------------------
    case 0:
      printf("thanks for Service. :D\n");
      printf("\n");
      a = 1;
      break;
    
//-------------------------------------------------
    case 99:
      printf("\nEnter ID_Discount. : ");
      scanf("%d", &ID_Discount);
      if (ID_Discount == *id) {
        do {
          printf("\nSuccesful %p -ID_Discount-\n", &id);
          Termail1();
          System1();
          printf("Enter number(How many item)? : ");
          scanf("%d", &A);
          //-----------------------
        if (A >= 1) {
          printf("\n--%d--\n", A);
        } else {
          printf("\nValue error, Try a again.\n");
          printf("-------------------------------\n");
           a = 0;
           break;
        }
           //-----------------------
          for (int i = 0; i < A; i++) {
            printf("\nPress menu for item number [%d]. : ", i + 1);
            scanf("%d", &Choose);
            printf("\nPress(QTY). : ");
            scanf("%d", &QTY);
            if (Choose == 1) {
              Unit_Price = 25;
              QTY1 = QTY;
              Sum[0] = Unit_Price * QTY1;
              Totala[0] = Totala[0] + Sum[0];
              Totald[0] = Totald[0] + QTY1;
            } else if (Choose == 2) {
              Unit_Price = 25;
              QTY2 = QTY;
              Sum[1] = Unit_Price * QTY2;
              Totala[1] = Totala[1] + Sum[1];
              Totald[1] = Totald[1] + QTY2;
            } else if (Choose == 3) {
              Unit_Price = 25;
              QTY3 = QTY;
              Sum[2] = Unit_Price * QTY3;
              Totala[2] = Totala[2] + Sum[2];
              Totald[2] = Totald[2] + QTY3;
            } else if (Choose == 4) {
              Unit_Price = 25;
              QTY4 = QTY;
              Sum[3] = Unit_Price * QTY4;
              Totala[3] = Totala[3] + Sum[3];
              Totald[3] = Totald[3] + QTY4;
            } else if (Choose == 5) {
              Unit_Price = 25;
              Sum[4] = Unit_Price * QTY5;
              Totala[4] = Totala[4] + Sum[4];
              Totald[4] = Totald[4] + QTY5;
            } else if (Choose == 6) {
              Unit_Price = 5;
              QTY6 = QTY;
              Sum[5] = Unit_Price * QTY6;
              Totala[5] = Totala[5] + Sum[5];
              Totald[5] = Totald[5] + QTY6;
            } else if (Choose == 7) {
              Unit_Price = 35;
              QTY7 = QTY;
              Sum[6] = Unit_Price * QTY7;
              Totala[6] = Totala[6] + Sum[6];
              Totald[6] = Totald[6] + QTY7;
            } else if (Choose == 8) {
              Unit_Price = 35;
              QTY8 = QTY;
              Sum[7] = Unit_Price * QTY8;
              Totala[7] = Totala[7] + Sum[7];
              Totald[7] = Totald[7] + QTY8;
            } else if (Choose == 9) {
              Unit_Price = 35;
              QTY9 = QTY;
              Sum[8] = Unit_Price * QTY9;
              Totala[8] = Totala[8] + Sum[8];
              Totald[8] = Totald[8] + QTY9;
            } else if (Choose == 10) {
              Unit_Price = 35;
              QTY10 = QTY;
              Sum[9] = Unit_Price * QTY10;
              Totala[9] = Totala[9] + Sum[9];
              Totald[9] = Totald[9] + QTY10;
            } else if (Choose <= 0 && Choose <= 10 || QTY <= 0 && QTY <= 10) {
              printf("Value, Try a again.\n");
              printf("-------------------------------\n");
              Total_Amount = Totala[0] = 0, Totala[1] = 0, Totala[2] = 0,
              Totala[3] = 0, Totala[4] = 0, Totala[5] = 0, Totala[6] = 0,
              Totala[7] = 0, Totala[8] = 0, Totala[9] = 0;
              a = 0;
              break;
            }
             //-----------------------
            Total_Amount = Totala[0] + Totala[1] + Totala[2] + Totala[3] +
                           Totala[4] + Totala[5] + Totala[6] + Totala[7] +
                           Totala[8] + Totala[9];
          }
           //-----------------------
          if (1 <= Choose && 10 >= Choose) {
            if (1 <= QTY && 10 >= QTY) {
              printf("\n------------[Discount]--------------");
              printf("\nTotal amount = %d Bath.\n", Total_Amount);
              printf("\nEnter Money. : ");
              scanf("%d", &Money);
              Balance = Money - Total_Amount;
              printf("-------------------------------\n");
              printf("Money Balance = %d Bath.\n", Balance);
              if (Balance < -1) {
                printf("-------------------------------");
                printf("\nNot enough money.\n");
                printf("Try again.\n");
                Total_Amount = Totala[0] = 0, Totala[1] = 0, Totala[2] = 0,
                Totala[3] = 0, Totala[4] = 0, Totala[5] = 0, Totala[6] = 0,
                Totala[7] = 0, Totala[8] = 0, Totala[9] = 0;
                printf("-------------------------------\n");
                a = 0;
                 break;
              //-----------------------
              } else {
                printf("-------------------------------\n");
                printf("Balance money.\n");
                printf("Successful confirmation.\n");
                printf("-------------------------------\n");
                printf("\n\n");
                printf("You can check the list of services.\n");
                printf("Choose\n1. Yes = 1\n2. No = 0 : ");
                scanf("%d", &List);
              //-----------------------
                if (List == 1) {
                  printf("\n*****************[List]******************\n");
                  printf("1.Banana Cake    | %d Psc. | %d Bath.  \n", Totald[0],
                         Totala[0]);
                  printf("2.Blueberry Cake | %d Psc. | %d Bath.   \n",
                         Totald[1], Totala[1]);
                  printf("3.Chocolate Cake | %d Psc. | %d Bath.   \n",
                         Totald[2], Totala[2]);
                  printf("4.Stawberry Cake | %d Psc. | %d Bath.   \n",
                         Totald[3], Totala[3]);
                  printf("5.Lemon Cake     | %d Psc. | %d Bath.   \n",
                         Totald[4], Totala[4]);
                  printf("6.Water          | %d Psc. | %d Bath.   \n",
                         Totald[5], Totala[5]);
                  printf("7.Cocoa          | %d Psc. | %d Bath.   \n",
                         Totald[6], Totala[6]);
                  printf("8.Coffee         | %d Psc. | %d Bath.   \n",
                         Totald[7], Totala[7]);
                  printf("9.Tea            | %d Psc. | %d Bath.   \n",
                         Totald[8], Totala[8]);
                  printf("10.Latte         | %d Psc. | %d Bath.  \n", Totald[9],
                         Totala[9]);
                  printf("*******************************************\n");
                  printf("-------------------------------------------------------\n");
                  a = 0;
                  break;
                } else if (List == 0) {
                  printf("-------------------------------\n");
                  printf("Off the list.\n");
                  printf("-------------------------------\n");
                  a = 0;
                  break;
                }
              }
               //-----------------------
            } else {
              printf("Value error, Try a again.\n");
              printf("-------------------------------\n");
              Total_Amount = Totala[0] = 0, Totala[1] = 0, Totala[2] = 0,
              Totala[3] = 0, Totala[4] = 0, Totala[5] = 0, Totala[6] = 0,
              Totala[7] = 0, Totala[8] = 0, Totala[9] = 0;
              a = 0;
               break;
            }
            //-----------------------
          } else {
            printf("Value error, Try a again.\n");
            printf("-------------------------------\n");
            Total_Amount = Totala[0] = 0, Totala[1] = 0, Totala[2] = 0,
            Totala[3] = 0, Totala[4] = 0, Totala[5] = 0, Totala[6] = 0,
            Totala[7] = 0, Totala[8] = 0, Totala[9] = 0;
            a = 0;
            break;
          }
           //----------
        } while (Balance < 0);
        break;
      } else {
        printf("Code error, Try a again.\n");
        printf("-------------------------------\n");
        a = 0;
        break;
      }
    default:
      printf("Value error, Try a again.\n");
      printf("-------------------------------\n");
      a = 0;
      break;
    }
  } while (a == 0);
 
}
