#include <stdlib.h>

#include "person.h"

int main () {
    
    SO someone[MAX_PEOPLE];
    char *type[] = {"anxin", "antrom", "congnhan", NULL};
    for (int i = 0; i < MAX_PEOPLE; i++) {
        someone[i].type = type[rand() % 3];
    }

    for (int i = 0; i < MAX_PEOPLE; i++) {
        set_income (&someone[i]);
        // printf (someone[i].income.income_char);
        printf ("%d. %s\n", i, someone[i].type);
        someone[i].action = &action;
        someone[i].action(someone[i]);
        printf("--------------------------------\n");
    }

    // SO *anxin;
    // anxin->type = "anxin";
    // if (0 == strcmp(anxin->type, "anxin")){
    //     anxin->income.income_char = "123";
    //     // set_income(anxin);
    //     printf (anxin->income.income_char);

    // }

    return 0;
}