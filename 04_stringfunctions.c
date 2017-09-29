#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

  char a[100]= "goodbye";
  char b[100] = "i'm back"; 
 
  // strcpy(dest, original);
  // copies the string pointed to by orginal to dest.

  // dest has to be large enough to hold the string pointed to by original
  // because you can't modify string literals, dest can't be a string literal (you can make it a local array instead) 

  printf("a is: [%s]\n", a); // a is: [goodbye]
  strcpy(a, "hello");
  printf("a is: [%s]\n", a); // a is: [hello]
  strcpy(a, b); 
  printf("a is: [%s]\n", a); // a is: [i'm back]
  strcpy(b, a);
  printf("b is: [%s]\n", b); //b is [i'm back]


  //strncpy(dest, orginal, n);
  //copies up to n characters from the string pointed to by original to dest
  //if original is less than n characters long, the remainder of dest will be padded with null bytes

  //if dest already points to a string that's longer than n characters, the first n characters will be copied from orginal and the rest of the characters will remain

  char c[100] = "germany";
  char d[100] = "france";
  char e[100] = "poland";
  char f[100];

  printf("c is: [%s]\n", c); // c is: [germany]
  strncpy(c, d, 4);
  printf("c is: [%s]\n", c); // c is: [franany]
  strncpy(f,e, 3);
  printf("f is: [%s]\n", f); // f is: [pol]


}


