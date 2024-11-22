#include <stdio.h>
#include <time.h>

void logFirstTwoBoxes(int boxes[], int size, int verbose) {
  if (verbose) {
    printf("%d\n", boxes[0]); // O(1)
    printf("%d\n", boxes[1]); // O(1)
  }
}

int main(int argc, char *argv[]) {
  int boxes[] = {0, 1, 2, 3, 4, 5};
  int size = sizeof(boxes) / sizeof(boxes[0]);
  logFirstTwoBoxes(boxes, size, 1); // O(2)

  clock_t start_time = clock();
  logFirstTwoBoxes(boxes, size, 0);
  clock_t end_time = clock();
  double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;
  printf("The time taken by the function is: %lf \n", time_taken);
  return 0;
}
