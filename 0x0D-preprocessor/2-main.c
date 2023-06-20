#include <stdio.h>
/*This program print out the name of the folder it was compiled from using the predefined macro in c language*/
int main(void)
{
	printf("Compiled from file: %s\n", __BASE_FILE__);
	return (0);
}
