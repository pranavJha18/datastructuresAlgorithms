#include <math.h>
#include <stdio.h>

void printFirstItemThenFirstHalfThenSayHi100Times(char *names[], int size) {
  printf("%s", names[0]); // O(1)
  int middleIndex = size / 2;
  int index;

  while (index < middleIndex) { // O(n/2)
    printf("%s", names[index]);
    index++;
  }

  for (int i = 0; i < 100; i++) { // O(100)
    printf("hi\n");
  }
}

int main() {
  char *names[] = {"golu",   "mitthu", "nemo",   "tyrion", "tywin",   "jaime",
                   "tyrion", "jon",    "robert", "eddard", "stannis", "bronn"};
  int size = sizeof(names) / sizeof(names[0]);
  printFirstItemThenFirstHalfThenSayHi100Times(names, size);
  return 0;
}
// O(n/2 + 1 + 100):-> O(n)