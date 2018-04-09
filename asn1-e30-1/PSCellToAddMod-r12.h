/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PSCellToAddMod_r12_H_
#define	_PSCellToAddMod_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCellIndex-r10.h"
#include "SCellIndex-r13.h"
#include "PhysCellId.h"
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioResourceConfigCommonPSCell_r12;
struct RadioResourceConfigDedicatedPSCell_r12;
struct AntennaInfoDedicated_v10i0;

/* PSCellToAddMod-r12 */
typedef struct PSCellToAddMod_r12 {
	SCellIndex_r10_t	 sCellIndex_r12;
	struct PSCellToAddMod_r12__cellIdentification_r12 {
		PhysCellId_t	 physCellId_r12;
		ARFCN_ValueEUTRA_r9_t	 dl_CarrierFreq_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellIdentification_r12;
	struct RadioResourceConfigCommonPSCell_r12	*radioResourceConfigCommonPSCell_r12	/* OPTIONAL */;
	struct RadioResourceConfigDedicatedPSCell_r12	*radioResourceConfigDedicatedPSCell_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct AntennaInfoDedicated_v10i0	*antennaInfoDedicatedPSCell_v1280	/* OPTIONAL */;
	SCellIndex_r13_t	*sCellIndex_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PSCellToAddMod_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PSCellToAddMod_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioResourceConfigCommonPSCell-r12.h"
#include "RadioResourceConfigDedicatedPSCell-r12.h"
#include "AntennaInfoDedicated-v10i0.h"

#endif	/* _PSCellToAddMod_r12_H_ */
#include <asn_internal.h>