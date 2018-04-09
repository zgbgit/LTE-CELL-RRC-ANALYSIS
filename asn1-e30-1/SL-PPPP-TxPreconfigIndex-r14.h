/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SL_PPPP_TxPreconfigIndex_r14_H_
#define	_SL_PPPP_TxPreconfigIndex_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-Priority-r13.h"
#include <NativeInteger.h>
#include "Tx-PreconfigIndex-r14.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-PPPP-TxPreconfigIndex-r14 */
typedef struct SL_PPPP_TxPreconfigIndex_r14 {
	SL_Priority_r13_t	 priorityThreshold_r14;
	long	 defaultTxConfigIndex_r14;
	long	 cbr_ConfigIndex_r14;
	struct SL_PPPP_TxPreconfigIndex_r14__tx_ConfigIndexList_r14 {
		A_SEQUENCE_OF(Tx_PreconfigIndex_r14_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tx_ConfigIndexList_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PPPP_TxPreconfigIndex_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_PPPP_TxPreconfigIndex_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PPPP_TxPreconfigIndex_r14_H_ */
#include <asn_internal.h>