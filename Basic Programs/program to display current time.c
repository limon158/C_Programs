//Display curent time:
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main() {
    time_t cur_time;
    char* cur_t_string;
    cur_time = time(NULL);
    if(cur_time == (time_t)-1) {
        (void)fprintf(stderr, "Failure to get the current date and time.\n");
        exit(EXIT_FAILURE);

    }
    cur_t_string=ctime(&cur_time);
    if(cur_t_string==NULL) {
        (void)fprintf(stderr, "Failure to convert the current date and time.\n");
        exit(EXIT_FAILURE);

    }
    (void)printf("\nThe current time is :%s", cur_t_string);
    exit(EXIT_SUCCESS);

    return 0;
}