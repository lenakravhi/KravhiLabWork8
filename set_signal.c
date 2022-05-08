#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main(int argc, char * argv[]) {
        pid_t pid = (pid_t) atoi(argv[1]);
        if (!kill(pid, SIGUSR2))
                printf("Process with PID=%d was killed!\n", pid);
        else
                fprintf(stderr, "Kill error for pid=%d\n", pid);
return 0;
}
