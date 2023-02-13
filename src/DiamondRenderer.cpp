#include <stdio.h>
#include <stdlib.h>

int main(){

  int n;
		printf("%cLado del rombo?",168);
    scanf("%i",&n);
    printf("\n");

  for (int i=1;i<=n;i++){
    for (int j=1;j<=n-i;j++){
      printf(" ");
    };
    for (int k=1;k<=i;k++){
      if (k%2 == 0) {
        printf(".");
      } else if ((k+1)%4 == 0){
        printf("o");
      } else {
        printf("%c",64);
      }
    }
    for (int l=i-2;l>=0;l--){
      if ((l+1)%2 == 0){
        printf(".");
      } else if ((l+2)%4 == 0){
        printf("o");
      } else {
        printf("%c",64);
      }
    }
    printf("\n");
  }

  for (int m=1;m<=n+1;m++){
    for (int o=1;o<=m;o++){
      printf(" ");
    }
    for (int p=1;p<=n-m;p++){
      if (p%2 == 0) {
        printf(".");
      } else if ((p+1)%4 == 0){
          printf("o");
      } else {
        printf("%c",64);
      }
    }
    for (int q=n-m;q>=2;q--){
      if ((q+1)%2 == 0) {
        printf(".");
      } else if (q%4 == 0){
        printf("o");
      } else {
        printf("%c",64);
      }
    }
    printf("\n");
  }
}
