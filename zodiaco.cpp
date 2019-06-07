#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>


int main(){

    int num;
    int i;
    char escreva[12][100];
    char signos[12][28]={"CAPRICORNIO - 22/12 a 19/01", "AQUARIO - 20/01 a 18/02", "PEIXES - 19/02 a 20/03", "ARIES - 21/03 a 19/04", "TOURO - 20/04 a 20/05", "GEMEOS - 21/05 a 21/06", "CANCER - 22/06 a 22/07", "LEAO - 23/07 a 22/08", "VIRGEM - 23/08 a 22/09", "LIBRA - 23/09 a 22/10", "ESCORPIAO - 23/10 a 21/11", "SAGITARIO - 22/11 a 21/12"};
    int num_signos[]={11,12,13,14,15,16,17,18,19,20,21,22};


    printf("\n");
    printf("-------------- SIGNOS DO ZODIACO -------------- \n");
    printf("\n");
    printf("\n");
    printf(" 0 - Cria arquivo com frases motivacionais\n");
    printf(" 1 - Saber qual eh o signo \n");
    printf(" 2 - Frase motivacional do signo \n");
    printf(" 3 - Sair \n");
    printf("\n");
    printf("\n");
    printf("   *** Entre com uma das opcoes acima: ");
    scanf("%d", &num);

    // enquanto o usuário não digitar 0,1,2 ou 3 o sistema continuará exibindo o menu

    while (num != 0 && num != 1 && num != 2 && num != 3){

        //limpa a tela
        system("cls");

        printf("\n");
        printf("-------------- SIGNOS DO ZODIACO -------------- \n");
        printf("\n");
        printf("\n");
        printf("0 - Cria arquivo com frases motivacionais\n");
        printf("1 - Saber qual eh o signo \n");
        printf("2 - Frase motivacional do signo \n");
        printf("3 - Sair \n");
        printf("\n");
        printf("\n");
        printf("   *** Entre com uma das opcoes acima: ");
        scanf("%d", &num);
    }
	//limpa a tela
        system("cls");

    while (num == 1){

        saber_signo:

        system("cls");

        int dia_mes, dia_dia, mes_mes;

        printf("                     *** INFORMA O SIGNO *** \n");
        printf("\n");
        printf("\n");
        printf("     Informe o dia e o mes que voce nasceu (DDMM): ");
        scanf("%d", &mes_mes);

        dia_dia = mes_mes / 100;
        dia_mes = mes_mes % 100;

        printf("\n");
        printf("\n");


        if (((dia_mes==12) && (dia_dia>=22)) || ((dia_mes==1) && (dia_dia<=20))){
            printf(" ==> Voce e do signo de *** %s", signos[0]);//capricornio
        }

        if (((dia_mes==1) && (dia_dia>=21)) || ((dia_mes==2) && (dia_dia<=19))){
            printf(" ==> Voce e do signo de *** %s", signos[1]); //aquario
        }

        if (((dia_mes==2) && (dia_dia>=20 && dia_dia<=29)) || ((dia_mes==3) && (dia_dia <= 20))){
            printf(" ==> Voce e do signo de *** %s", signos[2]); //peixes
        }

        if (((dia_mes == 3) && (dia_dia>=21)) || ((dia_mes==4) && (dia_dia <= 20))){
            printf(" ==> Voce e do signo de *** %s", signos[3]);//aries
        }

        if (((dia_mes==4) && (dia_dia>=21 && dia_dia<=30)) || ((dia_mes==5) && (dia_dia<=20))){
            printf(" ==> Voce e do signo de *** %s", signos[4]); //touro
        }

        if (((dia_mes==5) && (dia_dia>=21)) || ((dia_mes==6) && (dia_dia<=20))){
            printf(" ==> Voce e do signo de *** %s", signos[5]); //gemeos
        }

        if (((dia_mes==6) && (dia_dia>=21 && dia_dia<=30)) || ((dia_mes==7) && (dia_dia<=21))){
            printf(" ==> Voce e do signo de *** %s", signos[6]); //cancer
        }

        if (((dia_mes==7) && (dia_dia>=22)) || ((dia_mes==8) && (dia_dia<=22))){
            printf(" ==> Voce e do signo de *** %s", signos[7]); //leão
        }

        if (((dia_mes==8) && (dia_dia>=23)) || ((dia_mes==9) && (dia_dia<=22))){
            printf(" ==> Voce e do signo de *** %s", signos[8]); //virgem
        }

        if (((dia_mes==9) && (dia_dia>=23 && dia_dia<=30)) || ((dia_mes==10) && (dia_dia<=22))){
                printf(" ==> Voce e do signo de *** %s", signos[9]); //libra
        }

        if (((dia_mes==10) && (dia_dia>=23)) || ((dia_mes==11) && (dia_dia<=21))){
            printf(" ==> Voce e do signo de *** %s", signos[10]); //escorpião
        }

        if (((dia_mes==11) && (dia_dia>=22 && dia_dia<=30)) || ((dia_mes==12) && (dia_dia<=21))){
            printf(" ==> Voce e do signo de *** %s", signos[11]); //sagitário
        }

        printf("\n");
        printf("\n");

        printf("\n");
        printf("-------------- SIGNOS DO ZODIACO -------------- \n");
        printf("\n");
        printf("\n");
        printf("0 - Cria arquivo com frases motivacionais\n");
        printf("1 - Saber qual eh o signo \n");
        printf("2 - Frase motivacional do signo \n");
        printf("3 - Sair \n");
        printf("\n");
        printf("\n");
        printf("   *** Entre com uma das opcoes acima: ");
        scanf("%d", &num);

        if(num==0){
            goto criar_frase;
        }

        if (num==1){
            goto saber_signo;
        }

        if (num==2){
            goto frase;

        }

       if (num==3){
        goto encerrar;
       }

    }

///////////////////////////////

    if (num == 3){

        encerrar:

        system("cls");
        printf("   *** Saindo do programa..!");
        printf("\n");
        exit(0);

    }

//////////////////////////////


    while (num == 0){

            criar_frase:

            FILE *arquivo;

            // w para criar arquivo
            // se o arquivo já existir, o w faz com que seja criado um novo
            arquivo = fopen("horoscopo.txt","w");
            printf("\n");

            int h=-1;

            while (h <= 11) {

            system("cls");

            printf("\n");
            printf("         *** CRIA ARQUIVO COM FRASES MOTIVACIONAIS *** \n");
            printf("\n");
            printf("\n");

            printf("    Entre com a frase motivacional para o signo de %s", signos[h]);
            printf("\n");
            printf("  [-------------------- Tamanho maximo de 100 caracteres --------------------]\n");

            printf(" ");
            fgets(escreva[h], sizeof(escreva[h]),stdin) != NULL;

            fprintf(arquivo, "%d%s\n", num_signos[h], escreva[h]);
            setbuf(stdin, NULL);

            h++;

            printf("\n");
            printf("\n");
            printf("\n");

            }

            fclose(arquivo);

            system("cls");

            printf("\n");
            printf("-------------- SIGNOS DO ZODIACO -------------- \n");
            printf("\n");
            printf("\n");
            printf(" 0 - Cria arquivo com frases motivacionais\n");
            printf(" 1 - Saber qual eh o signo \n");
            printf(" 2 - Frase motivacional do signo \n");
            printf(" 3 - Sair \n");
            printf("\n");
            printf("\n");
            printf("   *** Entre com uma das opcoes acima: ");
            scanf("%d", &num);

            if(num==0){
            goto criar_frase;
            }

            if (num==1){
                goto saber_signo;
            }

            if (num==2){
                goto frase;
            }

           if (num==3){
            goto encerrar;
           }

        }


////////////////////////

    while (num == 2){

        frase:

        // limpa tela
        system("cls");


        int num_signo;
        char escreva[100];
        int f=0;


        FILE *arquivo;
        arquivo = fopen("horoscopo.txt","r");


        printf("                 *** FRASE MOTIVACIONAL DO SIGNO *** \n");
        printf("\n");
        printf("   *-----------------------------------------------------------------------* \n");
        printf("   !                          Signos do Zodiaco                            ! \n");
        printf("   !                                                                       ! \n");
        printf("   !   (1) Capricornio     (4) Aries      (7) Cancer     (10) Libra        ! \n");
        printf("   !   (2) Aquario         (5) Touro      (8) Leao       (11) Escorpiao    ! \n");
        printf("   !   (3) Peixes          (6) Gemeos     (9) Virgem     (12) Sargitario   ! \n");
        printf("   !                                                                       ! \n");
        printf("   *-----------------------------------------------------------------------* \n");
        printf("\n");
        printf("\n");

        printf("Digite o numero que representa o seu signo: ");
        scanf("%d", &num_signo);

        printf("\n");
        int j=0;

        switch (num_signo){

        case 1:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==2){

                    for (int f=2; f < strlen(escreva); f++){

                        printf("%c", escreva[f]);
                    }
                }
                j++;
            }

        case 2:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==4){

                    for (int i=2; i < strlen(escreva); i++){

                        printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        case 3:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==6){

                    for (int i=2; i < strlen(escreva); i++){

                        printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        case 4:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==8){

                    for (int i=2; i < strlen(escreva); i++){

                        printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        case 5:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==10){

                    for (int i=2; i < strlen(escreva); i++){

                        printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        case 6:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==12){

                    for (int i=2; i < strlen(escreva); i++){

                        printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        case 7:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==14){

                    for (int i=2; i < strlen(escreva); i++){
                      printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        case 8:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==16){

                    for (int i=2; i < strlen(escreva); i++){
                      printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        case 9:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==18){

                    for (int i=2; i < strlen(escreva); i++){
                      printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        case 10:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==20){

                    for (int i=2; i < strlen(escreva); i++){
                      printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        case 11:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==22){

                    for (int i=2; i < strlen(escreva); i++){
                      printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        case 12:
            while (fgets(escreva, 100, arquivo) != NULL){
                if (j==24){

                    for (int i=2; i < strlen(escreva); i++){
                      printf("%c", escreva[i]);
                    }
                }
                j++;
            }

        default:
            printf("");
        }
        //fechando o arquivo
        fclose(arquivo);

        printf("\n");
        printf("-------------- SIGNOS DO ZODIACO -------------- \n");
        printf("\n");
        printf("\n");
        printf(" 0 - Cria arquivo com frases motivacionais\n");
        printf(" 1 - Saber qual eh o signo \n");
        printf(" 2 - Frase motivacional do signo \n");
        printf(" 3 - Sair \n");
        printf("\n");
        printf("\n");
        printf("   *** Entre com uma das opcoes acima: ");
        scanf("%d", &num);

        if(num==0){
            goto criar_frase;
        }

        if (num==1){
            goto saber_signo;
        }

        if (num==2){
            goto frase;
        }

       if (num==3){
        goto encerrar;
       }

    }
    return 0;
}

