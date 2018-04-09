/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "RACH-Skip-r14.h"

static int
ul_SchedInterval_r14_10_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
ul_SchedInterval_r14_10_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
ul_SchedInterval_r14_10_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ul_SchedInterval_r14_10_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ul_SchedInterval_r14_10_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ul_SchedInterval_r14_10_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ul_SchedInterval_r14_10_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ul_SchedInterval_r14_10_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ul_SchedInterval_r14_10_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ul_SchedInterval_r14_10_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ul_SchedInterval_r14_10_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ul_SchedInterval_r14_10_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ul_SchedInterval_r14_10_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ul_SchedInterval_r14_10_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ul_SchedInterval_r14_10_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ul_SchedInterval_r14_10_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ul_SchedInterval_r14_10_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ul_SchedInterval_r14_10_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_numberOfConfUL_Processes_r14_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ul_StartSubframe_r14_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ul_Grant_r14_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_targetTA_r14_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ul_SchedInterval_r14_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_numberOfConfUL_Processes_r14_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ul_StartSubframe_r14_constr_14 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ul_Grant_r14_constr_15 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_targetTA_r14_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_Skip_r14__targetTA_r14, choice.ta0_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ta0-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_Skip_r14__targetTA_r14, choice.ptag_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ptag-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_Skip_r14__targetTA_r14, choice.pstag_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pstag-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_Skip_r14__targetTA_r14, choice.mcg_STAG_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_STAG_Id_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mcg-STAG-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_Skip_r14__targetTA_r14, choice.scg_STAG_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_STAG_Id_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"scg-STAG-r14"
		},
};
static asn_TYPE_tag2member_t asn_MAP_targetTA_r14_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ta0-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ptag-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pstag-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mcg-STAG-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* scg-STAG-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_targetTA_r14_specs_2 = {
	sizeof(struct RACH_Skip_r14__targetTA_r14),
	offsetof(struct RACH_Skip_r14__targetTA_r14, _asn_ctx),
	offsetof(struct RACH_Skip_r14__targetTA_r14, present),
	sizeof(((struct RACH_Skip_r14__targetTA_r14 *)0)->present),
	asn_MAP_targetTA_r14_tag2el_2,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_targetTA_r14_2 = {
	"targetTA-r14",
	"targetTA-r14",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_targetTA_r14_constr_2,
	asn_MBR_targetTA_r14_2,
	5,	/* Elements count */
	&asn_SPC_targetTA_r14_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_ul_SchedInterval_r14_value2enum_10[] = {
	{ 0,	3,	"sf2" },
	{ 1,	3,	"sf5" },
	{ 2,	4,	"sf10" }
};
static unsigned int asn_MAP_ul_SchedInterval_r14_enum2value_10[] = {
	2,	/* sf10(2) */
	0,	/* sf2(0) */
	1	/* sf5(1) */
};
static asn_INTEGER_specifics_t asn_SPC_ul_SchedInterval_r14_specs_10 = {
	asn_MAP_ul_SchedInterval_r14_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_SchedInterval_r14_enum2value_10,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ul_SchedInterval_r14_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_SchedInterval_r14_10 = {
	"ul-SchedInterval-r14",
	"ul-SchedInterval-r14",
	ul_SchedInterval_r14_10_free,
	ul_SchedInterval_r14_10_print,
	ul_SchedInterval_r14_10_constraint,
	ul_SchedInterval_r14_10_decode_ber,
	ul_SchedInterval_r14_10_encode_der,
	ul_SchedInterval_r14_10_decode_xer,
	ul_SchedInterval_r14_10_encode_xer,
	ul_SchedInterval_r14_10_decode_uper,
	ul_SchedInterval_r14_10_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ul_SchedInterval_r14_tags_10,
	sizeof(asn_DEF_ul_SchedInterval_r14_tags_10)
		/sizeof(asn_DEF_ul_SchedInterval_r14_tags_10[0]) - 1, /* 1 */
	asn_DEF_ul_SchedInterval_r14_tags_10,	/* Same as above */
	sizeof(asn_DEF_ul_SchedInterval_r14_tags_10)
		/sizeof(asn_DEF_ul_SchedInterval_r14_tags_10[0]), /* 2 */
	&asn_PER_type_ul_SchedInterval_r14_constr_10,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_SchedInterval_r14_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_ConfigInfo_r14_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_Skip_r14__ul_ConfigInfo_r14, numberOfConfUL_Processes_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_numberOfConfUL_Processes_r14_constraint_8,
		&asn_PER_memb_numberOfConfUL_Processes_r14_constr_9,
		0,
		"numberOfConfUL-Processes-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_Skip_r14__ul_ConfigInfo_r14, ul_SchedInterval_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_SchedInterval_r14_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-SchedInterval-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_Skip_r14__ul_ConfigInfo_r14, ul_StartSubframe_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ul_StartSubframe_r14_constraint_8,
		&asn_PER_memb_ul_StartSubframe_r14_constr_14,
		0,
		"ul-StartSubframe-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_Skip_r14__ul_ConfigInfo_r14, ul_Grant_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_ul_Grant_r14_constraint_8,
		&asn_PER_memb_ul_Grant_r14_constr_15,
		0,
		"ul-Grant-r14"
		},
};
static ber_tlv_tag_t asn_DEF_ul_ConfigInfo_r14_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ul_ConfigInfo_r14_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberOfConfUL-Processes-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-SchedInterval-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-StartSubframe-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ul-Grant-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_ConfigInfo_r14_specs_8 = {
	sizeof(struct RACH_Skip_r14__ul_ConfigInfo_r14),
	offsetof(struct RACH_Skip_r14__ul_ConfigInfo_r14, _asn_ctx),
	asn_MAP_ul_ConfigInfo_r14_tag2el_8,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_ConfigInfo_r14_8 = {
	"ul-ConfigInfo-r14",
	"ul-ConfigInfo-r14",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ul_ConfigInfo_r14_tags_8,
	sizeof(asn_DEF_ul_ConfigInfo_r14_tags_8)
		/sizeof(asn_DEF_ul_ConfigInfo_r14_tags_8[0]) - 1, /* 1 */
	asn_DEF_ul_ConfigInfo_r14_tags_8,	/* Same as above */
	sizeof(asn_DEF_ul_ConfigInfo_r14_tags_8)
		/sizeof(asn_DEF_ul_ConfigInfo_r14_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ul_ConfigInfo_r14_8,
	4,	/* Elements count */
	&asn_SPC_ul_ConfigInfo_r14_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RACH_Skip_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_Skip_r14, targetTA_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_targetTA_r14_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"targetTA-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct RACH_Skip_r14, ul_ConfigInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ul_ConfigInfo_r14_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-ConfigInfo-r14"
		},
};
static int asn_MAP_RACH_Skip_r14_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_RACH_Skip_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RACH_Skip_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetTA-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-ConfigInfo-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RACH_Skip_r14_specs_1 = {
	sizeof(struct RACH_Skip_r14),
	offsetof(struct RACH_Skip_r14, _asn_ctx),
	asn_MAP_RACH_Skip_r14_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RACH_Skip_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RACH_Skip_r14 = {
	"RACH-Skip-r14",
	"RACH-Skip-r14",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RACH_Skip_r14_tags_1,
	sizeof(asn_DEF_RACH_Skip_r14_tags_1)
		/sizeof(asn_DEF_RACH_Skip_r14_tags_1[0]), /* 1 */
	asn_DEF_RACH_Skip_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_RACH_Skip_r14_tags_1)
		/sizeof(asn_DEF_RACH_Skip_r14_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RACH_Skip_r14_1,
	2,	/* Elements count */
	&asn_SPC_RACH_Skip_r14_specs_1	/* Additional specs */
};
