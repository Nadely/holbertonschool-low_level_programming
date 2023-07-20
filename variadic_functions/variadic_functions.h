#ifndef PROTECT
#define PROTECT
typedef struct _print
{
	char *print;
	void (*func)(va_list);
}pri_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
