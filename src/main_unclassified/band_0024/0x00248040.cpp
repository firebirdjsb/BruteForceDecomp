/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1D63940A3BFB3A4E567BFC534619732C1754840F2834877B9F34981A157BC81
 * Entry: 0x00248040, Ghidra index: 8112, label: FUN_00248040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00248040(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = 0;
  FUN_0015e760();
  if (param_2[2] != 0) {
    FUN_0003d730(param_1[2],param_2[2]);
  }
  param_1[3] = 0;
  FUN_00242410();
  if (param_2[3] != 0) {
    FUN_00248d00();
  }
  param_1[4] = 0;
  FUN_00242330();
  if (param_2[4] != 0) {
    FUN_00248a30(param_2[4]);
  }
  param_1[5] = 0;
  FUN_002423a0();
  if (param_2[5] != 0) {
    FUN_00248bc0();
  }
  param_1[6] = 0;
  FUN_00242410();
  if (param_2[6] != 0) {
    FUN_00248d00();
  }
  param_1[7] = 0;
  FUN_002489d0();
  param_1[8] = param_2[8];
  param_1[9] = 0;
  FUN_00242480();
  puVar1 = (undefined4 *)param_2[9];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[9];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  param_1[10] = 0;
  FUN_00242480();
  puVar1 = (undefined4 *)param_2[10];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[10];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  return param_1;
}
