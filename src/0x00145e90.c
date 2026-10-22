/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE70DD807B17D3D8A20F448A5F01BDDA7465E072D98488DDF18E0C165F0C0AF9
 * Entry: 0x00145e90, Ghidra index: 4205, label: FUN_00145e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00145e90(int param_1)

{
  int *piVar1;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_00154a20(param_1);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x19c);
  FUN_00145fa0();
  local_10 = *(undefined4 *)(in_ECX + 0x164);
  local_c = 0;
  piVar1 = (int *)FUN_00279c40(&local_10);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(*piVar1 + 0x10);
  return;
}
