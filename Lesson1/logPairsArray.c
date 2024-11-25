#include <stdio.h>

void logBoxes(int boxes[], int sizeBoxes) {
  for (int i = 0; i < sizeBoxes; i++) {
    for (int j = 0; j < sizeBoxes; j++) {
      printf("%d,%d ", boxes[i], boxes[j]);
    }
  }
}

int main() {
  int boxes[] = {1, 2, 3, 4, 5};
  int sizeBoxes = sizeof(boxes) / sizeof(boxes[0]);
  logBoxes(boxes, sizeBoxes);
  return 0;
}
// In the case of nested looping instead of adding the times, we multiply them
// ie.,  O[n^2]