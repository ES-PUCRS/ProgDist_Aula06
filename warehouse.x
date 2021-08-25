#define VERSION_NUMBER 1
#define PROGRAM_NUMBER 0x20000002

program SERVICEPROG_C {
	
	version SERVICEVERS_C {
		int QUERY_WAREHOUSE(string) = 1;
		int ADD_WAREHOUSE(string) = 2;
		int REMOVE_WAREHOUSE(string) = 3;
		int UPDATE_WAREHOUSE(string) = 4;
	} = VERSION_NUMBER;

} = PROGRAM_NUMBER;
