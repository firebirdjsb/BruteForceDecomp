/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7FD7F14C15963E8474A812668D8139EF5F29056C16C6C53BA588E0E0EF522B5
 * Entry: 0x00174130, Ghidra index: 4901, label: FUN_00174130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174130(undefined4 param_1)

{
  int iVar1;
  undefined1 *unaff_ESI;
  
  *unaff_ESI = (undefined1)param_1;
  iVar1 = FUN_0025ae60(unaff_ESI);
  *(int *)(unaff_ESI + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
  *(undefined4 *)*(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_ESI + 4);
  *(int *)(*(int *)(unaff_ESI + 4) + 8) = *(int *)(unaff_ESI + 4);
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  unaff_ESI[0x14] = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = param_1;
  return;
}
