#include <stdio.h>

int main()
{
  char lines[3][30] = {
  "/test.txt",
  "Hello", 
  "World"
  }

  printf("Filename: %s\n", lines[0]);

  char file[100];
  int index = 0;
  for (int i = 0; i < 3; i++){
    int j = 0;
    while (lines[i][j] != '\0'){
      content[index] = lines[i][j];
      index++;
      j++;
    }
    content[index] = '\n';
    index++;
  }
  content[index] = '\0';

  printf("\nFile:\n %s", file);

  char target[] = "Hello";
  int file_length = 0;
  int target_length = 0;

  while (file[file_length] != '0'){
  file_length++;
  }

  while (target[target_length] != '0'){
  target_length++;
  }

  int found = 0;
  for (int i = 0; i <= file_length - target_length; i++){
  int match = 1;
  for (int j = 0; j < target_length; j++){
    if (content[i + j} != target[j] {
      match = 0;
      break;
    }
  }
  if (match == 1) {
    found = 1;
    break;
    }
  }

  if (found) {
    printf("The word \"%s\" is in text\n", target);
  }
  else {
    printf("The word \"%s\" is not in text\n", target);
  }

  return 0;
}
