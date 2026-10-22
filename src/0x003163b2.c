/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE579B7F2A728583866574319B276EC9CA3B960F036F35E801212F566D0A8C53
 * Entry: 0x003163b2, Ghidra index: 12138, label: FUN_003163b2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003163b2(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_ECX;
  uint local_10;
  int local_c;
  int local_8;
  
  if (param_1[6] != 0 || param_1[7] != 0) {
    local_8 = in_ECX;
    KeQuerySystemTime(&local_10);
    iVar2 = param_1[7];
    uVar3 = param_1[6];
    if ((iVar2 < 1) && ((iVar2 < 0 || (uVar3 == 0)))) {
      param_1[6] = local_10 - uVar3;
      param_1[7] = (local_c - iVar2) - (uint)(local_10 < uVar3);
    }
    if ((local_c <= param_1[7]) && ((local_c < param_1[7] || (local_10 < (uint)param_1[6])))) {
      if ((*(byte *)(param_1 + 2) & 2) != 0) {
        FUN_00316300(param_1);
      }
      piVar1 = (int *)(in_ECX + 0x6e0);
      piVar5 = (int *)*piVar1;
      if (piVar5 != piVar1) {
        while (in_ECX = local_8, piVar5[7] <= param_1[7]) {
          if (((param_1[7] <= piVar5[7]) && ((uint)param_1[6] < (uint)piVar5[6])) ||
             (piVar5 = (int *)*piVar5, piVar5 == piVar1)) break;
        }
      }
      *param_1 = (int)piVar5;
      puVar4 = (undefined4 *)piVar5[1];
      param_1[1] = (int)puVar4;
      *puVar4 = param_1;
      *(int **)(*param_1 + 4) = param_1;
      if (param_1 != (int *)*piVar1) {
        return 1;
      }
      KeSetTimer(in_ECX + 0x720,param_1[6],param_1[7],in_ECX + 0x748);
      return 1;
    }
  }
  return 0;
}
