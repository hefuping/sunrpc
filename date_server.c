/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "date.h"

long *
bin_time_1_svc(void *argp, struct svc_req *rqstp)
{
	static long  result;

	/*
	 * insert server code here
	 */
     result = time(NULL);
	return &result;
}

char **
str_time_1_svc(long *bintime, struct svc_req *rqstp)
{
	static char * result;
    char * ctime();
	/*
	 * insert server code here
	 */
    result = ctime(&bintime);
	return &result;
}
