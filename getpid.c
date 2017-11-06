#include "apue.h"

int main(void){
    printf("i am a process, and my id is %d\n", (long)getpid());
    exit(0);
}
