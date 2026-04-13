#include <stdio.h>
#include <sys/types.h>

int main() {

  // buat variabel
  int angka = 10;
  int minus = -5;
  float desimal = 3.14159;
  char nilai = 'A';
  char nama[] = "Jokowi";

  // cetak variabel
  printf("%d\n", angka); // Integer angka biasa
  printf("|%5d|\n", 15);
  printf("%07d\n", 2);

  printf("%f\n", desimal); // Floating point angka desimal
  printf("%.2f\n", desimal);

  printf("%c\n", nilai); // character
  printf("%s\n", nama);

  printf("%.3f\n", desimal);
  printf("|%10.3f|\n", desimal);
  printf("|%010f|\n", desimal);

  printf("%+d\n", angka);
  printf("%-d\n", minus);
  return 0;
}
