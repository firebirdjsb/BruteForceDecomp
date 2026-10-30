/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CBD57B598B8C4730132A17C9A9F6E7CAF979EB2C745CBC2A552A0D9847F0A03
 * Entry: 0x002c2800, Ghidra index: 10041, label: FUN_002c2800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c2800(float param_1)

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
    FUN_002b8d10(iVar1 + 0x9c,&local_10,-param_1);
    FUN_002b8d10(iVar1 + 0xac,unaff_ESI,-(*(float *)(iVar1 + 0x40) * param_1));
  }
  iVar1 = *(int *)(unaff_ESI + 0x6c);
  if (iVar1 != 0) {
    local_10 = *(float *)(unaff_ESI + 0xc0) * *(float *)(iVar1 + 0x34);
    local_c = *(float *)(unaff_ESI + 0xc4) * *(float *)(iVar1 + 0x38);
    local_4 = 0;
    local_8 = *(float *)(unaff_ESI + 200) * *(float *)(iVar1 + 0x3c);
    FUN_002b8d10(iVar1 + 0x9c,&local_10,param_1);
    FUN_002b8d10(iVar1 + 0xac,unaff_ESI,*(float *)(iVar1 + 0x40) * param_1);
  }
  return;
}
