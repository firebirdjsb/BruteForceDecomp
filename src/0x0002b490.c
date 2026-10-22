/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A75EDA88579E239AE2E8EF3D451D0CBA4B9AB4C3403D8666ADF0520E62354B06
 * Entry: 0x0002b490, Ghidra index: 289, label: FUN_0002b490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0002b490(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *extraout_EDX;
  float10 fVar2;
  undefined4 uVar3;
  
  if (((*(byte *)(in_ECX + 0x1a4) & 1) != 0) && ((*(byte *)(in_ECX + 0x1a4) >> 1 & 1) != 0)) {
    *(undefined4 *)(in_ECX + 0x1a8) = 0x40800000;
    *(undefined4 *)(in_ECX + 0x1a0) = 0x40800000;
    *(byte *)(in_ECX + 0x1a4) = *(byte *)(in_ECX + 0x1a4) & 0xf9 | 1;
    iVar1 = FUN_000120f0();
    if ((iVar1 != 0) && ((*(byte *)(*(int *)(iVar1 + 0xc) + 0x1a9) & 0x80) != 0)) {
      fVar2 = (float10)FUN_00233b90();
      if ((float10)0.5 <= fVar2) {
        uVar3 = 0x20;
      }
      else {
        uVar3 = 0x1f;
      }
      (**(code **)(*extraout_EDX + 0x15c))(uVar3,0);
    }
  }
  iVar1 = in_ECX + 0x8f0;
  if (*(int *)(in_ECX + 0x8f4) == 0) {
LAB_0002b539:
    iVar1 = in_ECX + 0x918;
    if (*(int *)(in_ECX + 0x91c) == 0) goto LAB_0002b57d;
    if ((*(int *)(in_ECX + 0x920) - *(int *)(in_ECX + 0x91c)) / 0x18 == 0) goto LAB_0002b57d;
  }
  else if ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 == 0) goto LAB_0002b539;
  FUN_00026d80(in_ECX + -0x40,iVar1,in_ECX + 0x438,0,0x40000000);
LAB_0002b57d:
  FUN_000255d0(param_1,0);
  FUN_0004d970(in_ECX + -0x40,param_1,2,1,1);
  return 1;
}
