#include<stdio.h>

int sub_string(char *str1, char *str2);

int main(){
  char str1[50], str2[50];

  puts("Digite a primeira string");
  scanf("%s", str1);
  puts("Digite a segunda string");
  scanf("%s", str2);

  printf("%d\n",sub_string(str1,str2));

}

int sub_string(char str1[], char str2[]){
  int i,aux;


  for(i=0; str1[i]!='\0'; i++){
      if(str1[i]==str2[0])
        aux=i;
  }
  printf("%c\n",str1[aux]);

  return &str1[aux];

}
