/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 235690EF78429259531821A88533EA60A66A71E48D594B164A91AE1251A28641
 * Entry: 0x00081350, Ghidra index: 1521, label: FUN_00081350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00081350(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x84))(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (((-1 < param_1) && (iVar1 = *(int *)(iVar2 + 0xc), iVar1 != 0)) &&
     (*(int *)(iVar2 + 0x10) - iVar1 >> 2 != 0)) {
    uVar3 = (**(code **)(*in_ECX + 0x7c))(iVar1 + param_1 * 4);
    return uVar3;
  }
  return 0;
}
