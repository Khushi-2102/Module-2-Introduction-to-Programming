////Part 1: Using break to stop printing when number reaches 5
#include <stdio.h>

int main() {
    int i;

    printf("Using break to stop at 5:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Exit the loop when i is 5
        }
        printf("%d ", i);
    }

    return 0;
}


// part 2: Using continue to skip printing number 3
#include <stdio.h>

int main() {
    int i;

    printf("Using continue to skip 3:\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skip the rest of this iteration when i is 3
        }
        printf("%d ", i);
    }

    return 0;
}

////Combined Version (Both break and continue):
#include <stdio.h>

int main() {
    int i;

    printf("Using break and continue together:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Stop the loop completely
        }
        if (i == 3) {
            continue;  // Skip number 3
        }
        printf("%d ", i);
    }

    return 0;
}

