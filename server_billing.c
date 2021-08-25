#include <stdio.h>
#include <string.h>
#include "billing.h"

int *add_billing_1_svc(char **name, struct svc_req *rqstp)
{
	static int val;
	
	printf("Billing added...(%s)\n", *name);
	
	return &val;
}
