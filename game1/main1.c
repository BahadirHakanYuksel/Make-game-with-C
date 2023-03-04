#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include<conio.h>
#include <time.h>

        int main (){
        	
            setlocale(LC_ALL, "Turkish");
          
           	char v,x ;
           
           	
           
            printf("\nS A Y I Y I      B Ý L\n\n* Oyun kurallarýný okumak için k ye basýnýz.\n"); q: printf("* :) Baþlamak için b ye basýnýz :)\n");
            scanf("%c",&v);
			if(v =='k'){
			printf("///---Oyun Kurallarý---///\n- 1 ile 100 arasýndaki sayýyý tahmin etmeye çalýþýyoruz\n- 10 tane deneme hakkýnýz vardýr\n- Girdiðiniz sayýya göre oyun ipuçlarý verecektir ve bu ipuçlarý doðrultusunda\n  sayýyý tahmin etmeye çalýþacaksýnýz\n\n\n");
			scanf("%c",&x);	goto q ;
		}

				
	s:
		
		srand(time(NULL));
        int a, c=10 ;
        char karar;

        int b = 1 + rand() % 100 ;
        /*printf("%d\n",b);*/
			
            printf("\n\nSTART\n\nKalan Hakkýnýz : %d\n",c);    printf("BAÞLA: ");
            scanf("%d",&a);

        while (c!=1 && b!=a ){

            c-- ;

            if(a<b){

        printf("Kalan Hakkýnýz : %d   ",c)    ; printf("Yukarý git   -> ");               scanf("%d",&a);     }



            else if(a>b){

        printf("Kalan Hakkýnýz : %d   ",c)    ;    printf("Aþaðý Git  -> ");             scanf("%d",&a);    }



        }
    			int d=1000 ;
   				int e = (c-1 )* d ;
                if(a==b){

            printf("Kalan Hakkýnýz : %d   ",c-1);  printf("%d POÝNT   ",e);     printf("GREAT !!!"); }

                else if(c==1){

           	printf("Kalan Hakkýnýz : %d   ",c-1);	printf("%d POÝNT   ",e);    printf("YOU LOST !!!"); }

			printf("\n\nOyunu Kapatmak için 'E' Tuþuna \nOyuna Devam Etmek için 'D' Tuþuna Basýnýz \n--> "); scanf(" %c",&karar);
			
			if(karar == 'd' || karar == 'D')
			goto s ;
			
			if(karar == 'e' || karar == 'E' );
			printf("Çýkýþ Yapýldý");
			
			return 0 ;
				
}

