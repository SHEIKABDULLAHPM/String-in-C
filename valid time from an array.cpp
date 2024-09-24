#include <stdio.h>
#include <string.h>

int main() {
    int digits[4];
    char latest_time[6] = "00:00"; 
    int is_valid = 1;
    printf("Enter four digits (0-9) separated by spaces: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &digits[i]);
        if (digits[i] < 0 || digits[i] > 9) {
            is_valid = 0; // Check if all digits are between 0 and 9
        }
    }
    if (!is_valid) {
        printf("Invalid input\n");
        return 0;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == i) continue;
            for (int k = 0; k < 4; k++) {
                if (k == i || k == j) continue;
                for (int l = 0; l < 4; l++) {
                    if (l == i || l == j || l == k) continue;
                   
                    int hour = digits[i] * 10 + digits[j];
                    int minute = digits[k] * 10 + digits[l];

                    if (hour < 24 && minute < 60) {
                        char current_time[6];
                        sprintf(current_time, "%02d:%02d", hour, minute);

                        // Update the latest_time if the current_time is later
                        if (strcmp(current_time, latest_time) > 0) {
                            strcpy(latest_time, current_time);
                        }
                    }
                }
            }
        }
    }

    if (strcmp(latest_time, "00:00") != 0) {
        printf("Latest time: %s\n", latest_time);
    } else {
        printf("\"\"\n");
    }

    return 0;
}

