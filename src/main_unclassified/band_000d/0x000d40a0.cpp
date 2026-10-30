/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EA4D3B61B32028107E5B7A4CC67B0F12FC95438E4DB2FF4371DDEF2AAE8E4E8
 * Entry: 0x000d40a0, Ghidra index: 2639, label: FUN_000d40a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000d40a0(void)

{
  int iVar1;
  uint uVar2;
  int *unaff_EDI;
  
  if (*unaff_EDI == 0) {
    return 0;
  }
  iVar1 = *(int *)(*unaff_EDI + 0x18);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0xc;
    }
    if ((uint)unaff_EDI[0x1c] < uVar2) {
      return *(undefined4 *)(*(int *)(iVar1 + 4) + 4 + unaff_EDI[0x1c] * 0xc);
    }
  }
  return 0;
}
