/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MeasResultServCellListSCG_r12_H_
#define	_MeasResultServCellListSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultServCellSCG_r12;

/* MeasResultServCellListSCG-r12 */
typedef struct MeasResultServCellListSCG_r12 {
	A_SEQUENCE_OF(struct MeasResultServCellSCG_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultServCellListSCG_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultServCellListSCG_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultServCellSCG-r12.h"

#endif	/* _MeasResultServCellListSCG_r12_H_ */
#include <asn_internal.h>