/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "logica.h"


void
prog_100(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	char *solicita_codigo_100_arg;
	int  *result_2;
	transacao  solicita_abertura_100_arg;
	int  *result_3;
	transacao  solicita_autenticacao_100_arg;
	int  *result_4;
	transacao  solicita_fechamento_100_arg;
	int  *result_5;
	transacao  solicita_deposito_100_arg;
	int  *result_6;
	transacao  solicita_retirada_100_arg;
	int  *result_7;
	transacao  solicita_consulta_100_arg;
	int i = 0;

#ifndef	DEBUG
	clnt = clnt_create (host, PROG, VERSAO, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	for(i = 0; i < 10; i++){
		result_1 = solicita_codigo_100((void*)&solicita_codigo_100_arg, clnt);
		if (result_1 == (int *) NULL) {
			clnt_perror (clnt, "call failed");
		}else{
			printf("%d\n", &result_1);
		}
	}

	return;

	result_2 = solicita_abertura_100(&solicita_abertura_100_arg, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = solicita_autenticacao_100(&solicita_autenticacao_100_arg, clnt);
	if (result_3 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = solicita_fechamento_100(&solicita_fechamento_100_arg, clnt);
	if (result_4 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_5 = solicita_deposito_100(&solicita_deposito_100_arg, clnt);
	if (result_5 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_6 = solicita_retirada_100(&solicita_retirada_100_arg, clnt);
	if (result_6 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_7 = solicita_consulta_100(&solicita_consulta_100_arg, clnt);
	if (result_7 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	prog_100 (host);
exit (0);
}
