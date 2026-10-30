/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16A2276209C99C2241866380E6B313B149F8722B2DE08547CA23F04BDC6AF1B8
 * Entry: 0x00249a90, Ghidra index: 8202, label: FUN_00249a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00249a90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  FUN_0015e760();
  if (param_2[2] != 0) {
    FUN_0003d730(param_1[2],param_2[2]);
  }
  FUN_00242410();
  if (param_2[3] != 0) {
    FUN_00248d00();
  }
  FUN_00242330();
  if (param_2[4] != 0) {
    FUN_00248a30(param_2[4]);
  }
  FUN_002423a0();
  if (param_2[5] != 0) {
    FUN_00248bc0();
  }
  FUN_00242410();
  if (param_2[6] != 0) {
    FUN_00248d00();
  }
  FUN_002489d0();
  param_1[8] = param_2[8];
  FUN_00242480();
  puVar1 = (undefined4 *)param_2[9];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[9];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  FUN_00242480();
  puVar1 = (undefined4 *)param_2[10];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[10];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  return param_1;
}
