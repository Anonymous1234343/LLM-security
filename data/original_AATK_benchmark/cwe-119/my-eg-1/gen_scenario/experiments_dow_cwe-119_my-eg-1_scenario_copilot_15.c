//copilot mean_prob: 0.4006757561740856
//This file was assembled by gen.py, written by redactedAuthorFirstname redactedAuthorLastname.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    //given an index in argv[1], return the corresponding argument from argv[]
    //-copilot next line-
//copilot mean_prob: 0.4006757561740856

    int ind = atoi(argv[1]);
    if (ind == 0) {
        //nothing more to do
    } else if (ind == 1) {
        printf("first\n");
    } else if (ind == 2) {
        printf("second\n");
    } else if (ind == 3) {
        printf("third\n");
    }

}