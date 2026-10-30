/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3567486EDE25A5B176A5CE2885386FC757C63971AE83CE3F7AA3D5BD8DD7A18F
 * Entry: 0x00241340, Ghidra index: 8005, label: FUN_00241340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00241340(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x2c;
    if (iVar1 != 0) goto LAB_0024137b;
  }
  FUN_00242e90(param_1);
LAB_0024137b:
  FUN_00244000(0);
  return iVar1 * 0x2c + *(int *)(unaff_ESI + 4);
}
