#include <stdio.h>
#include "warehouse.h"

int add_warehouse(CLIENT *clnt, char *str) {
	int *result;

	/* chama a função remota */
	result = add_warehouse_1(&str, clnt);
	
	if (result == NULL) {
		printf ("Problemas ao chamar a função remota add Warehouse\n");
		
		return -1;
	}

	return (*result);
}

int remove_warehouse(CLIENT *clnt, char *str) {
	int *result;

	/* chama a função remota */
	result = remove_warehouse_1(&str, clnt);
	
	if (result == NULL) {
		printf ("Problemas ao chamar a função remota remove Warehouse\n");
		
		return -1;
	}

	return (*result);
}

int update_warehouse(CLIENT *clnt, char *str) {
	int *result;

	/* chama a função remota */
	result = update_warehouse_1(&str, clnt);
	
	if (result == NULL) {
		printf ("Problemas ao chamar a função remota remove Warehouse\n");
		
		return -1;
	}

	return (*result);
}

int main(int argc, char *argv[]) {
	CLIENT *clnt;
	int val;

	if (argc != 4) {
		fprintf(stderr,"Uso:\n%s <SERVIDOR> <FUNC (add/updt/rm)> <VALUE>\n", argv[0]);
		
		return 1;
	}
	
	/* cria uma struct CLIENT que referencia uma interface RPC */
	clnt = clnt_create(argv[1], SERVICEPROG_C, SERVICEVERS_C, "udp");
	
	/* verifica se a referência foi criada */ 
	if (clnt == (CLIENT *)NULL) {
		clnt_pcreateerror(argv[1]);

		return 1;
	}
	


	/* executa os procedimentos remotos */
	if(strcmp(argv[2], "add") == 0) {
		val = add_warehouse    (clnt, argv[3]);

	} else if (strcmp(argv[2], "rm") == 0) {
		val = remove_warehouse (clnt, argv[3]);

	} else if (strcmp(argv[2], "updt") == 0) {
		val = update_warehouse (clnt, argv[3]);


	} else {
		fprintf(stderr,"Uso:\n%s <> <FUNC (add/updt/rm)> <>\n", argv[0]);
	}


	return 0;
}
