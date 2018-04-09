/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UERadioPagingInformation_v1310_IEs_H_
#define	_UERadioPagingInformation_v1310_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-r11.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UERadioPagingInformation-v1310-IEs */
typedef struct UERadioPagingInformation_v1310_IEs {
	struct UERadioPagingInformation_v1310_IEs__supportedBandListEUTRAForPaging_r13 {
		A_SEQUENCE_OF(FreqBandIndicator_r11_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *supportedBandListEUTRAForPaging_r13;
	struct UERadioPagingInformation_v1310_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UERadioPagingInformation_v1310_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERadioPagingInformation_v1310_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UERadioPagingInformation_v1310_IEs_H_ */
#include <asn_internal.h>