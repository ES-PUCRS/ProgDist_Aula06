/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SERVICE1_H_RPCGEN
#define _SERVICE1_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define SERVICEPROG_A 0x20000000
#define SERVICEVERS_A 1

#if defined(__STDC__) || defined(__cplusplus__)
#define QUERY_CATALOG 1
extern  int * query_catalog_1(char **, CLIENT *);
extern  int * query_catalog_1_svc(char **, struct svc_req *);
extern int serviceprog_a_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define QUERY_CATALOG 1
extern  int * query_catalog_1();
extern  int * query_catalog_1_svc();
extern int serviceprog_a_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SERVICE1_H_RPCGEN */
