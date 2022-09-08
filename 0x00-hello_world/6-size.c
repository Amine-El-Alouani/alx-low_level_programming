#include <stdio.h>
/**
 *main - main block
 *printf
 *sizeof
 *return: 0
 */
int main(void)
{
int intType;
char charType;
float floatType;
long int longIntType;
long long int long2IntType;
printf("Size of a char: %i byte(s)\n", sizeof(charType));
printf("Size of an int: %i byte(s)\n", sizeof(intType));
printf("Size of a long int: %i byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %i byte(s)\n", sizeof(long2IntType));
print("Size of a float: %i byte(s)", sizeof(floatType));
return (0);
}
