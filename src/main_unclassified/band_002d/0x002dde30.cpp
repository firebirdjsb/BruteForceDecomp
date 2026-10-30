/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04F4F16B633D5523A58B40FC6A74705A02437692557AC88DCFF612B2FACFD137
 * Entry: 0x002dde30, Ghidra index: 10331, label: FUN_002dde30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dde30(ushort *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 4);
  if (*param_1 <= param_1[1]) {
    FUN_00306780(4);
  }
  *(undefined4 *)(*(int *)(param_1 + 2) + (uint)param_1[1] * 4) = uVar1;
  param_1[1] = param_1[1] + 1;
  uVar1 = *(undefined4 *)(in_ECX + 8);
  if (*param_1 <= param_1[1]) {
    FUN_00306780(4);
  }
  *(undefined4 *)(*(int *)(param_1 + 2) + (uint)param_1[1] * 4) = uVar1;
  param_1[1] = param_1[1] + 1;
  return;
}
