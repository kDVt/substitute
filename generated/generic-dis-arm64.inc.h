/* Generated code; do not edit!
   generated by tables/gen.js from imaon2 'f0e220720bbfb8f8e00e76af56806a28fc8739a2'
   https://github.com/comex/imaon2
   arguments: '--gen-hook-disassembler --dis-pattern=P(XXX) out/out-AArch64.json'
   (fair warning: at present the main (Rust) code in that repository is barely
    started, embarrassingly so; no need to look at it ;p)
   In case it's copyrightable in any way, consider the generated code in the
   public domain.
*/

/* adrlabel_label_unk_Xd_1_ADR: ADR */
/* adrplabel_label_unk_Xd_1_ADRP: ADRP */
/* am_b_target_addr_B_1_B: B */
/* am_bl_target_addr_1_BL: BL */
/* GPR64_Rn_2_BLR: BLR, RET */
/* ccode_cond_am_brcond_target_B_1_Bcc: Bcc */
/* am_brcond_target_B_4_CBNZW: CBNZW, CBNZX, CBZW, CBZX */
/* am_ldrlit_label_unk_Rt_6_LDRDl: LDRDl, LDRQl, LDRSWl, LDRSl, LDRWl, LDRXl */
/* am_tbrcond_target_B_4_TBNZW: TBNZW, TBNZX, TBZW, TBZX */
    switch ((op >> 29) & 0x7) {
    case 0: {
        switch ((op >> 26) & 0x3) {
        case 0: {
            if ((op & 0x9f000000) == 0x10000000) {
                insn_adrlabel_label_unk_Xd_1_ADR:;
                struct bitslice Xd = {.nruns = 1, .runs = (struct bitslice_run[]) {{0,0,5}}};
                struct bitslice label = {.nruns = 2, .runs = (struct bitslice_run[]) {{5,2,19}, {29,0,2}}};
                return P(adrlabel_label_unk_Xd_1_ADR)(ctx, Xd, label); /* 0x10000000 | 0x60ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 1: {
            if ((op & 0xfc000000) == 0x14000000) {
                struct bitslice addr = {.nruns = 1, .runs = (struct bitslice_run[]) {{0,0,26}}};
                return P(am_b_target_addr_B_1_B)(ctx, addr); /* 0x14000000 | 0x03ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 2:
        case 3: {
            if ((op & 0xbb000000) == 0x18000000) {
                insn_am_ldrlit_label_unk_Rt_6_LDRDl:;
                struct bitslice Rt = {.nruns = 1, .runs = (struct bitslice_run[]) {{0,0,5}}};
                struct bitslice label = {.nruns = 1, .runs = (struct bitslice_run[]) {{5,0,19}}};
                return P(am_ldrlit_label_unk_Rt_6_LDRDl)(ctx, Rt, label); /* 0x18000000 | 0x44ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        }
    }
    case 1: {
        switch ((op >> 25) & 0x3) {
        case 0: {
            if ((op & 0x9f000000) == 0x10000000) {
                goto insn_adrlabel_label_unk_Xd_1_ADR; /* 0x10000000 | 0x60ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 1:
            return P(unidentified)(ctx);
        case 2: {
            if ((op & 0x7e000000) == 0x34000000) {
                insn_am_brcond_target_B_4_CBNZW:;
                struct bitslice target = {.nruns = 1, .runs = (struct bitslice_run[]) {{5,0,19}}};
                return P(am_brcond_target_B_4_CBNZW)(ctx, target); /* 0x34000000 | 0x81ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 3: {
            if ((op & 0x7e000000) == 0x36000000) {
                insn_am_tbrcond_target_B_4_TBNZW:;
                struct bitslice target = {.nruns = 1, .runs = (struct bitslice_run[]) {{5,0,14}}};
                return P(am_tbrcond_target_B_4_TBNZW)(ctx, target); /* 0x36000000 | 0x81ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        }
    }
    case 2: {
        switch ((op >> 26) & 0x3) {
        case 0: {
            if ((op & 0x9f000000) == 0x10000000) {
                goto insn_adrlabel_label_unk_Xd_1_ADR; /* 0x10000000 | 0x60ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 1: {
            if ((op & 0xff000010) == 0x54000000) {
                struct bitslice cond = {.nruns = 1, .runs = (struct bitslice_run[]) {{0,0,4}}};
                struct bitslice target = {.nruns = 1, .runs = (struct bitslice_run[]) {{5,0,19}}};
                return P(ccode_cond_am_brcond_target_B_1_Bcc)(ctx, cond, target); /* 0x54000000 | 0x00ffffef */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 2:
        case 3: {
            if ((op & 0xbb000000) == 0x18000000) {
                goto insn_am_ldrlit_label_unk_Rt_6_LDRDl; /* 0x18000000 | 0x44ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        }
    }
    case 3: {
        if ((op & 0x9f000000) == 0x10000000) {
            goto insn_adrlabel_label_unk_Xd_1_ADR; /* 0x10000000 | 0x60ffffff */
        } else {
            return P(unidentified)(ctx);
        }
    }
    case 4: {
        switch ((op >> 26) & 0x3) {
        case 0: {
            if ((op & 0x9f000000) == 0x90000000) {
                insn_adrplabel_label_unk_Xd_1_ADRP:;
                struct bitslice Xd = {.nruns = 1, .runs = (struct bitslice_run[]) {{0,0,5}}};
                struct bitslice label = {.nruns = 2, .runs = (struct bitslice_run[]) {{5,2,19}, {29,0,2}}};
                return P(adrplabel_label_unk_Xd_1_ADRP)(ctx, Xd, label); /* 0x90000000 | 0x60ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 1: {
            if ((op & 0xfc000000) == 0x94000000) {
                struct bitslice addr = {.nruns = 1, .runs = (struct bitslice_run[]) {{0,0,26}}};
                return P(am_bl_target_addr_1_BL)(ctx, addr); /* 0x94000000 | 0x03ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 2:
        case 3: {
            if ((op & 0xfb000000) == 0x98000000) {
                goto insn_am_ldrlit_label_unk_Rt_6_LDRDl; /* 0x98000000 | 0x04ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        }
    }
    case 5: {
        switch ((op >> 25) & 0x3) {
        case 0: {
            if ((op & 0x9f000000) == 0x90000000) {
                goto insn_adrplabel_label_unk_Xd_1_ADRP; /* 0x90000000 | 0x60ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 1:
            return P(unidentified)(ctx);
        case 2: {
            if ((op & 0x7e000000) == 0x34000000) {
                goto insn_am_brcond_target_B_4_CBNZW; /* 0x34000000 | 0x81ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 3: {
            if ((op & 0x7e000000) == 0x36000000) {
                goto insn_am_tbrcond_target_B_4_TBNZW; /* 0x36000000 | 0x81ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        }
    }
    case 6: {
        switch ((op >> 22) & 0xf) {
        case 0:
        case 1:
        case 2:
        case 3: {
            if ((op & 0x9f000000) == 0x90000000) {
                goto insn_adrplabel_label_unk_Xd_1_ADRP; /* 0x90000000 | 0x60ffffff */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 4:
        case 5:
        case 6:
        case 7:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            return P(unidentified)(ctx);
        case 8: {
            if ((op & 0xfffffc1f) == 0xd63f0000) {
                insn_GPR64_Rn_2_BLR:;
                struct bitslice Rn = {.nruns = 1, .runs = (struct bitslice_run[]) {{5,0,5}}};
                return P(GPR64_Rn_2_BLR)(ctx, Rn); /* 0xd63f0000 | 0x000003e0 */
            } else {
                return P(unidentified)(ctx);
            }
        }
        case 9: {
#ifdef __arm64e__
            if ((op & 0xfffffc1f) == 0xd65f0000 || (op & 0xfffffbff) == 0xd65f0bff) {
#else
            if ((op & 0xfffffc1f) == 0xd65f0000) {
#endif
                goto insn_GPR64_Rn_2_BLR; /* 0xd65f0000 | 0x000003e0 */
            } else {
                return P(unidentified)(ctx);
            }
        }
        }
    }
    case 7: {
        if ((op & 0x9f000000) == 0x90000000) {
            goto insn_adrplabel_label_unk_Xd_1_ADRP; /* 0x90000000 | 0x60ffffff */
        } else {
            return P(unidentified)(ctx);
        }
    }
    }
/*
static INLINE tdis_ret P(GPR64_Rn_2_BLR)(struct bitslice ctx, struct bitslice Rn) {}
static INLINE tdis_ret P(adrlabel_label_unk_Xd_1_ADR)(struct bitslice ctx, struct bitslice Xd, struct bitslice label) {}
static INLINE tdis_ret P(adrplabel_label_unk_Xd_1_ADRP)(struct bitslice ctx, struct bitslice Xd, struct bitslice label) {}
static INLINE tdis_ret P(am_b_target_addr_B_1_B)(struct bitslice ctx, struct bitslice addr) {}
static INLINE tdis_ret P(am_bl_target_addr_1_BL)(struct bitslice ctx, struct bitslice addr) {}
static INLINE tdis_ret P(am_brcond_target_B_4_CBNZW)(struct bitslice ctx, struct bitslice target) {}
static INLINE tdis_ret P(am_ldrlit_label_unk_Rt_6_LDRDl)(struct bitslice ctx, struct bitslice Rt, struct bitslice label) {}
static INLINE tdis_ret P(am_tbrcond_target_B_4_TBNZW)(struct bitslice ctx, struct bitslice target) {}
static INLINE tdis_ret P(ccode_cond_am_brcond_target_B_1_Bcc)(struct bitslice ctx, struct bitslice cond, struct bitslice target) {}
*/

