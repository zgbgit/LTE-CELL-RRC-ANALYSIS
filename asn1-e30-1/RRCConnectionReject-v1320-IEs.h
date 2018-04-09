/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RRCConnectionReject_v1320_IEs_H_
#define	_RRCConnectionReject_v1320_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReject_v1320_IEs__rrc_SuspendIndication_r13 {
	RRCConnectionReject_v1320_IEs__rrc_SuspendIndication_r13_true	= 0
} e_RRCConnectionReject_v1320_IEs__rrc_SuspendIndication_r13;

/* RRCConnectionReject-v1320-IEs */
typedef struct RRCConnectionReject_v1320_IEs {
	long	*rrc_SuspendIndication_r13	/* OPTIONAL */;
	struct RRCConnectionReject_v1320_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_v1320_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rrc_SuspendIndication_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_v1320_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReject_v1320_IEs_H_ */
#include <asn_internal.h>