/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10A5E35A3395EC40180FBEB415023581D3DCE748158A67A5B84977E97DA07F1D
 * Entry: 0x00176810, Ghidra index: 4940, label: FUN_00176810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00176810(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN_000d42b0();
  puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 8) + 4))();
  uVar1 = puVar4[2];
  uVar2 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return 0;
}
