#include <stdio.h>
#include <string.h>
#include "service1.h"

int *query_catalog_1_svc(char **name, struct svc_req *rqstp)
{
	static int val;
	
	printf("Catalog queried...(%s)\n", *name);
	
	return &val;
}
