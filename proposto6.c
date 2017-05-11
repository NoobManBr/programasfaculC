#include<stdio.h>
#include<string.h>

char *strins(char *dest, char *orig);

int main(){
  char s[100] = "Autônoma";
  
  printf("%p", strins(s,"Universidade"));
}

char *strins(char *dest, char *orig){
  int tamanho = strlen(dest) + strlen(orig);
  int i,j;
  char str[tamanho];

  //printf("%s\n", orig);
  for(i=0; i<strlen(orig); i++){
    str[i]=orig[i];
    if(i==strlen(orig)-1){
      for(j=0; i<tamanho; i++,j++)
        str[i+1]=dest[j];
    }
  }
  printf("%s", str);
  return str;
}

