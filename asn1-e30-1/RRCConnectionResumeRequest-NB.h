/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RRCConnectionResumeRequest_NB_H_
#define	_RRCConnectionResumeRequest_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionResumeRequest-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResumeRequest_NB__criticalExtensions_PR {
	RRCConnectionResumeRequest_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionResumeRequest_NB__criticalExtensions_PR_rrcConnectionResumeRequest_r13,
	RRCConnectionResumeRequest_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionResumeRequest_NB__criticalExtensions_PR;

/* RRCConnectionResumeRequest-NB */
typedef struct RRCConnectionResumeRequest_NB {
	struct RRCConnectionResumeRequest_NB__criticalExtensions {
		RRCConnectionResumeRequest_NB__criticalExtensions_PR present;
		union RRCConnectionResumeRequest_NB__criticalExtensions_u {
			RRCConnectionResumeRequest_NB_r13_IEs_t	 rrcConnectionResumeRequest_r13;
			struct RRCConnectionResumeRequest_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeRequest_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeRequest_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResumeRequest_NB_H_ */
#include <asn_internal.h>