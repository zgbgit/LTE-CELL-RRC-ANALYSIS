/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SystemInformationBlockType9_H_
#define	_SystemInformationBlockType9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInformationBlockType9 */
typedef struct SystemInformationBlockType9 {
	OCTET_STRING_t	*hnb_Name	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType9;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType9_H_ */
#include <asn_internal.h>