/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SC_MTCH_Info_r13_H_
#define	_SC_MTCH_Info_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMSSessionInfo-r13.h"
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SC_MTCH_Info_r13__p_a_r13 {
	SC_MTCH_Info_r13__p_a_r13_dB_6	= 0,
	SC_MTCH_Info_r13__p_a_r13_dB_4dot77	= 1,
	SC_MTCH_Info_r13__p_a_r13_dB_3	= 2,
	SC_MTCH_Info_r13__p_a_r13_dB_1dot77	= 3,
	SC_MTCH_Info_r13__p_a_r13_dB0	= 4,
	SC_MTCH_Info_r13__p_a_r13_dB1	= 5,
	SC_MTCH_Info_r13__p_a_r13_dB2	= 6,
	SC_MTCH_Info_r13__p_a_r13_dB3	= 7
} e_SC_MTCH_Info_r13__p_a_r13;

/* Forward declarations */
struct SC_MTCH_SchedulingInfo_r13;

/* SC-MTCH-Info-r13 */
typedef struct SC_MTCH_Info_r13 {
	MBMSSessionInfo_r13_t	 mbmsSessionInfo_r13;
	BIT_STRING_t	 g_RNTI_r13;
	struct SC_MTCH_SchedulingInfo_r13	*sc_mtch_schedulingInfo_r13	/* OPTIONAL */;
	BIT_STRING_t	*sc_mtch_neighbourCell_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*p_a_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SC_MTCH_Info_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_p_a_r13_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SC_MTCH_Info_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SC-MTCH-SchedulingInfo-r13.h"

#endif	/* _SC_MTCH_Info_r13_H_ */
#include <asn_internal.h>