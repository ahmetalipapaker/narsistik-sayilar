#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nars,yuzler,onlar,birler;
	for(nars=1;nars<=1000;nars++)
	{
		yuzler=nars/100;
		onlar=nars/10;
        onlar=onlar%10;
		birler=nars%10;
		if(yuzler*yuzler*yuzler+onlar*onlar*onlar+birler*birler*birler==nars)
		printf("narsist sayidir: %d\n",nars); }

	
	
	return 0;
}
