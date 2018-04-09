/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1430_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1430;
struct MMTEL_Parameters_r14;

/* UE-EUTRA-CapabilityAddXDD-Mode-v1430 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1430 {
	struct PhyLayerParameters_v1430	*phyLayerParameters_v1430	/* OPTIONAL */;
	struct MMTEL_Parameters_r14	*mmtel_Parameters_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1430;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-v1430.h"
#include "MMTEL-Parameters-r14.h"

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1430_H_ */
#include <asn_internal.h>