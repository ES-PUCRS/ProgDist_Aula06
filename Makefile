all:
	rpcgen catalog.x
	rpcgen billing.x
	rpcgen warehouse.x
	gcc server_catalog.c catalog_svc.c -o server_catalog -lnsl
	gcc server_billing.c billing_svc.c -o server_billing -lnsl
	gcc server_warehouse.c warehouse_svc.c -o server_warehouse -lnsl
	gcc Sales.c catalog_clnt.c billing_clnt.c warehouse_clnt.c -o Sales -lnsl
	gcc Manager.c warehouse_clnt.c -o Manager -lnsl

clean:
	rm -f Sales
	rm -f Manager
	rm -f server_catalog
	rm -f server_billing
	rm -f server_warehouse
	rm -f catalog_svc.c catalog_clnt.c catalog.h catalog_xdr.c
	rm -f billing_svc.c billing_clnt.c billing_xdr.c billing.h
	rm -f warehouse_svc.c warehouse_clnt.c warehouse_xdr.c warehouse.h
