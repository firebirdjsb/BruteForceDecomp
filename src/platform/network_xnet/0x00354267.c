/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F1C233B50C1531320FDA831D8831351A4E806BCDB317FA335E07F6281BB8604
 * Entry: 0x00354267, Ghidra index: 13107, label: FUN_00354267
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00354267(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int in_ECX;
  
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)(param_1 + 0x34)) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    FUN_003455a6(piVar1 + -5);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  *(undefined4 *)(param_1 + 0xa0) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  iVar3 = FUN_0035359e(param_1,*(undefined4 *)(param_1 + 0x44),*(undefined2 *)(param_1 + 0x4a),
                       *(undefined2 *)(param_1 + 0x48),-(uint)(param_2 != 0) & 0x40000,4,0x38,
                       (uintptr_t)0x0035360fU);
  if (iVar3 == 0) {
    FUN_00353845(param_1,0x80072747);
    uVar4 = 0x80072747;
  }
  else {
    puVar5 = (undefined1 *)FUN_0034c932();
    *puVar5 = 2;
    puVar5[1] = 4;
    puVar5[2] = (char)((uint)*(undefined4 *)(param_1 + 0xcc) >> 8);
    puVar5[3] = *(undefined1 *)(param_1 + 0xcc);
    uVar4 = FUN_0034c3bf(param_1 + 0x6c,(uint)*(byte *)(in_ECX + 0x31) * 5);
    *(undefined4 *)(param_1 + 0x8c) = uVar4;
    uVar6 = CONCAT31((int3)((uint)uVar4 >> 8),(param_2 == 0) + -1) & 0xffffff10;
    FUN_003540f2(param_1,iVar3,CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + '\x02'),0);
    uVar4 = 0;
  }
  return uVar4;
}
