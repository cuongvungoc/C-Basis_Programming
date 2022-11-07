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