/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_CSI_RS_ConfigZP_ApList_r14_H_
#define	_CSI_RS_ConfigZP_ApList_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_ConfigZP_ApList_r14_PR {
	CSI_RS_ConfigZP_ApList_r14_PR_NOTHING,	/* No components present */
	CSI_RS_ConfigZP_ApList_r14_PR_release,
	CSI_RS_ConfigZP_ApList_r14_PR_setup
} CSI_RS_ConfigZP_ApList_r14_PR;

/* Forward declarations */
struct CSI_RS_ConfigZP_r11;

/* CSI-RS-ConfigZP-ApList-r14 */
typedef struct CSI_RS_ConfigZP_ApList_r14 {
	CSI_RS_ConfigZP_ApList_r14_PR present;
	union CSI_RS_ConfigZP_ApList_r14_u {
		NULL_t	 release;
		struct CSI_RS_ConfigZP_ApList_r14__setup {
			A_SEQUENCE_OF(struct CSI_RS_ConfigZP_r11) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigZP_ApList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigZP_ApList_r14;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CSI-RS-ConfigZP-r11.h"

#endif	/* _CSI_RS_ConfigZP_ApList_r14_H_ */
#include <asn_internal.h>