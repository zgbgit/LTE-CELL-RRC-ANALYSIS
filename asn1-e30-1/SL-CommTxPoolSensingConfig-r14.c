/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "SL-CommTxPoolSensingConfig-r14.h"

static int
probResourceKeep_r14_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
probResourceKeep_r14_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
probResourceKeep_r14_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	probResourceKeep_r14_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
probResourceKeep_r14_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	probResourceKeep_r14_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
probResourceKeep_r14_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	probResourceKeep_r14_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
probResourceKeep_r14_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	probResourceKeep_r14_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
probResourceKeep_r14_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	probResourceKeep_r14_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
probResourceKeep_r14_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	probResourceKeep_r14_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
probResourceKeep_r14_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	probResourceKeep_r14_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
probResourceKeep_r14_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	probResourceKeep_r14_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_minNumCandidateSF_r14_constraint_14(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 13)) {
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
memb_gapCandidateSensing_r14_constraint_14(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 10)) {
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
sl_ReselectAfter_r14_17_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
sl_ReselectAfter_r14_17_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
sl_ReselectAfter_r14_17_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	sl_ReselectAfter_r14_17_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
sl_ReselectAfter_r14_17_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	sl_ReselectAfter_r14_17_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
sl_ReselectAfter_r14_17_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	sl_ReselectAfter_r14_17_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
sl_ReselectAfter_r14_17_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	sl_ReselectAfter_r14_17_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
sl_ReselectAfter_r14_17_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	sl_ReselectAfter_r14_17_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
sl_ReselectAfter_r14_17_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	sl_ReselectAfter_r14_17_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
sl_ReselectAfter_r14_17_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	sl_ReselectAfter_r14_17_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
sl_ReselectAfter_r14_17_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	sl_ReselectAfter_r14_17_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_probResourceKeep_r14_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_minNumCandidateSF_r14_constr_15 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  13 }	/* (1..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_gapCandidateSensing_r14_constr_16 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sl_ReselectAfter_r14_constr_17 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_probResourceKeep_r14_value2enum_5[] = {
	{ 0,	2,	"v0" },
	{ 1,	6,	"v0dot2" },
	{ 2,	6,	"v0dot4" },
	{ 3,	6,	"v0dot6" },
	{ 4,	6,	"v0dot8" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static unsigned int asn_MAP_probResourceKeep_r14_enum2value_5[] = {
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	0,	/* v0(0) */
	1,	/* v0dot2(1) */
	2,	/* v0dot4(2) */
	3,	/* v0dot6(3) */
	4	/* v0dot8(4) */
};
static asn_INTEGER_specifics_t asn_SPC_probResourceKeep_r14_specs_5 = {
	asn_MAP_probResourceKeep_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_probResourceKeep_r14_enum2value_5,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_probResourceKeep_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_probResourceKeep_r14_5 = {
	"probResourceKeep-r14",
	"probResourceKeep-r14",
	probResourceKeep_r14_5_free,
	probResourceKeep_r14_5_print,
	probResourceKeep_r14_5_constraint,
	probResourceKeep_r14_5_decode_ber,
	probResourceKeep_r14_5_encode_der,
	probResourceKeep_r14_5_decode_xer,
	probResourceKeep_r14_5_encode_xer,
	probResourceKeep_r14_5_decode_uper,
	probResourceKeep_r14_5_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_probResourceKeep_r14_tags_5,
	sizeof(asn_DEF_probResourceKeep_r14_tags_5)
		/sizeof(asn_DEF_probResourceKeep_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_probResourceKeep_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_probResourceKeep_r14_tags_5)
		/sizeof(asn_DEF_probResourceKeep_r14_tags_5[0]), /* 2 */
	&asn_PER_type_probResourceKeep_r14_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_probResourceKeep_r14_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_p2x_SensingConfig_r14_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolSensingConfig_r14__p2x_SensingConfig_r14, minNumCandidateSF_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_minNumCandidateSF_r14_constraint_14,
		&asn_PER_memb_minNumCandidateSF_r14_constr_15,
		0,
		"minNumCandidateSF-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolSensingConfig_r14__p2x_SensingConfig_r14, gapCandidateSensing_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_gapCandidateSensing_r14_constraint_14,
		&asn_PER_memb_gapCandidateSensing_r14_constr_16,
		0,
		"gapCandidateSensing-r14"
		},
};
static ber_tlv_tag_t asn_DEF_p2x_SensingConfig_r14_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_p2x_SensingConfig_r14_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* minNumCandidateSF-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gapCandidateSensing-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_p2x_SensingConfig_r14_specs_14 = {
	sizeof(struct SL_CommTxPoolSensingConfig_r14__p2x_SensingConfig_r14),
	offsetof(struct SL_CommTxPoolSensingConfig_r14__p2x_SensingConfig_r14, _asn_ctx),
	asn_MAP_p2x_SensingConfig_r14_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_p2x_SensingConfig_r14_14 = {
	"p2x-SensingConfig-r14",
	"p2x-SensingConfig-r14",
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
	asn_DEF_p2x_SensingConfig_r14_tags_14,
	sizeof(asn_DEF_p2x_SensingConfig_r14_tags_14)
		/sizeof(asn_DEF_p2x_SensingConfig_r14_tags_14[0]) - 1, /* 1 */
	asn_DEF_p2x_SensingConfig_r14_tags_14,	/* Same as above */
	sizeof(asn_DEF_p2x_SensingConfig_r14_tags_14)
		/sizeof(asn_DEF_p2x_SensingConfig_r14_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_p2x_SensingConfig_r14_14,
	2,	/* Elements count */
	&asn_SPC_p2x_SensingConfig_r14_specs_14	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_sl_ReselectAfter_r14_value2enum_17[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n7" },
	{ 7,	2,	"n8" },
	{ 8,	2,	"n9" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static unsigned int asn_MAP_sl_ReselectAfter_r14_enum2value_17[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6,	/* n7(6) */
	7,	/* n8(7) */
	8,	/* n9(8) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9	/* spare7(9) */
};
static asn_INTEGER_specifics_t asn_SPC_sl_ReselectAfter_r14_specs_17 = {
	asn_MAP_sl_ReselectAfter_r14_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_ReselectAfter_r14_enum2value_17,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_sl_ReselectAfter_r14_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_ReselectAfter_r14_17 = {
	"sl-ReselectAfter-r14",
	"sl-ReselectAfter-r14",
	sl_ReselectAfter_r14_17_free,
	sl_ReselectAfter_r14_17_print,
	sl_ReselectAfter_r14_17_constraint,
	sl_ReselectAfter_r14_17_decode_ber,
	sl_ReselectAfter_r14_17_encode_der,
	sl_ReselectAfter_r14_17_decode_xer,
	sl_ReselectAfter_r14_17_encode_xer,
	sl_ReselectAfter_r14_17_decode_uper,
	sl_ReselectAfter_r14_17_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_sl_ReselectAfter_r14_tags_17,
	sizeof(asn_DEF_sl_ReselectAfter_r14_tags_17)
		/sizeof(asn_DEF_sl_ReselectAfter_r14_tags_17[0]) - 1, /* 1 */
	asn_DEF_sl_ReselectAfter_r14_tags_17,	/* Same as above */
	sizeof(asn_DEF_sl_ReselectAfter_r14_tags_17)
		/sizeof(asn_DEF_sl_ReselectAfter_r14_tags_17[0]), /* 2 */
	&asn_PER_type_sl_ReselectAfter_r14_constr_17,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_ReselectAfter_r14_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SL_CommTxPoolSensingConfig_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolSensingConfig_r14, pssch_TxConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PSSCH_TxConfigList_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pssch-TxConfigList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolSensingConfig_r14, thresPSSCH_RSRP_List_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_ThresPSSCH_RSRP_List_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"thresPSSCH-RSRP-List-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_CommTxPoolSensingConfig_r14, restrictResourceReservationPeriod_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_RestrictResourceReservationPeriodList_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"restrictResourceReservationPeriod-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolSensingConfig_r14, probResourceKeep_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_probResourceKeep_r14_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"probResourceKeep-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_CommTxPoolSensingConfig_r14, p2x_SensingConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_p2x_SensingConfig_r14_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"p2x-SensingConfig-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_CommTxPoolSensingConfig_r14, sl_ReselectAfter_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_ReselectAfter_r14_17,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sl-ReselectAfter-r14"
		},
};
static int asn_MAP_SL_CommTxPoolSensingConfig_r14_oms_1[] = { 2, 4, 5 };
static ber_tlv_tag_t asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SL_CommTxPoolSensingConfig_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pssch-TxConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* thresPSSCH-RSRP-List-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* restrictResourceReservationPeriod-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* probResourceKeep-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* p2x-SensingConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* sl-ReselectAfter-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SL_CommTxPoolSensingConfig_r14_specs_1 = {
	sizeof(struct SL_CommTxPoolSensingConfig_r14),
	offsetof(struct SL_CommTxPoolSensingConfig_r14, _asn_ctx),
	asn_MAP_SL_CommTxPoolSensingConfig_r14_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SL_CommTxPoolSensingConfig_r14_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SL_CommTxPoolSensingConfig_r14 = {
	"SL-CommTxPoolSensingConfig-r14",
	"SL-CommTxPoolSensingConfig-r14",
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
	asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1,
	sizeof(asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1)
		/sizeof(asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1)
		/sizeof(asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SL_CommTxPoolSensingConfig_r14_1,
	6,	/* Elements count */
	&asn_SPC_SL_CommTxPoolSensingConfig_r14_specs_1	/* Additional specs */
};
