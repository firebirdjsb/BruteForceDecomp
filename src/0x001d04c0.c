/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A5EA2A38B4E8BB1F4BA63C7C517D8ECD363AB4A4A777F75353EB37A632A8141
 * Entry: 0x001d04c0, Ghidra index: 6173, label: FUN_001d04c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d04c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 3;
    do {
      *param_1 = *unaff_EDI;
      puVar1[-2] = unaff_EDI[1];
      puVar1[-1] = unaff_EDI[2];
      *puVar1 = unaff_EDI[3];
      puVar1[1] = unaff_EDI[4];
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(unaff_EDI + 5);
      *(undefined1 *)((int)puVar1 + 9) = *(undefined1 *)((int)unaff_EDI + 0x15);
      puVar1[3] = unaff_EDI[6];
      *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(unaff_EDI + 7);
      FUN_001d2f50(puVar1 + 5);
      param_1 = param_1 + 0x25;
      puVar1 = puVar1 + 0x25;
    } while (param_1 != param_2);
  }
  return;
}
