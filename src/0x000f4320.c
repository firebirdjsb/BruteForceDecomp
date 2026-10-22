/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6FFB11E44448ABFE27A6118869D8C9AFC91F868F890819103E3F92C15A0BF2E
 * Entry: 0x000f4320, Ghidra index: 3061, label: FUN_000f4320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000f4320(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  int *unaff_EDI;
  
  if (unaff_EDI != (int *)0x0) {
    iVar2 = (**(code **)(*unaff_EDI + 4))();
    if (iVar2 == 3) {
      if (unaff_EDI[0x1c] != -1) {
        puVar3 = (undefined4 *)FUN_0010c850();
        uVar1 = *puVar3;
        *(undefined4 *)(param_1 + 4 + unaff_ESI * 4) = uVar1;
        *(undefined4 *)(param_1 + 0x22c + unaff_ESI * 4) = uVar1;
      }
      FUN_000f0270(unaff_EDI[1]);
      return 1;
    }
  }
  return 0;
}
