#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{ 
    	
   int jogador=1, joga=0; 
	char a, b, c, d, e, f, g, h, i;
	char  jogada;
    a='a';
	b='b';
	c='c';
	d='d';
	e='e';
	f='f';
	g='g';
	h='h';
	i='i';
	  printf("jogador 1 = O \n");
     printf("jogador 2 = X  \n");
     
	while(joga<=9)
     {
    
	printf("%c | %c | %c \n",a,b,c);
	printf(" ------------- \n");
	printf("%c | %c | %c \n",d,e,f);
	printf(" ------------- \n");
    printf("%c | %c | %c \n",g,h,i);     
         	         
    printf(" vez de que 1 ou 2 \n");     	         
	scanf("%i",&jogador);
	joga++;
  
   system ("cls");
	
	
	
    
	if(jogador==1)
	{
                  printf("jogador 1 faca uma jogada: \n");
                  scanf("%c",&jogada);

        	switch(jogada) {
        
             case 'a':
             a = 'O';
        	 break;
        							
        	case 'b':
        	b = 'O';
        	break;
        
        	case 'c':
        	c = 'O';	
        	break;
        
        	case 'd':
        	d = 'O';	
        	break;
        
        	case 'e':
        	e = 'O';	
        	break;
        				
        	case 'f':
        	f = 'O';	
        	break;
        
        	case 'g':
        	g = 'O';	
        	break;
        	case 'h':
        	h = 'O';	
        	break;
        	case 'i':
        	i = 'O';	
        	break;
        	}
        }
 
 
 
		if(jogador==2)
	{
        printf("jogador 2 faca uma jogada: \n");
        scanf("%c",&jogada);

	switch(jogada) {

     case 'a':
     a = 'X';
	 break;
							
	case 'b':
	b = 'X';
	break;

	case 'c':
	c = 'X';	
	break;

	case 'd':
	d = 'X';	
	break;

	case 'e':
	e = 'X';	
	break;
				
	case 'f':
	f = 'X';	
	break;

	case 'g':
	g = 'X';	
	break;
	case 'h':
	h = 'X';	
	break;
	case 'i':
	i = 'X';	
	break;
	}
	
}

	
         if((a == 'O' && b == 'O' && c == 'O') || (d == 'O' && e == 'O' && f == 'O') || (g == 'O' && h == 'O' && i == 'O') || (a == 'O' && e == 'O' && i == 'O') || (c == 'O' && e == 'O' && g == 'O') || (a == 'O' && d == 'O' && g == 'O') || (b == 'O' && e == 'O' && h == 'O') || (c == 'O' && f == 'O' && i == 'O'))
         {
	   	printf("\nJogador 01 venceu!\n"); 
         }
         else
	      if((a == 'X' && b == 'X' && c == 'X') || (d == 'X' && e == 'X' && f == 'X') || (g == 'X' && h == 'X' && i == 'X') || (a == 'X' && e == 'X' && i == 'X') || (c == 'X' && e == 'X' && g == 'X') || (a == 'X' && d == 'X' && g == 'X') || (b == 'X' && e == 'X' && h == 'X') || (c == 'X' && f == 'X' && i == 'X'))
         {
     	printf("\nJogador 02 venceu!\n"); 
        }
         else if (a!='a' && b!='b' && c!='c' && d!='d' && e!='e' && f!='f' && g!='g' && h!='h' && i!='i') 
         {
              printf(" deu velha cuzao \n");
         }
        
}
    return 0;
    
}
