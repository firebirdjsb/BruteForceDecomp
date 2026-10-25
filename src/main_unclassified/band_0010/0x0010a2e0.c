/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6F4946CC952FF7D69F9260284540300FBE9D6EFEDEB5A029AE1FB3713B56D38
 * Entry: 0x0010a2e0, Ghidra index: 3425, label: FUN_0010a2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <string.h>
/* Observed DWORD fields +8 and +0x24 use integer storage. At +0x10,
 * the allocated path reads a guest address; the other path uses inline data. Guest address translation and full ABI remain unverified. */
void FUN_0010a2e0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  uint32_t field_word;
  int mode;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int unaff_EDI;
  float local_8;
  float local_4;
  uint32_t packed_word;
  
  /* 0x10a2f5 compares an integer DWORD with 6. */
  mode = *(int *)(unaff_EDI + 0x84);
  if (mode == 1) {
    memcpy(&field_word,param_1 + 2,4);
  }
  if ((mode == 1) && (field_word == 6U)) {
    local_8 = *(float *)(unaff_EDI + 0x14) * 0.5 + param_2;
    fVar1 = *(float *)(unaff_EDI + 0x18) * 0.5;
  }
  else {
    /* CMP DWORD [object+0x24],8; JB selects inline +0x10. */
    memcpy(&field_word,param_1 + 9,4);
    if (field_word < 8U) {
      pfVar2 = param_1 + 4;
    }
    else {
      memcpy(&field_word,param_1 + 4,4);
      pfVar2 = (float *)(uintptr_t)field_word;
    }
    FUN_000ccae0(*(undefined4 *)(unaff_EDI + 0xf0),pfVar2,&local_8,&local_4,0,0x3f800000);
    local_8 = local_8 * 0.5 + *param_1 + param_2;
    fVar1 = local_4 * 0.5 + param_1[1];
  }
  param_3 = fVar1 + param_3;
  pfVar2 = (float *)(unaff_EDI + 0xb8);
  iVar4 = 2;
  do {
    local_4 = ((*(float *)(unaff_EDI + 0xac) - 1.0) / *pfVar2) * pfVar2[1] + 1.0;
    FUN_000b2110(pfVar2 + -2,&param_2);
    /* CMP DWORD [object+0x24],8; JB selects inline +0x10. */
    memcpy(&field_word,param_1 + 9,4);
    if (field_word < 8U) {
      pfVar3 = param_1 + 4;
    }
    else {
      memcpy(&field_word,param_1 + 4,4);
      pfVar3 = (float *)(uintptr_t)field_word;
    }
    /* 0x10a3c2..0x10a3eb assemble bytes 3,0,1,2 of the output word. */
    memcpy(&packed_word,&param_2,4);
    FUN_000ccd20(*(undefined4 *)(unaff_EDI + 0xf0),local_8,param_3,
                 (packed_word & UINT32_C(0xff000000)) |
                 ((packed_word & UINT32_C(0x000000ff)) << 16) |
                 (packed_word & UINT32_C(0x0000ff00)) |
                 ((packed_word >> 16) & UINT32_C(0xff)),pfVar3,6,local_4,0,0,
                 0xffffffff);
    pfVar2 = pfVar2 + 6;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}
