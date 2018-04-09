/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PUCCH_ConfigCommon_v1430_H_
#define	_PUCCH_ConfigCommon_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_ConfigCommon_v1430__pucch_NumRepetitionCE_Msg4_Level3_r14 {
	PUCCH_ConfigCommon_v1430__pucch_NumRepetitionCE_Msg4_Level3_r14_n64	= 0,
	PUCCH_ConfigCommon_v1430__pucch_NumRepetitionCE_Msg4_Level3_r14_n128	= 1
} e_PUCCH_ConfigCommon_v1430__pucch_NumRepetitionCE_Msg4_Level3_r14;

/* PUCCH-ConfigCommon-v1430 */
typedef struct PUCCH_ConfigCommon_v1430 {
	long	*pucch_NumRepetitionCE_Msg4_Level3_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigCommon_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_NumRepetitionCE_Msg4_Level3_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigCommon_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_ConfigCommon_v1430_H_ */
#include <asn_internal.h>