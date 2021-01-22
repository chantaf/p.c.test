#include <stdio.h>
#include <stdlib.h>




//////// binaire to int
/*int BinaireToInt(int binaire, int nombre) {

   int result;
   int t[4] = {1,0,1,1};
	
	
	for(int i=0;i<3;i--){
		
		result += t[i] * pow(2,i);
	}
	printf("%d",result);
   
   
   return 0; 
}


int n,i;
 int entier_binaire(int n){

    return 0;
}*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	/*int sous(int a,int b){
		 int s;
		 s=a-b;
		
		return s;*/
		
	//CONVERTER dec binare	
/*	int tab[10], nbr, i;  
  
  printf("Entrez le nombre a convertir: ");  
  scanf("%d",&nbr);  
  
  for(i=0; nbr > 0; i++)  
  {  
    tab[i] = nbr%2;  
    nbr = nbr/2;  
  } 
  
  printf("\n Le nombre binaire est = ");
  
  for(i=i-1; i >= 0; i--)  
  {  
    printf("%d",tab[i]);  
  }  
		
	*/	
		
		
		
		
		
		
		
//converter bin en dec		
int i,d=0;
int t[4];

for(i=4-1;i>=0;i--)
{
printf("\nDonnez le i EME  bit : ");
scanf("%d",&t[i]);
}

for(i=0;i<4;i++)
{

d=d+t[i]*pow(2,i);
}
printf("\nLe nombre en decimal est : %d",d);
		
		return 0;
	}






//ss
int some(int bin1,int bin2){
	int result=bin1+bin2;
	return 0;
}
int main(int argc, char *argv[]) {
	

	return 0;
}*/
