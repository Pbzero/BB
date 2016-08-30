#include<stdio.h>
#include<stdlib.h> 

int main(int argc , char *argv[]) {     # Taking input from command line

    int st1 = 0 , st2 = 0 , n1 , n2 , d ;
    int new1 = 0 , new2 = 0 , new3 = 0 , new4 = 0 ;
    
    if(argc == 3) {
    
          n1 = atoi(argv[1]) ;
          
          while(n1 != 0) {       # In this loop body extracting first digit of Number1 and storing in variable st1
          
              st1 = n1 % 10 ;          
              n1 = n1 / 10 ;
         }
         
         n2 = atoi(argv[2]) ;     
         st2 = n2 % 10 ;        # Here storing last digit of Number2
         
         if(st1 < st2) {                         # Here in if body processing the Numbers and Swapping digits    
              d = st2 - st1 ;
              new1 = atoi(argv[1]) + d * 100 ;
              new2 = atoi(argv[2]) - d ;
        }
        
        else if(st1 > st2) {
              d = st1 - st2 ;
              new1 = atoi(argv[1]) - d * 100 ;
              new2 = atoi(argv[2]) + d ;
        }
        
        n1 = new1;
        n2 = new2;
        
        st1 = n1 % 10 ;   # Storing last digit of Number1
        
        while(n2 != 0) {        # In this body storing first digit of Number2
              st2 = n2 % 10 ; 
              n2 = n2 / 10 ;
        }
      
        if(st1 < st2) {              #In if body processing the Numbers and Swapping of Digits
              d = st2 - st1 ;
              new3 = new1 + d ;
              new4 = new2 - d * 100 ;
              printf("The Numbers after Digits Swapping = %d %d", new3 , new4);
              exit(0) ;
       }
       
       else if(st1 > st2) {
              d = st1 - st2 ;
              new3 = new1 - d ;
              new4 = new2 + d * 100 ;
              printf("The Numbers after Digits Swapping = %d %d", new3 , new4);
              exit(0) ;
      }
      
  }      
  
  else if(argc > 3) {                 # if arguments are more than required
      printf("Too Many Arguments);
      exit(0);
  }
  
  else {                               # if arguments are less than required
      printf("Less Arguments");
      exit(0);
  }
       
}       
