#define VERSION_NUMBER 1

program SERVICEPROG_B {
	version SERVICEVERS_B {
		int ADD_BILLING(string) = 1;
	} = VERSION_NUMBER;
} = 0x20000001;
