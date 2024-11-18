#include <stdio.h>

void logFirstTwoBoxes(int boxes[], int size) {
  printf("%d\n", boxes[0]); // O(1)
  printf("%d\n", boxes[1]); // O(1)
}

int main(int argc, char *argv[]) {
  int boxes[] = {0, 1, 2, 3, 4, 5};
  int size = sizeof(boxes) / sizeof(boxes[0]);
  logFirstTwoBoxes(boxes, size); // O(2)
  return 0;
}
