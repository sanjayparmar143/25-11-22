#include <stdio.h>

main(){
    
	int a,b;

    for(b=1; b<=5; b++){
    	
        for(a=b; a>=1; a--){
        	
            printf("%i ",a%2);

        }

        printf("\n");
    }

}
