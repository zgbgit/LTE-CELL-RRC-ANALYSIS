/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_InterFreqCarrierFreqListExt_v1280_H_
#define	_InterFreqCarrierFreqListExt_v1280_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqInfo_v10j0;

/* InterFreqCarrierFreqListExt-v1280 */
typedef struct InterFreqCarrierFreqListExt_v1280 {
	A_SEQUENCE_OF(struct InterFreqCarrierFreqInfo_v10j0) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqListExt_v1280_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqListExt_v1280;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqInfo-v10j0.h"

#endif	/* _InterFreqCarrierFreqListExt_v1280_H_ */
#include <asn_internal.h>
