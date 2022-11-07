#include <stdio.h>
#include <string.h>
#include "person.h"

void cadge () {
    printf ("cadge: %s\n","lam on lam phuoc");
}

void stole () {
    printf ("stole: %s\n", "!!!");
}

void work (SO *so) {
   printf ("work: %ld\n", (so->income.income_int));
}

void set_income (SO *so) {
    if (0 == strcmp(so->type, "anxin")) {
        // strcpy (so->income.income_char, "tuytam");
        so->income.income_char == "tuytam";
        // printf("set income anxin %s\n", so->income.income_char);
    }
    else if (0 == strcmp(so->type, "antrom")) {
        // strcpy (so->income.income_char, "henxui");
        so->income.income_char == "henxui";
        // printf("set income antrom %s\n", so->income.income_char);
    }
    else if (0 == strcmp(so->type, "congnhan")) {
        so->income.income_int == 5000000;
        // printf("set income congnhan: %ld\n", so->income.income_int);
    }
}

void action (SO so) {
    if (0 == strcmp(so.type, "anxin")) {
        cadge ();
    }
    else if (0 == strcmp(so.type, "antrom")) {
        stole ();
    }
    else if (0 == strcmp(so.type, "congnhan")) {
        work (&so);
    }
}