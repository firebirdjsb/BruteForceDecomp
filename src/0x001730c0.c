/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 053E4D961A54D2B9E20794C070DA8624606ACE86138440DA61FAA98183F23AF5
 * Entry: 0x001730c0, Ghidra index: 4876, label: FUN_001730c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001730c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN_000120f0();
  puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 0x48) + 0xc))();
  uVar1 = puVar4[2];
  uVar2 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return 0;
}
