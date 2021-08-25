#include <stdio.h>
#include <string.h>
#include "warehouse.h"


int *query_warehouse_1_svc(char **name, struct svc_req *rqstp)
{
	static int val;
	
	printf("Warehouse query...(%s)\n", *name);
	
	return &val;
}


int *add_warehouse_1_svc(char **name, struct svc_req *rqstp)
{
	static int val;
	
	printf("Warehouse added...(%s)\n", *name);
	
	return &val;
}

int *remove_warehouse_1_svc(char **name, struct svc_req *rqstp)
{
	static int val;
	
	printf("Warehouse removed...(%s)\n", *name);
	
	return &val;
}

int *update_warehouse_1_svc(char **name, struct svc_req *rqstp)
{
	static int val;
	
	printf("Warehouse updated...(%s)\n", *name);
	
	return &val;
}