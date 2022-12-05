#include <stdio.h>

main(){
    
	int a,b;
	char c = 'A';
	
    
	for(b=1; b<=5; b++)
    	{
        for(a=1; a<=b; a++)
    	    {
            printf("%c ",c++);

        	    }

        printf("\n");
    }

}
