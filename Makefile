all:
	rpcgen service1.x
	rpcgen service2.x
	gcc server1.c service1_svc.c -o server1 -lnsl
	gcc server2.c service2_svc.c -o server2 -lnsl
	gcc client.c service1_clnt.c service2_clnt.c -o client -lnsl

clean:
	rm -f client server1 server2 service1_svc.c service1_clnt.c service2_svc.c service2_clnt.c service1_xdr.c service2_xdr.c service1.h service2.h
