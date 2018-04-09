/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UplinkPowerControlCommon_H_
#define	_UplinkPowerControlCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "Alpha-r12.h"
#include "DeltaFList-PUCCH.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UplinkPowerControlCommon */
typedef struct UplinkPowerControlCommon {
	long	 p0_NominalPUSCH;
	Alpha_r12_t	 alpha;
	long	 p0_NominalPUCCH;
	DeltaFList_PUCCH_t	 deltaFList_PUCCH;
	long	 deltaPreambleMsg3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommon;

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlCommon_H_ */
#include <asn_internal.h>