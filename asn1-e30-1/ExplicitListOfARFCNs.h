/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_ExplicitListOfARFCNs_H_
#define	_ExplicitListOfARFCNs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueGERAN.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ExplicitListOfARFCNs */
typedef struct ExplicitListOfARFCNs {
	A_SEQUENCE_OF(ARFCN_ValueGERAN_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExplicitListOfARFCNs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExplicitListOfARFCNs;

#ifdef __cplusplus
}
#endif

#endif	/* _ExplicitListOfARFCNs_H_ */
#include <asn_internal.h>