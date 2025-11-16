#include<stdio.h>
 //4 sayı alıp bunlarınkaresini ve küpünü alan program.
 int main()
 {
 	printf("lutfen kupunu ve karesini almak istediginiz 4 adet sayi giriniz:\n");
 	int a,b,c,d,kare1,kare2,kare3,kare4,kup1,kup2,kup3,kup4;
 	scanf("%d",&a);
 	scanf("%d",&b);
 	scanf("%d",&c);
 	scanf("%d",&d);
 	
 	//kare formülleri
 	kare1=a*a;  
 	kare2=b*b;
 	kare3=c*c;
 	kare4=d*d;
 	//küp formülleri
 	kup1=a*a*a;
 	kup2=b*b*b;
 	kup3=c*c*c;
 	kup4=d*d*d;
 	
	 printf("sayiların karesi--->%d\t%d\t%d\t%d",kare1,kare2,kare3,kare4);
	 printf("\nsayilarin kupu--->%d\t%d\t%d\t%d",kup1,kup2,kup3,kup4);
 	
 	return 0;
 }
 
