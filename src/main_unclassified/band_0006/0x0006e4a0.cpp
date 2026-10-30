/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EEC5B52FFE1C0F1A56B117FD3CB4DA89469423670C989E11C0C314A9217268C
 * Entry: 0x0006e4a0, Ghidra index: 1239, label: FUN_0006e4a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0006e4a0(float param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x50);
  if (*(float *)(iVar1 + 0x2c) != param_1) {
    *(float *)(iVar1 + 0x2c) = param_1;
    *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x24) / param_1;
    FUN_0006ad90();
  }
  FUN_0006c840(unaff_ESI);
  return 0;
}
