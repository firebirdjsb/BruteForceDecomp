/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36F3F1DC6AA7C344B760AF839663E09E7C84AA83114C0C4F7F816AD52682F0A5
 * Entry: 0x002dc0b0, Ghidra index: 10297, label: FUN_002dc0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dc0b0(float param_1)

{
  int iVar1;
  int unaff_ESI;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(unaff_ESI + 0x68);
  if (iVar1 != 0) {
    local_10 = *(float *)(unaff_ESI + 0xb0) * *(float *)(iVar1 + 0x34);
    local_4 = 0;
    local_c = *(float *)(unaff_ESI + 0xb4) * *(float *)(iVar1 + 0x38);
    local_8 = *(float *)(unaff_ESI + 0xb8) * *(float *)(iVar1 + 0x3c);
    FUN_002b8d10(iVar1 + 0x7c,&local_10,-param_1);
    FUN_002b8d10(iVar1 + 0x8c,unaff_ESI,-(*(float *)(iVar1 + 0x40) * param_1));
  }
  iVar1 = *(int *)(unaff_ESI + 0x6c);
  if (iVar1 != 0) {
    local_10 = *(float *)(unaff_ESI + 0xc0) * *(float *)(iVar1 + 0x34);
    local_c = *(float *)(unaff_ESI + 0xc4) * *(float *)(iVar1 + 0x38);
    local_4 = 0;
    local_8 = *(float *)(unaff_ESI + 200) * *(float *)(iVar1 + 0x3c);
    FUN_002b8d10(iVar1 + 0x7c,&local_10,param_1);
    FUN_002b8d10(iVar1 + 0x8c,unaff_ESI,*(float *)(iVar1 + 0x40) * param_1);
  }
  return;
}
