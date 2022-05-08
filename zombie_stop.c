void sighandler(int sig) {
printf("signal handler for signal = %d/n", sig);
        wait(0);
}

int main (void)
{
        int i;
        signal(SIGCHLD, &sighandler);
        pid_t pid = fork();
        if (pid == 0) {
                fprintf(stdout, "Child of Kravchishina is stopped\n");
                _exit(0);
        }
        else {
                fprintf(stdout,"the parent start ...\n");
                sleep(3*5);
                fprintf(stdout,"the parent finish ...\n");
        }
return EXIT_SUCCESS;
}
