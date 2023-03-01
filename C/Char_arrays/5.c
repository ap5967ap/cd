#include<stdio.h>
int main() {
  char x[]={'h','e','l','l','o'}; //doesn't end is '\0'
  char ax[6]={'h','e','l','l','o'}; // ends in '\0'
  char as[10]={'h','e','l','l','o'}; //ends in '\0'
  printf("%s\n",x); //gives hello???? (some garbage)
  char *s="hello"; //end is '\0'
  // printf("%s",s);
  char ss[5]={"HELLO"}; //doesn't end in '\0'
  printf("%s",ss);//gives hello???? (some garbage) //next address value 
  char sas[]={"HELLO"}; //end in '\0'
  char ssaa[6]={"HELLO"}; //end in '\0'
  char sx[10]={"HELLO"}; //end in '\0'
  char sc[]="HELLO"; //end in '\0'
  char *scd={"HELLO"};//end in '\0'3
    //   *scd="HE";//Wrong
    scd="HE"; //OK
//    char *sdfd={'h','e','l','l','o'}; // not allowed
  char *fjd={"HELLO"};//end in '\0'
  return 0;
}
