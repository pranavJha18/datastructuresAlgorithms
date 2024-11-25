#include <stdio.h>

void compressBoxesTwice(int boxes[], int size, int boxes2[], int size2) {
  for (int i = 0; i < size; i++) { // O(m)
    printf("%d ", boxes[i]);
  }
  printf("\n");
  for (int j = 0; j < size2; j++) { // O(n)
    printf("%d ", boxes2[j]);
  }
}

int main() {
  int boxes[] = {1, 23, 54, 65};
  int size = sizeof(boxes) / sizeof(boxes[0]);
  int boxes2[] = {1, 23, 54, 65, 90, 87, 34};
  int size2 = sizeof(boxes2) / sizeof(boxes2[0]);
  compressBoxesTwice(boxes, size, boxes2, size2); // O(m + n)
  // if the loops for boxes and boxes2 were nested then the time complexity
  // would have been O(m*n)
}