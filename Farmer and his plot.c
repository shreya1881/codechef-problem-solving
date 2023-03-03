#include <stdio.h>

int main(void) {
  int T;
  scanf("%i", &T);
  while (T--) {
    int l, b;
    scanf("%i %i", &l, &b);
    for (int i = l; i > 0; i--) {
      if ((l % i == 0) && (b % i == 0)) {
        printf("%i\n", (l / i) * (b / i));
        break;
      }
    }
  }
  return 0;
}