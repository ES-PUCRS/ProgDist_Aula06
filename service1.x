#define VERSION_NUMBER 1

program SERVICEPROG_A {
	version SERVICEVERS_A {
		int QUERY_CATALOG(string) = 1;
	} = VERSION_NUMBER;
} = 0x20000000;

