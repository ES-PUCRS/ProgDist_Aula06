/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SERVICE2_H_RPCGEN
#define _SERVICE2_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define SERVICEPROG_B 0x20000001
#define SERVICEVERS_B 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD_BILLING 1
extern  int * add_billing_1(char **, CLIENT *);
extern  int * add_billing_1_svc(char **, struct svc_req *);
extern int serviceprog_b_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD_BILLING 1
extern  int * add_billing_1();
extern  int * add_billing_1_svc();
extern int serviceprog_b_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SERVICE2_H_RPCGEN */