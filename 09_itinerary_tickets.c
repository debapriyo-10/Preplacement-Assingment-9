#include <stdio.h>
#include <string.h>

struct Ticket {
    char src[20];
    char dst[20];
};

int main() {
    struct Ticket tickets[] = {
        {"Chennai", "Banglore"},
        {"Bombay", "Delhi"},
        {"Goa", "Chennai"},
        {"Delhi", "Goa"}
    };
    int n = 4;

    char start[20];
    strcpy(start, "Bombay");

    printf("Itinerary:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (strcmp(tickets[j].src, start) == 0) {
                printf("%s -> %s\n", tickets[j].src, tickets[j].dst);
                strcpy(start, tickets[j].dst);
                break;
            }
        }
    }
    return 0;
}
