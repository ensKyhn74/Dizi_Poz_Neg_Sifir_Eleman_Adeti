#include <stdio.h>
// değerleri klavyeden girilen 10 elemanlı dizinin kaç elemanı pozitif,negatif,sıfır

int main() 

{
    
 int dizi[10];
 int i;
 int PozitifSayaci = 0,NegatifSayaci = 0,SifirSayaci = 0;
 
 for(i = 0 ; i < 10 ; i++)
 {
  printf("dizi[%d]: ",i);
  scanf("%d",&dizi[i]);
 }
 
 for(i = 0 ; i < 10 ; i++)
 {
  if(dizi[i] > 0)
  {
   PozitifSayaci++;
  }

  else if(dizi[i] < 0)
  {
   NegatifSayaci++;
  }

  else
  {
   SifirSayaci++;
  }
 }
 
 printf("dizinin %d tane elemani pozitif\n",PozitifSayaci);
 printf("dizinin %d tane elemani negatif\n",NegatifSayaci);
 printf("dizinin %d tane elemani sifir\n",SifirSayaci);

 return 0;
  
}