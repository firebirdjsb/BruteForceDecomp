/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 762CE449776374B15CB9868C05AFDBEF411F52A915EF7CA6218504194505896F
 * Entry: 0x0031aab0, Ghidra index: 12272, label: FUN_0031aab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0031aab0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_1 & 0xffff;
  **(uint **)(in_ECX + 0x1c) = uVar5;
  iVar1 = FUN_003148cf(0x61645344,(uVar5 * 5 + 5) * 4,1);
  iVar4 = (-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
  *(int *)(in_ECX + 0x14) = iVar1;
  if (-1 < iVar4) {
    uVar2 = FUN_0031aa11(iVar1,0,param_1,in_ECX + 4);
    *(undefined4 *)(in_ECX + 0x18) = uVar2;
    if (1 < uVar5 + 1) {
      param_1 = 0x14;
      do {
        piVar3 = (int *)(*(int *)(in_ECX + 0x14) + param_1);
        param_1 = param_1 + 0x14;
        uVar5 = uVar5 - 1;
        *piVar3 = in_ECX + 0xc;
        piVar3[1] = *(int *)(in_ECX + 0x10);
        *(int **)(in_ECX + 0x10) = piVar3;
        *(int **)piVar3[1] = piVar3;
      } while (uVar5 != 0);
    }
  }
  return iVar4;
}
