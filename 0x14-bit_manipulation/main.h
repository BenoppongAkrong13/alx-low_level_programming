#ifndef MAIN_H
#define MAIN_H

int set_bit(unsigned long int *a, unsigned int index);
int clear_bit(unsigned long int *a, unsigned int index);
unsigned int flip_bits(unsigned long int a, unsigned long int p);
unsigned int binary_to_uint(const char *w);
void print_binary(unsigned long int a);
int get_bit(unsigned long int a, unsigned int index);
int _atoi(const char *u);
int _putchar(char c);
int get_endianness(void);

#endif
