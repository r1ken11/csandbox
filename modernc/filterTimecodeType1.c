#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 512

int main(int argc, char *argv[]) {
    FILE *file = fopen(argv[1], "r");
    char line[MAX_LEN];

    while (fgets(line, sizeof(line), file) != NULL) {
        if (strstr(line, "-->") != NULL) {
            continue;
        }

        if (line[0] == '\n' || line[0] == 'r') {
            continue;
        }

        if (isdigit((unsigned char)line[0])) {
            if (line[1] == '\n' || line[1] == '\r' || line[2] == '\n' || line[2] == '\r' || line[3] == '\n' || line[3] == '\r') {
                continue;
            }
        }
        printf("%s", line);
    }
    fclose(file);
    return 0;
}
