/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RadioResourceConfigDedicatedSCG_r12_H_
#define	_RadioResourceConfigDedicatedSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DRB_ToAddModListSCG_r12;
struct MAC_MainConfig;
struct RLF_TimersAndConstantsSCG_r12;

/* RadioResourceConfigDedicatedSCG-r12 */
typedef struct RadioResourceConfigDedicatedSCG_r12 {
	struct DRB_ToAddModListSCG_r12	*drb_ToAddModListSCG_r12	/* OPTIONAL */;
	struct MAC_MainConfig	*mac_MainConfigSCG_r12	/* OPTIONAL */;
	struct RLF_TimersAndConstantsSCG_r12	*rlf_TimersAndConstantsSCG_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicatedSCG_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedSCG_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DRB-ToAddModListSCG-r12.h"
#include "MAC-MainConfig.h"
#include "RLF-TimersAndConstantsSCG-r12.h"

#endif	/* _RadioResourceConfigDedicatedSCG_r12_H_ */
#include <asn_internal.h>