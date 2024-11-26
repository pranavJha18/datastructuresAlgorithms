#include <stdio.h>

void booo(int howMany[], int size) {
  for (int i = 0; i < size; i++) {
    printf("booo \n");
  }
}

char *functionHi(int times) {
  static char hiArray[100]; // Use a static array to ensure it persists after
                            // the function ends
  for (int i = 0; i < times; i++) {
    hiArray[i] = 'h';
    hiArray[i + 1] = 'i';
    hiArray[i + 2] = ' ';
    i += 2; // adjust the index for next hi
  }
  hiArray[times * 3] = '\0';
  return hiArray;
}

int main(int argc, char *argv[]) {
  int howMany[] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(howMany) / sizeof(howMany[0]);
  booo(howMany,
       size); // space complexity:-> O(1) we have to look inside the function

  int times = 15;
  char *result = functionHi(
      times); // space complexity:-> O(n) we have to look inside the function
  printf("%s\n", result);
  return 0;
}
