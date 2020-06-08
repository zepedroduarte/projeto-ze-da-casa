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
    struct venda
    {
     char nome[30];
     char email[40];
     char morada[40];
     int nif;
     int tel;
     char tdcs[20];
     int dm;
     int cb;
     int tip;
     int adct;
    };
    struct venda v;
    int  x,op,a,o,d,b,p,bg,f,matriz[10][2],valor,nprazos,i,nmeses,j;
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
    printf("|>--<      3-Simulador Credito           >--<|\n");
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
           };break;

        case 2:system("CLS");
             printf("|>------------------------------<|\n");
             printf("|          VENDAS                |\n");
             printf("|--------------------------------|\n");
             printf("|>--<  1-Adicionar venda     >--<|\n");
             printf("|--------------------------------|\n");
             printf("|>--<  2-Editar/remover venda>--<|\n");
             printf("|--------------------------------|\n");
             printf("|>--<  3-voltar              >--<|\n");
             printf("| |------------------------------|\n");
             gotoxy(2,9);
             scanf("%i",&f);
              if(f==1)
                {
                 system("cls");
                     printf("|>-----------------------------------------------------<|\n");
                     printf("|            Adicionar vendas|cliente                   |\n");
                     printf("|>-----------------------------------------------------<|\n");
                     printf("|>--<   Nome         -                              >--<|\n");
                     printf("|-------------------------------------------------------|\n");
                     printf("|>--<   Telemovel    -                              >--<|\n");
                     printf("|>-----------------------------------------------------<|\n");
                     printf("|>--<   Email        -                              >--<|\n");
                     printf("|-------------------------------------------------------|\n");
                     printf("|>--<   Morada       -                              >--<|\n");
                     printf("|>-----------------------------------------------------<|\n");
                     printf("|>--<   NIF          -                              >--<|\n");
                     printf("| |----------------------------------------------------<|\n");
                     gotoxy(25,4);
                     fflush(stdin);
                     gets(v.nome);
                     gotoxy(25,6);
                     fflush(stdin);
                     scanf("%i",&v.tel);
                     gotoxy(25,8);
                     fflush(stdin);
                     gets(v.email);
                     gotoxy(25,10);
                     fflush(stdin);
                     gets(v.morada);
                     gotoxy(25,12);
                     fflush(stdin);
                     scanf("%i",&v.nif);
                     system("CLS");
                     printf("|>-----------------------------------------<|\n");
                     printf("|            Adicionar Venda|casa           |\n");
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
                     gets(v.tdcs);
                     fflush(stdin);
                     gotoxy(27,7);
                     scanf("%i",&v.dm);
                     fflush(stdin);
                     gotoxy(29,9);
                     scanf("%i",&v.tip);
                     fflush(stdin);
                     gotoxy(27,11);
                     scanf("%i",&v.cb);
                     fflush(stdin);
                     gotoxy(27,13);
                     scanf("%i",&v.adct);
                     fflush(stdin);
                     FILE*fiche;
                     fiche=fopen("stockvenda.txt","a");
                     fprintf(fiche,"Nome:%s\n",v.nome);
                     fprintf(fiche,"Telemovel:%i\n",v.tel);
                     fprintf(fiche,"email:%s\n",v.email);
                     fprintf(fiche,"morada:%s\n",v.morada);
                     fprintf(fiche,"Nif:%i\n\n\n",v.nif);
                     fprintf(fiche,"Tipo de casa:%s\n",v.tdcs);
                     fprintf(fiche,"Dimensoes:%i\n",v.dm);
                     fprintf(fiche,"tipologia:%i\n",v.tip);
                     fprintf(fiche,"Casas de banho:%i\n",v.cb);
                     fprintf(fiche,"ano de construçao:%i\n\n\n",v.adct);
                     fclose(fiche);
                }
              else if(f==2)
              {
               system("stockvenda.txt");
              };break;


      case 3:
    system("CLS");

    printf("Digite o valor da casa:\n");
    scanf("%i",&valor);

    printf("Digite quantos prazos deseja comparar:\n");
    scanf("%i",&nprazos);

    for(i=0;i<nprazos;i++)
    {
        system("CLS");
        printf("|>--------------------<|\n");
        printf("|>     Prazo %i        <|\n",i+1);
        printf("|>--------------------<|\n");
        printf("|>            |> Anos <|\n");
        printf("|>--------------------<|\n");
        gotoxy(4,4);
        scanf("%i",&matriz[i][0]);
    }

    for(i=0;i<nprazos;i++)
    {
        nmeses = matriz[i][0] * 12;
        matriz[i][1] = ((valor * 0.02) + valor) / nmeses; // 0.02 equivale a uma taxa de juros de 2% do valor da casa
    }

    system("CLS");
    printf("|>--------------------------------------------<|\n");
    printf("|>  Valor <||>     Prazo    <||> Mensalidade  <|\n");
    printf("|>--------------------------------------------<|\n");

    for(i=0;i<nprazos;i++)
    {
        printf("|>%8i<|",valor);

        for(j=0;j<2;j++)
        {
        printf("|>%14i<|",matriz[i][j]);
        }
        printf("\n");

    }
    printf("|>--------------------------------------------<|\n");

    system("PAUSE");break;


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
              printf("|>--< 1|BLACK | 4|CYAN   | 7|Gray   >--<|\n");
              printf("|---------------------------------------|\n");
              printf("|>--< 2|BLUE  | 5|RED    | 8|WHITE  >--<|\n");
              printf("|---------------------------------------|\n");
              printf("|>--< 3|GREEN | 6|PURPLE | 9|VOLTAR >--<|\n");
              printf("| |------------------------------------<|\n");
              gotoxy(2,9);
              scanf("%i",&bg);
              switch(bg)
              {
               case 1:system("color 0F");
                      break;
               case 2:system("color 1F");
                      break;
               case 3:system("color 2F");
                      break;
               case 4:system("color 3F");
                      break;
               case 5:system("color 4F");
                      break;
               case 6:system("color 5F");
                      break;
               case 7:system("color 8F");
                      break;
               case 8:system("color 7F");
                      textcolor(BLACK);
                      break;

              }
              break;
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
           system("color 0F");
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
