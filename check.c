#include <stdio.h>
#include <string.h>


int test (char *S)
{
  int i;
  int str[1000];
  int flag=0;

  for(i = 0;i < strlen(S);i++){
    if(S[i]>='0' && S[i]<='9'){
      str[i]=1;
    }
    if(S[i]>='a' && S[i]<='z'){
      str[i]=2;
    }
    if(S[i]>='A' && S[i]<='Z'){
      str[i]=3;
    }
  }

  for(i = 0;i < strlen(S);i++){

    if(str[i]==2){
      if(str[i-1]==3){
        flag++;
      }
    }

    if(str[i]==3){
      flag++;
    }
  }

  if(flag == 0){
    return -1;
  }
  return flag;
}


int main(){

  char S[] ="a0Ba";
  printf("%d\n",test(S));
}
