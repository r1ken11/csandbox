#include <stdio.h>
int main(int argc, char *argv[]) {
    FILE *file = fopen(argv[1], "r");
    char line[512];
    int line_number = 1;
    while (fgets(line, sizeof(line), file) != NULL) {
        if (line_number == 3) {
            printf("%s", line);
        }
        line_number++;
        if (line_number > 4) {
            line_number = 1;
        }
    }
    fclose(file);
    return 0;
}
