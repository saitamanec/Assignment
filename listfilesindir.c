#include <stdio.h>

int main(int argc, char* argv[]) {
	char cmdstr[128] = {0} ;//empty the array to ensure there is no any juck

	sprintf(cmdstr, "%s  %s %s", "ls ","-l", argv[1]);
	system(cmdstr);
	printf("%s\n", cmdstr);
	return 0;
}
