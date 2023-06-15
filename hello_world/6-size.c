#include <stdio.h>
/**
* main - print a string
* Return: Description of the returned value
*/
int main(void)
{
printf("\n %d% octets pour variable de type char ",sizeof(char));
printf("\n %d% octets pour variable de type int ",sizeof(int));
printf("\n %d% octets pour variable de type long int ",sizeof(long int));
printf("\n %d% octets pour variable de type long long int ",sizeof(long long int));
printf("\n %d% octets pour variable de type float ",sizeof(float));
return (0);
}
