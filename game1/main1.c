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
           
           	
           
            printf("\nS A Y I Y I      B � L\n\n* Oyun kurallar�n� okumak i�in k ye bas�n�z.\n"); q: printf("* :) Ba�lamak i�in b ye bas�n�z :)\n");
            scanf("%c",&v);
			if(v =='k'){
			printf("///---Oyun Kurallar�---///\n- 1 ile 100 aras�ndaki say�y� tahmin etmeye �al���yoruz\n- 10 tane deneme hakk�n�z vard�r\n- Girdi�iniz say�ya g�re oyun ipu�lar� verecektir ve bu ipu�lar� do�rultusunda\n  say�y� tahmin etmeye �al��acaks�n�z\n\n\n");
			scanf("%c",&x);	goto q ;
		}

				
	s:
		
		srand(time(NULL));
        int a, c=10 ;
        char karar;

        int b = 1 + rand() % 100 ;
        /*printf("%d\n",b);*/
			
            printf("\n\nSTART\n\nKalan Hakk�n�z : %d\n",c);    printf("BA�LA: ");
            scanf("%d",&a);

        while (c!=1 && b!=a ){

            c-- ;

            if(a<b){

        printf("Kalan Hakk�n�z : %d   ",c)    ; printf("Yukar� git   -> ");               scanf("%d",&a);     }



            else if(a>b){

        printf("Kalan Hakk�n�z : %d   ",c)    ;    printf("A�a�� Git  -> ");             scanf("%d",&a);    }



        }
    			int d=1000 ;
   				int e = (c-1 )* d ;
                if(a==b){

            printf("Kalan Hakk�n�z : %d   ",c-1);  printf("%d PO�NT   ",e);     printf("GREAT !!!"); }

                else if(c==1){

           	printf("Kalan Hakk�n�z : %d   ",c-1);	printf("%d PO�NT   ",e);    printf("YOU LOST !!!"); }

			printf("\n\nOyunu Kapatmak i�in 'E' Tu�una \nOyuna Devam Etmek i�in 'D' Tu�una Bas�n�z \n--> "); scanf(" %c",&karar);
			
			if(karar == 'd' || karar == 'D')
			goto s ;
			
			if(karar == 'e' || karar == 'E' );
			printf("��k�� Yap�ld�");
			
			return 0 ;
				
}

