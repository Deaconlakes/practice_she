/**
 * SIGNAL HANDLERS
 */

/**
 * signal handler for SIGCHLD
 */
void signalHandler(int signal){
	/* Wait for all dead processes.
	 * We use a non-blocking call (WNOHANG) to be sure this signal handler will not
	 * block if a child was cleaned up in another part of the program. */
	if (signal == SIGCHD)
	{
		while (waitpid(-1, NULL, WNOHANG) > 0) {
	}
	printf("\n");
}

else if (signal == SIGINT)
{
	if (kill(pid,SIGTERM) == 0){
		printf("\nProcess %d received a SIGINT signal\n",pid);
		no_reprint_prmpt = 1;			
	}else{
		printf("\n");
	}
}
