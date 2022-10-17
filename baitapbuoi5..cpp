#include<stdio.h>
#include <math.h>

int main()
{
	printf("Nhap ba so bat ki: \n");
	
	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	int c;
	scanf("%d", &c);
	
	if(a > 0 && b >0 && c >0){
		if(a+b>c && a+c> b && b+c>a){
			int P;
			// chu vi cua tam giac 
			P = a + b + c;
		
			printf("Chu vi cua tam giac la: %d \n" , P);
			float k;
			k = float(P) /2;
			float S;
			// tinh dien tich cua tam giac bang cong thuc heron 
			S = sqrt(k*(k- a)*(k- b)*(k- c));
		
			printf("Dien tich cua tam giac la: %f", S);
		} else{
			printf("day khong phai do dai 3 canh cua tam giac");
		}
			
	} else{
		printf("day khong phai do dai 3 canh cua tam giac");
		
	}
}
