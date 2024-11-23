#include <stdio.h>
#include <string.h>
#include <time.h>

void findNemo(char *array[], int length, int verbose) {
  for (int i = 0; i < length; i++) {
    printf("running\n");
    if (strcmp(array[i], "nemo") == 0) {
      if (verbose) {
        printf("%s is found!\n", array[i]);
      }
      break;
    }
  }
}

int main(int argc, char *argv[]) {
  char *names[] = {"golu", "nemo",   "alex",  "steve",  "gold",  "silver",
                   "jon",  "robert", "jaime", "tyrion", "tywin", "stannis"};
  int num_elements = sizeof(names) / sizeof(names[0]);
  findNemo(names, num_elements,
           1); // the function findNemo has O(n) --> linear time complexity

  // calculation of time taken by the function findNemo
  // Measure the start time
  clock_t start_time = clock();

  // Call the function
  findNemo(names, num_elements, 0);

  // Measure the end time
  clock_t end_time = clock();

  // Calculate the time taken in seconds
  double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

  printf("Time taken by findNemo: %f seconds\n", time_taken);
  return 0;
}
