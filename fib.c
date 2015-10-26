#include <stdio.h>
 
long fibonacci(long n){
   if ( n == 0 ){
      return 0;
   } else if ( n == 1 ) {
      return 1;
   }  else{
      return fibonacci(n-1) + fibonacci(n-2);
   }
} 
 
int main(){
   int i;
 
   for (i = 1; ; i++ ){
      printf("%ld\n", fibonacci(i));
      i++; 
   }
 
   return 0;
}