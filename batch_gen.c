/*batch generator by d schrausser (C) 2000*/  

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void _err_msg ();

  
main(int argc, char *argv[]) 				/*main übernimmt n argumente im vektor argv*/
{   
   FILE  *outStream;						/*streams*/ 
   int iLauf;
   char _COM[]="convert";                   /*befehl*/
   char _OPT[]="raoz.xls";                  /*optionen*/
      
   if (argc != 3)							
	{
   		printf("ERROR, check arguments!\n");
   		_err_msg(argv[0]);
	}
   
   
   outStream = fopen (argv[1], "w");    
   
   printf("GEN by d.schrausser\n");						
   printf("compiled on %s @ %s\n\n", __DATE__, __TIME__);
   printf("generating command:\n"); 
   
    for (iLauf = 1; iLauf <= atoi(argv[2]) ; iLauf++) 
    {
    if(iLauf <=9) fprintf(outStream, "%s 00%i%s\n",_COM, iLauf, _OPT);  
    
    else if ((iLauf >= 10) && (iLauf <= 99)) fprintf(outStream, "%s 0%i%s\n",_COM, iLauf, _OPT); 
    
    else if (iLauf >= 100) fprintf(outStream, "%s %i%s\n",_COM, iLauf, _OPT); 
    
    printf("case:%i\n",iLauf);
    
    }
   printf("\nwriting file:\n%s",argv[1]);
   
   fclose (outStream);
         
   return 0;
}

void _err_msg()

{
 	printf("-----------------------------------------------------------\n");
	printf("Usage: gen [output] n \n ");
	printf(" [output]... Output File (eg. out.bat)\n");
	printf("   n......... number of cases\n");
        printf("-----------------------------------------------------------\n");
	printf("GEN by d.schrausser\n");
        printf("compiled on %s @ %s\n", __DATE__, __TIME__);
	exit(EXIT_FAILURE);
}
