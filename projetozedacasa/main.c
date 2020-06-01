#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"Portuguese");
    char id[7];
    char pass[9];
    struct casa
    {
     char tdc[20];
     int d;
     int t;
     int cdb;
     int adc;
    };
    struct casa c;
    int  x,op,a,o,d,b,p,v,bg;
    textcolor(BLACK);
    system("color B");
    printf("       ) )        /\\\n");
    printf("      =====      /  \\\n");
    printf("     _|___|_____/ __ \\____________\n");
    printf("    |::::::::::/ |  | \\:::::::::::|          ____  ____        ____   __\n");
    printf("    |:::::::::/  ====  \\::::::::::|         (__  )(  __)      (    \\ / _\\\n");
    printf("    |_________|  ____  |__________|          / _/  ) _)        ) D (/    \\\n");
    printf("     | ______ | / || \\ | _______ |          (____)(____)      (____/\\_/\\_/\n");
    printf("     ||  |   || ====== ||   |   ||\n");
    printf("     ||--+---|| |    | ||---+---||\n");
    printf("     ||__|___|| |   o| ||___|___||               ___   __   ____   __\n");
    printf("     |========| |____| |=========|              / __) / _\\ / ___) / _\\\n");
    printf("    (^^-^^^^^-|________|-^^^--^^^)             ( (__ /    \\\\___ \\/    \\\n");
    printf("    (,, , ,, ,/________\\,,,, ,, ,)              \\___)\\_/\\_/(____/\\_/\\_/\n");
    printf("   ','',,,,' /__________\\,,,',',;;\n");
    Sleep(500);
    system("CLS");
    Sleep(700);
    textcolor(BLACK);
    system("color A");
    printf("       ) )        /\\\n");
    printf("      =====      /  \\\n");
    printf("     _|___|_____/ __ \\____________\n");
    printf("    |::::::::::/ |  | \\:::::::::::|          ____  ____        ____   __\n");
    printf("    |:::::::::/  ====  \\::::::::::|         (__  )(  __)      (    \\ / _\\\n");
    printf("    |_________|  ____  |__________|          / _/  ) _)        ) D (/    \\\n");
    printf("     | ______ | / || \\ | _______ |          (____)(____)      (____/\\_/\\_/\n");
    printf("     ||  |   || ====== ||   |   ||\n");
    printf("     ||--+---|| |    | ||---+---||\n");
    printf("     ||__|___|| |   o| ||___|___||               ___   __   ____   __\n");
    printf("     |========| |____| |=========|              / __) / _\\ / ___) / _\\\n");
    printf("    (^^-^^^^^-|________|-^^^--^^^)             ( (__ /    \\\\___ \\/    \\\n");
    printf("    (,, , ,, ,/________\\,,,, ,, ,)              \\___)\\_/\\_/(____/\\_/\\_/\n");
    printf("   ','',,,,' /__________\\,,,',',;;\n");
    Sleep(500);
    system("CLS");
    Sleep(700);
    do{
    printf("|>------------------------------------------<|\n");
    printf("|                   Login                    |\n");
    printf("|--------------------------------------------|\n");
    printf("|>--<Username:                           >--<|\n");
    printf("|--------------------------------------------|\n");
    printf("|>--<Password:                           >--<|\n");
    printf("|--------------------------------------------|\n");
    printf("|                                            |\n");
    printf("|                                            |\n");
    printf("|                                            |\n");
    printf("|>------------------------------------------<|\n");
    gotoxy(15,4);
    gets(id);
    fflush(stdin);
    gotoxy(15,6);
    gets(pass);
    fflush(stdin);
    if(strcmpi(id,"user")==0 && strcmpi(pass,"user123")==0)
    {
        textcolor(GREEN);
        gotoxy(15,9);
        printf("Login Autenticado\n\n");
        x=1;
        Sleep(500);
    }
    else if(strcmpi(id,"admin")==0 && strcmpi(pass,"admin123")==0)
    {
        textcolor(GREEN);
        gotoxy(15,9);
        printf("Login Autenticado\n\n");
        x=1;
        Sleep(500);
    }
    else
    {
        textcolor(RED);
        gotoxy(15,9);
        printf("Login Falhado\n\n");
        x=0;
        Sleep(500);
    }
    system("CLS");
    }while(x==0);
    do{
    system("cls");
    printf("|>------------------------------------------<|\n");
    printf("|               Ze Da Casa                   |\n");
    printf("|--------------------------------------------|\n");
    printf("|>--<      1-Casas                       >--<|\n");
    printf("|--------------------------------------------|\n");
    printf("|>--<      2-Vendas                      >--<|\n");
    printf("|--------------------------------------------|\n");
    printf("|>--<      3-Economia                    >--<|\n");
    printf("|--------------------------------------------|\n");
    printf("|>--<      4-Setings                     >--<|\n");
    printf("|--------------------------------------------|\n");
    printf("|>--<      5-Sair                        >--<|\n");
    printf("| |-----------------------------------------<|\n");
    gotoxy(2,13);
    scanf("%i",&op);
    switch(op)
    {

     case 1:
             system("CLS");
             printf("|>-----------------------------<|\n");
             printf("|          CASAS                |\n");
             printf("|-------------------------------|\n");
             printf("|>--<  1-Adicionar casa     >--<|\n");
             printf("|-------------------------------|\n");
             printf("|>--<  2-Editar/remover casa>--<|\n");
             printf("|-------------------------------|\n");
             printf("|>--<  3-voltar             >--<|\n");
             printf("| |-----------------------------|\n");
             gotoxy(2,9);
             scanf("%i",&p);
             switch(p)
             {
              case 1:system("cls");
                     printf("|>-----------------------------------------<|\n");
                     printf("|                Adicionar CASA             |\n");
                     printf("|-------------------------------------------|\n");
                     printf("|>--< Tipo de casa      -               >--<|\n");
                     printf("|>--<(apartamento ou vivenda)           >--<|\n");
                     printf("|-------------------------------------------|\n");
                     printf("|>--<   Dimensoes       -         |m^2  >--<|\n");
                     printf("|-------------------------------------------|\n");
                     printf("|>--<   tipologia       -T-             >--<|\n");
                     printf("|-------------------------------------------|\n");
                     printf("|>--< Casas de banho    -               >--<|\n");
                     printf("|-------------------------------------------|\n");
                     printf("|>--< ano de construçao -               >--<|\n");
                     printf("|>-----------------------------------------<|\n");
                     gotoxy(27,4);
                     fflush(stdin);
                     gets(c.tdc);
                     fflush(stdin);
                     gotoxy(27,7);
                     scanf("%i",&c.d);
                     fflush(stdin);
                     gotoxy(29,9);
                     scanf("%i",&c.t);
                     fflush(stdin);
                     gotoxy(27,11);
                     scanf("%i",&c.cdb);
                     fflush(stdin);
                     gotoxy(27,13);
                     scanf("%i",&c.adc);
                     fflush(stdin);
                     FILE*ficheiro;
                     ficheiro=fopen("stockcasa.txt","a");
                     fprintf(ficheiro,"Tipo de casa:%s\n",c.tdc);
                     fprintf(ficheiro,"Dimensoes:%i\n",c.d);
                     fprintf(ficheiro,"tipologia:%i\n",c.t);
                     fprintf(ficheiro,"Casas de banho:%i\n",c.cdb);
                     fprintf(ficheiro,"ano de construçao:%i\n\n\n",c.adc);
                     fclose(ficheiro);
                     break;
              case 2:system("stockcasa.txt");break;

       }

      case 2:printf("a");  break;
      case 3:printf("a");  break;

      case 4: system("CLS");
              printf("|>-----------------------------<|\n");
              printf("|          Settings             |\n");
              printf("|-------------------------------|\n");
              printf("|>--<  1-Background color   >--<|\n");
              printf("|-------------------------------|\n");
              printf("|>--<  2-Text color         >--<|\n");
              printf("|-------------------------------|\n");
              printf("|>--<  3-Voltar             >--<|\n");
              printf("| |----------------------------<|\n");
              gotoxy(2,9);
              scanf("%i",&o);
              switch(o)
              {
              case 1:system("cls");
              printf("|>-------------------------------------<|\n");
              printf("|          Colors                       |\n");
              printf("|---------------------------------------|\n");
              printf("|>--< 1|BLACK | 4|CYAN   | 7|BROWN  >--<|\n");
              printf("|---------------------------------------|\n");
              printf("|>--< 2|BLUE  | 5|RED    | 8|WHITE  >--<|\n");
              printf("|---------------------------------------|\n");
              printf("|>--< 3|GREEN | 6|PURPLE | 9|VOLTAR >--<|\n");
              printf("| |------------------------------------<|\n");
              gotoxy(2,9);
              scanf("%i",&bg);
              switch(bg)
              {
               case 1:system(1F);
                      textcolor(WHITE);
                      break;
               case 2:system(BLUE);
                      textcolor(WHITE);
                      break;
               case 3:system(GREEN);
                      textcolor(WHITE);
                      break;
               case 4:system(CYAN);
                      textcolor(WHITE);
                      break;
               case 5:system(RED);
                      textcolor(WHITE);
                      break;
               case 6:system(MAGENTA);
                      textcolor(WHITE);
                      break;
               case 7:system(BROWN);
                      textcolor(WHITE);
                      break;
               case 8:system(WHITE);
                      textcolor(WHITE);
                      break;
              }
              break;

              switch(d)
              case 2:system("cls");
              printf("|>-------------------------------------<|\n");
              printf("|          Colors                       |\n");
              printf("|---------------------------------------|\n");
              printf("|>--< 1|BLACK | 4|CYAN   | 7|BROWN  >--<|\n");
              printf("|---------------------------------------|\n");
              printf("|>--< 2|BLUE  | 5|RED    | 8|WHITE  >--<|\n");
              printf("|---------------------------------------|\n");
              printf("|>--< 3|GREEN | 6|PURPLE | 9|VOLTAR >--<|\n");
              printf("| |------------------------------------<|\n");
              gotoxy(2,9);
              scanf("%i",&d);
              switch(d)
              {
               case 1:textcolor(BLACK);
                      break;
               case 2:textcolor(BLUE);
                      break;
               case 3:textcolor(GREEN);
                      break;
               case 4:textcolor(CYAN);
                      break;
               case 5:textcolor(RED);
                      break;
               case 6:textcolor(MAGENTA);
                      break;
               case 7:textcolor(BROWN);
                      break;
               case 8:textcolor(WHITE);
                      break;
              }
               break;
              }
               break;





    case 5:system("CLS");
           textcolor(GREEN);
           printf("                                  ___     ___\n");
           printf("                                 (   )   (   )\n");
           printf("    .--.     .--.     .--.     .-.| |     | |.-.    ___  ___    .--.\n");
           printf("   /    \\   /    \\   /    \\   /    \\|     | /   \\  (   )(   )  /    \\\n");
           printf("  ;  ,-. ' |  .-. ; |  .-. ; |  .-. |     |  .-. |  | |  | |  |  .-. ;\n ");
           printf(" | |  | | | |  | | | |  | | | |  | |     | |  | |  | |  | |  |  | | |\n");
           printf("  | |  | | | |  | | | |  | | | |  | |     | |  | |  | '  | |  |  |/  |\n");
           printf("  | |  | | | |  | | | |  | | | |  | |     | |  | |  '  `-' |  |  ' _.'\n");
           printf("  | '  | | | '  | | | '  | | | '  | |     | '  | |   `.__. |  |  .'.-.\n");
           printf("  '  `-' | '  `-' / '  `-' / ' `-'  /     ' `-' ;    ___ | |  '  `-' /\n");
           printf("  ` .__. |  `.__.'   `.__.'   `.__,'       `.__.    (   )' |   `.__.'\n");
           printf("   ( `-' ;                                           ; `-' '\n");
           printf("    `.__.                                             .__.'\n");
           Sleep(300);
           system("CLS");
           textcolor(9);
           printf("                                  ___     ___\n");
           printf("                                 (   )   (   )\n");
           printf("    .--.     .--.     .--.     .-.| |     | |.-.    ___  ___    .--.\n");
           printf("   /    \\   /    \\   /    \\   /    \\|     | /   \\  (   )(   )  /    \\\n");
           printf("  ;  ,-. ' |  .-. ; |  .-. ; |  .-. |     |  .-. |  | |  | |  |  .-. ;\n ");
           printf(" | |  | | | |  | | | |  | | | |  | |     | |  | |  | |  | |  |  | | |\n");
           printf("  | |  | | | |  | | | |  | | | |  | |     | |  | |  | '  | |  |  |/  |\n");
           printf("  | |  | | | |  | | | |  | | | |  | |     | |  | |  '  `-' |  |  ' _.'\n");
           printf("  | '  | | | '  | | | '  | | | '  | |     | '  | |   `.__. |  |  .'.-.\n");
           printf("  '  `-' | '  `-' / '  `-' / ' `-'  /     ' `-' ;    ___ | |  '  `-' /\n");
           printf("  ` .__. |  `.__.'   `.__.'   `.__,'       `.__.    (   )' |   `.__.'\n");
           printf("   ( `-' ;                                           ; `-' '\n");
           printf("    `.__.                                             .__.'\n");
           Sleep(300);
           system("CLS");
           textcolor(GREEN);
           printf("                                  ___     ___\n");
           printf("                                 (   )   (   )\n");
           printf("    .--.     .--.     .--.     .-.| |     | |.-.    ___  ___    .--.\n");
           printf("   /    \\   /    \\   /    \\   /    \\|     | /   \\  (   )(   )  /    \\\n");
           printf("  ;  ,-. ' |  .-. ; |  .-. ; |  .-. |     |  .-. |  | |  | |  |  .-. ;\n ");
           printf(" | |  | | | |  | | | |  | | | |  | |     | |  | |  | |  | |  |  | | |\n");
           printf("  | |  | | | |  | | | |  | | | |  | |     | |  | |  | '  | |  |  |/  |\n");
           printf("  | |  | | | |  | | | |  | | | |  | |     | |  | |  '  `-' |  |  ' _.'\n");
           printf("  | '  | | | '  | | | '  | | | '  | |     | '  | |   `.__. |  |  .'.-.\n");
           printf("  '  `-' | '  `-' / '  `-' / ' `-'  /     ' `-' ;    ___ | |  '  `-' /\n");
           printf("  ` .__. |  `.__.'   `.__.'   `.__,'       `.__.    (   )' |   `.__.'\n");
           printf("   ( `-' ;                                           ; `-' '\n");
           printf("    `.__.                                             .__.'\n");
           Sleep(300);
           system("CLS");
           textcolor(9);
           printf("                                  ___     ___\n");
           printf("                                 (   )   (   )\n");
           printf("    .--.     .--.     .--.     .-.| |     | |.-.    ___  ___    .--.\n");
           printf("   /    \\   /    \\   /    \\   /    \\|     | /   \\  (   )(   )  /    \\\n");
           printf("  ;  ,-. ' |  .-. ; |  .-. ; |  .-. |     |  .-. |  | |  | |  |  .-. ;\n ");
           printf(" | |  | | | |  | | | |  | | | |  | |     | |  | |  | |  | |  |  | | |\n");
           printf("  | |  | | | |  | | | |  | | | |  | |     | |  | |  | '  | |  |  |/  |\n");
           printf("  | |  | | | |  | | | |  | | | |  | |     | |  | |  '  `-' |  |  ' _.'\n");
           printf("  | '  | | | '  | | | '  | | | '  | |     | '  | |   `.__. |  |  .'.-.\n");
           printf("  '  `-' | '  `-' / '  `-' / ' `-'  /     ' `-' ;    ___ | |  '  `-' /\n");
           printf("  ` .__. |  `.__.'   `.__.'   `.__,'       `.__.    (   )' |   `.__.'\n");
           printf("   ( `-' ;                                           ; `-' '\n");
           printf("    `.__.                                             .__.'\n");
           return 0;
           break;
    }
     system("cls");
     system("pause");
    }while(op!=5);

   return 0;
  }
