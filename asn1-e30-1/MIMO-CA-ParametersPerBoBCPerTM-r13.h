/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MIMO_CA_ParametersPerBoBCPerTM_r13_H_
#define	_MIMO_CA_ParametersPerBoBCPerTM_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_CA_ParametersPerBoBCPerTM_r13__dmrs_Enhancements_r13 {
	MIMO_CA_ParametersPerBoBCPerTM_r13__dmrs_Enhancements_r13_different	= 0
} e_MIMO_CA_ParametersPerBoBCPerTM_r13__dmrs_Enhancements_r13;

/* Forward declarations */
struct MIMO_NonPrecodedCapabilities_r13;
struct MIMO_BeamformedCapabilityList_r13;

/* MIMO-CA-ParametersPerBoBCPerTM-r13 */
typedef struct MIMO_CA_ParametersPerBoBCPerTM_r13 {
	struct MIMO_NonPrecodedCapabilities_r13	*nonPrecoded_r13	/* OPTIONAL */;
	struct MIMO_BeamformedCapabilityList_r13	*beamformed_r13	/* OPTIONAL */;
	long	*dmrs_Enhancements_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_CA_ParametersPerBoBCPerTM_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dmrs_Enhancements_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MIMO-NonPrecodedCapabilities-r13.h"
#include "MIMO-BeamformedCapabilityList-r13.h"

#endif	/* _MIMO_CA_ParametersPerBoBCPerTM_r13_H_ */
#include <asn_internal.h>