/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-e30.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "PowerRampingParameters.h"

static int
powerRampingStep_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
powerRampingStep_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
powerRampingStep_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	powerRampingStep_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
powerRampingStep_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	powerRampingStep_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
powerRampingStep_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	powerRampingStep_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
powerRampingStep_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	powerRampingStep_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
powerRampingStep_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	powerRampingStep_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
powerRampingStep_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	powerRampingStep_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
powerRampingStep_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	powerRampingStep_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
powerRampingStep_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	powerRampingStep_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
preambleInitialReceivedTargetPower_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
preambleInitialReceivedTargetPower_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
preambleInitialReceivedTargetPower_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	preambleInitialReceivedTargetPower_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
preambleInitialReceivedTargetPower_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	preambleInitialReceivedTargetPower_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
preambleInitialReceivedTargetPower_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	preambleInitialReceivedTargetPower_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
preambleInitialReceivedTargetPower_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	preambleInitialReceivedTargetPower_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
preambleInitialReceivedTargetPower_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	preambleInitialReceivedTargetPower_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
preambleInitialReceivedTargetPower_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	preambleInitialReceivedTargetPower_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
preambleInitialReceivedTargetPower_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	preambleInitialReceivedTargetPower_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
preambleInitialReceivedTargetPower_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	preambleInitialReceivedTargetPower_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_powerRampingStep_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_preambleInitialReceivedTargetPower_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_powerRampingStep_value2enum_2[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB2" },
	{ 2,	3,	"dB4" },
	{ 3,	3,	"dB6" }
};
static unsigned int asn_MAP_powerRampingStep_enum2value_2[] = {
	0,	/* dB0(0) */
	1,	/* dB2(1) */
	2,	/* dB4(2) */
	3	/* dB6(3) */
};
static asn_INTEGER_specifics_t asn_SPC_powerRampingStep_specs_2 = {
	asn_MAP_powerRampingStep_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_powerRampingStep_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_powerRampingStep_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_powerRampingStep_2 = {
	"powerRampingStep",
	"powerRampingStep",
	powerRampingStep_2_free,
	powerRampingStep_2_print,
	powerRampingStep_2_constraint,
	powerRampingStep_2_decode_ber,
	powerRampingStep_2_encode_der,
	powerRampingStep_2_decode_xer,
	powerRampingStep_2_encode_xer,
	powerRampingStep_2_decode_uper,
	powerRampingStep_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_powerRampingStep_tags_2,
	sizeof(asn_DEF_powerRampingStep_tags_2)
		/sizeof(asn_DEF_powerRampingStep_tags_2[0]) - 1, /* 1 */
	asn_DEF_powerRampingStep_tags_2,	/* Same as above */
	sizeof(asn_DEF_powerRampingStep_tags_2)
		/sizeof(asn_DEF_powerRampingStep_tags_2[0]), /* 2 */
	&asn_PER_type_powerRampingStep_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_powerRampingStep_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_preambleInitialReceivedTargetPower_value2enum_7[] = {
	{ 0,	7,	"dBm-120" },
	{ 1,	7,	"dBm-118" },
	{ 2,	7,	"dBm-116" },
	{ 3,	7,	"dBm-114" },
	{ 4,	7,	"dBm-112" },
	{ 5,	7,	"dBm-110" },
	{ 6,	7,	"dBm-108" },
	{ 7,	7,	"dBm-106" },
	{ 8,	7,	"dBm-104" },
	{ 9,	7,	"dBm-102" },
	{ 10,	7,	"dBm-100" },
	{ 11,	6,	"dBm-98" },
	{ 12,	6,	"dBm-96" },
	{ 13,	6,	"dBm-94" },
	{ 14,	6,	"dBm-92" },
	{ 15,	6,	"dBm-90" }
};
static unsigned int asn_MAP_preambleInitialReceivedTargetPower_enum2value_7[] = {
	10,	/* dBm-100(10) */
	9,	/* dBm-102(9) */
	8,	/* dBm-104(8) */
	7,	/* dBm-106(7) */
	6,	/* dBm-108(6) */
	5,	/* dBm-110(5) */
	4,	/* dBm-112(4) */
	3,	/* dBm-114(3) */
	2,	/* dBm-116(2) */
	1,	/* dBm-118(1) */
	0,	/* dBm-120(0) */
	15,	/* dBm-90(15) */
	14,	/* dBm-92(14) */
	13,	/* dBm-94(13) */
	12,	/* dBm-96(12) */
	11	/* dBm-98(11) */
};
static asn_INTEGER_specifics_t asn_SPC_preambleInitialReceivedTargetPower_specs_7 = {
	asn_MAP_preambleInitialReceivedTargetPower_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_preambleInitialReceivedTargetPower_enum2value_7,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_preambleInitialReceivedTargetPower_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preambleInitialReceivedTargetPower_7 = {
	"preambleInitialReceivedTargetPower",
	"preambleInitialReceivedTargetPower",
	preambleInitialReceivedTargetPower_7_free,
	preambleInitialReceivedTargetPower_7_print,
	preambleInitialReceivedTargetPower_7_constraint,
	preambleInitialReceivedTargetPower_7_decode_ber,
	preambleInitialReceivedTargetPower_7_encode_der,
	preambleInitialReceivedTargetPower_7_decode_xer,
	preambleInitialReceivedTargetPower_7_encode_xer,
	preambleInitialReceivedTargetPower_7_decode_uper,
	preambleInitialReceivedTargetPower_7_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_preambleInitialReceivedTargetPower_tags_7,
	sizeof(asn_DEF_preambleInitialReceivedTargetPower_tags_7)
		/sizeof(asn_DEF_preambleInitialReceivedTargetPower_tags_7[0]) - 1, /* 1 */
	asn_DEF_preambleInitialReceivedTargetPower_tags_7,	/* Same as above */
	sizeof(asn_DEF_preambleInitialReceivedTargetPower_tags_7)
		/sizeof(asn_DEF_preambleInitialReceivedTargetPower_tags_7[0]), /* 2 */
	&asn_PER_type_preambleInitialReceivedTargetPower_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_preambleInitialReceivedTargetPower_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PowerRampingParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PowerRampingParameters, powerRampingStep),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_powerRampingStep_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"powerRampingStep"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PowerRampingParameters, preambleInitialReceivedTargetPower),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_preambleInitialReceivedTargetPower_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preambleInitialReceivedTargetPower"
		},
};
static ber_tlv_tag_t asn_DEF_PowerRampingParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PowerRampingParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* powerRampingStep */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* preambleInitialReceivedTargetPower */
};
static asn_SEQUENCE_specifics_t asn_SPC_PowerRampingParameters_specs_1 = {
	sizeof(struct PowerRampingParameters),
	offsetof(struct PowerRampingParameters, _asn_ctx),
	asn_MAP_PowerRampingParameters_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PowerRampingParameters = {
	"PowerRampingParameters",
	"PowerRampingParameters",
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
	asn_DEF_PowerRampingParameters_tags_1,
	sizeof(asn_DEF_PowerRampingParameters_tags_1)
		/sizeof(asn_DEF_PowerRampingParameters_tags_1[0]), /* 1 */
	asn_DEF_PowerRampingParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_PowerRampingParameters_tags_1)
		/sizeof(asn_DEF_PowerRampingParameters_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PowerRampingParameters_1,
	2,	/* Elements count */
	&asn_SPC_PowerRampingParameters_specs_1	/* Additional specs */
};
