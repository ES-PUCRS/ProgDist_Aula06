#include <stdio.h>
#include "service1.h"
#include "service2.h"

int query_catalog(CLIENT *clnt, char *str) {
	int *result;

	/* chama a função remota */
	result = query_catalog_1(&str, clnt);
	
	if (result == NULL) {
		printf ("Problemas ao chamar a função remota\n");
		
		return -1;
	}

	return (*result);
}

int add_billing(CLIENT *clnt, char *str) {
	int *result;

	/* chama a função remota */
	result = add_billing_1(&str, clnt);
	
	if (result == NULL) {
		printf ("Problemas ao chamar a função remota\n");
		
		return -1;
	}

	return (*result);
}

int main(int argc, char *argv[]) {
	CLIENT *clnt1, *clnt2;
	int val;

	if (argc != 3) {
		fprintf(stderr,"Uso:\n%s <servidor 1> <servidor 2>\n", argv[0]);
		
		return 1;
	}
	
	/* cria uma struct CLIENT que referencia uma interface RPC */
	clnt1 = clnt_create(argv[1], SERVICEPROG_A, SERVICEVERS_A, "udp");
	
	/* verifica se a referência foi criada */ 
	if (clnt1 == (CLIENT *)NULL) {
		clnt_pcreateerror(argv[1]);

		return 1;
	}

	clnt2 = clnt_create(argv[2], SERVICEPROG_B, SERVICEVERS_B, "udp");
	
	if (clnt2 == (CLIENT *)NULL) {
		clnt_pcreateerror(argv[1]);
		
		return 1;
	}

	
	/* executa os procedimentos remotos */
	val = query_catalog(clnt1, "test 1 string");
	val = add_billing(clnt2, "test 2 string");

	return 0;
}
