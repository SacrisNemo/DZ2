#ifndef EX_H
#define EX_H
#include <iostream>

void print(int*, unsigned);
int fold(int*, unsigned, int (*)(int,int));
void map(int*, unsigned, int (*)(int));
int* (*ch(int*, unsigned))(int*, unsigned);
int* inv(int*, unsigned);
int* neu(int*, unsigned);
int* nev(int*, unsigned);
int sum(int*, unsigned);
#endif // !EX_H