#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{

  if(sizeof(void*) == 8)
    printf("You are using a 64-bit operating system\n\n");
  else
    printf("You are using a 32-bit operating system\n\n");

  printf("The size of a char is %lu byte\n", sizeof(char));
  printf("The minimum value a char can store is %d\n", CHAR_MIN);
  printf("The maximum value a char can store is %d\n\n", CHAR_MAX);

  printf("The size of a unsigned char is %lu byte\n", sizeof(unsigned char));
  printf("The minimum value an unsigned char can store is %d\n", 0);
  printf("The maximum value an unsigned char can store is %d\n\n", UCHAR_MAX);


  printf("The size of a short is %lu bytes\n", sizeof(short));
  printf("The minimum value a short can store is %d\n", SHRT_MIN);
  printf("The maximum value a short can store is %d\n\n", SHRT_MAX);

  printf("The size of a int is %lu bytes\n", sizeof(int));
  printf("The minimum value a int can store is %d\n", INT_MIN);
  printf("The maximum value a int can store is %d\n\n", INT_MAX);

  printf("The size of a unsigned int is %lu bytes\n", sizeof(unsigned int));
  printf("The minimum value a unsigned int can store is %d\n", 0);
  printf("The maximum value a unsigned int can store is %d\n\n", UINT_MAX);

  printf("The size of a unsigned long is %lu bytes\n", sizeof(long));
  printf("The minimum value a unsigned long can store is %d\n", 0);
  printf("The maximum value a unsigned int can store is %lu\n\n", ULONG_MAX);

  printf("The size of a float is %lu bytes\n", sizeof(float));
  printf("The minimum value a float can store is %.10e\n", FLT_MIN);
  printf("The maximum value a float can store is %.10e\n\n", FLT_MAX);
  return 0;
}
