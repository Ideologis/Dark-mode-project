#include <stdio.h>
#include <string.h>

#define MAX_CHARACTERS 256

void print_character_counts(int argc, char *argv[]) {
  int character_counts[MAX_CHARACTERS];
  memset(character_counts, 0, sizeof character_counts);

  for (int i = 1; i < argc; i++) {
    char *current_text = argv[i];
    int text_len = strlen(current_text);

    for (int j = 0; j < text_len; j++) {
      character_counts[(int)current_text[j]]++;
    }
  }

  for (int i = 0; i < MAX_CHARACTERS; i++) {
    if (character_counts[i] > 0) {
      printf("%c:%d\n", (char)i, character_counts[i]);
    }
  }
}

int main(int argc, char *argv[]) {
  print_character_counts(argc, argv);
  return 0;
}