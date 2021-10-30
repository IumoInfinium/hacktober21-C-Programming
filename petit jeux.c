#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//declaration 
	int h,m,e,d,n,i,x,trouv=0,v=0,uneautrepartie=1 ;
	char dificul[25] ;
	char medium[7]= "medium";
	char hard[5]="hard";
	char easy[5]="easy";
	
	//action
	
	do{
	
	srand(time(NULL));    // This is to constantly change the value of d
	d= rand() %101 ;
	
	printf ("                                       Welcome to the guessing game\n");
	
	
	printf("                                      choose the difficulty (hard/medium/easy)\n");
	
	do{
		
	scanf("%s",dificul);
	

	

	h=-1;  m=-1; e=-1;
	 h= strcmp(dificul,hard);
	 m= strcmp(dificul,medium);
	 e= strcmp(dificul,easy);
	 
	
	
	if(h==0){
		n=5;v=1;
}
		else if(m==0){
			n=8;v=1;
	}
			else if(e==0){
				
				n=10;v=1;
			}
			
		
		if(v==1){
	
		printf("you have %d attempts ",n);
		
	printf("try to guess the value hidden in the interval [0,100]\n\n");
	
	i= 1;  
	

	while(i<=n && trouv == 0){
		
		
		
		
		printf("your %d tattempt\n",i);
		
		scanf("%d",&x);
		
		i++;
		
		if(x==d){
			trouv=1;
			printf("you win\n") ;	
		}
		
		else if (x<d){
			
			printf("too smal\n");
		}
		
		else if(x>d){
			
			printf("too hight\n");
		}
	    if(i==n+1 && trouv==0 ){
	    	printf("lost! \the hidden number was %d\n",d);
		}
	}
	
	

	
	
		}
		else if (v==0){
			printf ("enter a valid difficulty please\n");
		}
	
	
	
		}while(v==0);
		
		do{
		
		printf("do you want another game? 1 for yes 0 for no\n");
		
		scanf("%d",&uneautrepartie);
		
		}while(uneautrepartie!=0 && uneautrepartie !=1);
		
		
		 v=0;trouv=0;
		}while(uneautrepartie==1);
	
	return 0;
	
}
