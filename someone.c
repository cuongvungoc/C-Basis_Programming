#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PEOPLE 10

typedef void (*func_pointer) ();

typedef struct someone_t {
    char *type;
    union {
        char *income_char;
        int income_int;
    } income;
    func_pointer action;
} SO;

void cadge();
void stole();
void work(SO *so);

void set_income (SO *so);
void action (SO so);

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