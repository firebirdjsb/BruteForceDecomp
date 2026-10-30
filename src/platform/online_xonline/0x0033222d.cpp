/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72F5F304B681347F19837A8E20433463343BDFAB0DE9E124320E7DFEDC2BE173
 * Entry: 0x0033222d, Ghidra index: 12402, label: FUN_0033222d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* These addresses have matching definitions in current recovered C drafts.
 * Indirect-call ABI and 32-bit pointer storage remain ABI_UNVERIFIED. */
extern void FUN_00331db8(int param_1);
extern void FUN_003321a5(int param_1);
int FUN_0033222d(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int local_8;
  
  local_8 = 0;
  *param_3 = 0;
  puVar3 = (undefined4 *)FUN_0033ea0c(0x668,0x2016);
  if (puVar3 == (undefined4 *)0x0) {
    puVar1 = (uint *)(*(int *)(in_ECX + 0xb8) + 0x30);
    *puVar1 = *puVar1 | 8;
    local_8 = -0x7feafff8;
  }
  else {
    FUN_00330c2d(puVar3);
    *puVar3 = FUN_00331db8;
    puVar3[1] = FUN_003321a5;
    puVar3[2] = param_2;
    puVar3[3] = 0;
    if (param_1 != 0) {
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xff7fffff | 0x400000;
      iVar2 = *(int *)(in_ECX + 0xb8);
      if (*(int *)(in_ECX + 0x18) == 0 && *(int *)(in_ECX + 0x1c) == 0) {
        *(byte *)(iVar2 + 0x32) = *(byte *)(iVar2 + 0x32) | 0xc0;
      }
      else {
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xffbfffff | 0x800000;
        puVar3[4] = 99;
        puVar3[3] = 0x1500f0;
      }
    }
    if (puVar3[3] == 0) {
      local_8 = FUN_00331457(0,param_2,puVar3 + 0xd);
      *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
           *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xfffdffff | 0x10000;
      puVar3[4] = 6;
      FUN_00331db8(puVar3);
    }
    *param_3 = puVar3;
    if (-1 < local_8) {
      return local_8;
    }
  }
  *param_3 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0033ea20(puVar3);
  }
  return local_8;
}
