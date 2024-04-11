#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int na,nb,nc,nd,s1,s2,s3,e1,e2,e3,n,nf;
	char vencedorfinal,vencedor1, vencedor2;
	scanf("%d%d%d", &e1, &na, &nb);
	scanf("%d%d%d", &e2, &nc, &nd);
	scanf("%d%d%d", &e3, &n, &nf);
	s1 = na + nb;
	     if ((s1 % 2 == e1 && e1 == 0 )||(s1 % 2 == 1 && e1 == 1)){
	     			vencedor1 = 'A';}
			else {vencedor1 = 'B';}
	s2 = nc + nd;
		 if ((s2 % 2 == 0 && e2 == 0 ) || (s2 % 2 == 1 && e2 == 1)){
				vencedor2 = 'C';}
			else {vencedor2 = 'D';}
	s3 = n +	nf;
		if ((s3% 2 == 0 && e3 == 0 ) || (s3 % 2 == 1 && e3 == 1))
		{vencedorfinal = vencedor1;}
			else{vencedorfinal = vencedor2;}
		printf("%c\n", vencedorfinal);
				
	return 0;
}

