#include<stdio.h>

char *sub_string(char *str1, char *str2);

int main(){
  char str1[50], str2[50];

  puts("Digite a primeira string");
  scanf("%s", str1);
  puts("Digite a segunda string");
  scanf("%s", str2);

  printf("%p\n",sub_string(str1,str2));

}

char *sub_string(char str1[], char str2[]){
  int i,aux;
  char *ptr;

  for(i=0; str1[i]!='\0'; i++){
      if(str1[i]==str2[0])
        aux=i;
  }
  printf("%c\n",str1[aux]);
  ptr = &str1[aux];
  //return &str1[aux];
  return ptr;
}
