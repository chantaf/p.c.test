#include <stdio.h>
#include <stdlib.h>




//////// binaire to int
int BinaireToInt(int binaire, int nombre) {

   int result;


   return result;
}



   int T[100];
    int i=0,j;
    int n;
    int entier_binaire(){
    printf("donner un nombre :");
    scanf("%d",&n);
     while(n!=0)
    {

      T[i]=n%2;
      printf("%d\n",T[i]);
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",T[j]);
    }

    return 0;}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//<<<<<<< HEAD
	int sous(int a,int b){

		int m1,c1,d1,u1,r1;
		int m2,c2,d2,u2,r2;

		m1=a/1000;
		r=a%1000;
		c1=r1/100;
		r=r1%100;
		d1=r1/10;
		r1=r1%10;
		u1=r1;

		m2=b/1000;
		r=b%1000;
		c2=r2/100;
		r2=r2%100;
		d2=r2/10;
		r2=r2%10;
		u2=r2;





=======
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

>>>>>>> 755f99ae919f7d2d4ad4ad1713765ba079ef4f39
		return 0;
	}






/*//ss
int some(int bin1,int bin2){
	return 0;
}
int main(int argc, char *argv[]) {


	return 0;
}*/
