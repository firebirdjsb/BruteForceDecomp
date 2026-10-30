/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4118AFF82E82E0EFA0C4F30D8DCD2D7E9C7442BA4BA1FE632C6945B449429F1
 * Entry: 0x002ec6bb, Ghidra index: 10660, label: FUN_002ec6bb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_003b6df8;
extern uint32_t _DAT_003b6e08;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_002ec6bb(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  uint64_t guest_mantissa_bits; /* bitwise IEEE-754 storage at original [EBP-0x10] */
  int local_c;
  uint local_8;
  
  uVar5 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar5;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_002ecc14(1);
    uVar5 = param_1 & 0x17;
    goto LAB_002ec884;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_002ecc14(4);
    uVar5 = param_1 & 0x1b;
    goto LAB_002ec884;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar6 = (param_1 & 0x10) != 0;
      if (*param_2 != 0.0) {
        fVar7 = (float10)FUN_002ecb23(*param_2,&local_c);
        local_c = local_c + -0x600;
        if (local_c < -0x432) {
          fVar8 = fVar7 * (float10)0.0;
          bVar6 = bVar3;
        }
        else {
          /* Original FST QWORD [EBP-0x10], then MOV WORD [EBP-0x0A],AX:
           * keep the double's bits; this is NOT an integer-to-double conversion. */
          double guest_double_value = (double)fVar7;
          memcpy(&guest_mantissa_bits,&guest_double_value,sizeof(guest_mantissa_bits));
          guest_mantissa_bits =
              (guest_mantissa_bits & UINT64_C(0x000fffffffffffff)) |
               UINT64_C(0x0010000000000000);
          if (local_c < -0x3fd) {
            local_c = -0x3fd - local_c;
            do {
              if (((guest_mantissa_bits & UINT64_C(1)) != 0) && (!bVar6)) {
                bVar6 = bVar3;
              }
              /* Original SHR DWORD [EBP-0x10],1; TEST BYTE [EBP-0x0C],1;
               * OR BYTE [EBP-0x0D],0x80; SHR DWORD [EBP-0x0C],1.
               * These are two separate 32-bit shifts with the high-word low
               * bit explicitly carried into bit 31 of the low word. */
              uint32_t low_word = (uint32_t)guest_mantissa_bits;
              uint32_t high_word = (uint32_t)(guest_mantissa_bits >> 32);
              low_word = (low_word >> 1) | ((high_word & 1u) << 31);
              high_word >>= 1;
              guest_mantissa_bits = ((uint64_t)high_word << 32) | low_word;
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          double guest_shifted_double;
          memcpy(&guest_shifted_double,&guest_mantissa_bits,sizeof(guest_shifted_double));
          fVar8 = (float10)guest_shifted_double;
          if (fVar7 < (float10)0.0) {
            fVar8 = -fVar8;
          }
        }
        *param_2 = (double)fVar8;
        bVar3 = bVar6;
      }
      if (bVar3) {
        FUN_002ecc14(0x10);
      }
      uVar5 = local_8 & 0xfffffffd;
      local_8 = uVar5;
    }
    goto LAB_002ec884;
  }
  FUN_002ecc14(8);
  uVar5 = param_3 & 0xc00;
  dVar2 = _DAT_003b6df8;
  dVar4 = _DAT_003b6df8;
  if (uVar5 == 0) {
    dVar1 = *param_2;
joined_r0x002ec765:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar4;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar5 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_003b6e08;
      goto joined_r0x002ec765;
    }
    dVar4 = _DAT_003b6e08;
    if (uVar5 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x002ec765;
    }
    if (uVar5 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_003b6e08;
      goto joined_r0x002ec765;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_002ec884:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_002ecc14(0x20);
    uVar5 = uVar5 & 0xffffffef;
  }
  return uVar5 == 0;
}
