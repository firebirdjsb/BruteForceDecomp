/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70BF1EA698BF38B6B0DA81E9BDD76BA65B8D1AAAC9C1DC38B619A45DD7EB6F47
 * Entry: 0x0034ff75, Ghidra index: 13045, label: FUN_0034ff75
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034ff75(undefined4 *param_1)

{
  undefined2 uVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  short *psVar5;
  bool bVar6;
  
  puVar4 = param_1;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  KeRaiseIrqlToDpcLevel();
  *param_1 = *(undefined4 *)(in_ECX + 0xa70);
  param_1[1] = *(undefined4 *)(in_ECX + 0x268);
  param_1[2] = *(undefined4 *)(in_ECX + 0x26c);
  param_1[3] = *(undefined4 *)(in_ECX + 0x8c8);
  param_1[4] = *(undefined4 *)(in_ECX + 0x8cc);
  param_1[5] = *(undefined4 *)(in_ECX + 0x8d0);
  param_1[6] = *(undefined4 *)(in_ECX + 0x8d4);
  param_1[7] = *(undefined4 *)(in_ECX + 0x8d8);
  param_1[8] = *(undefined4 *)(in_ECX + 0x8dc);
  param_1[9] = *(undefined4 *)(in_ECX + 0x8e0);
  param_1[10] = *(undefined4 *)(in_ECX + 0x8e4);
  if ((*(byte *)(in_ECX + 0x8c4) & 4) != 0) {
    param_1[0xb] = **(undefined4 **)(in_ECX + 0xa2c);
    param_1[0xc] = *(int *)(in_ECX + 0xa2c) + 4;
  }
  if (((0xb < *(byte *)(in_ECX + 0x8c0)) && (*(byte *)(in_ECX + 0x8c0) < 0xf)) &&
     ((*(int *)(in_ECX + 0x92c) != 0 || (*(short *)(in_ECX + 0x930) != 0)))) {
    bVar6 = true;
    iVar2 = 3;
    piVar3 = (int *)(in_ECX + 0x92c);
    psVar5 = (short *)(in_ECX + 0x910);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = (short)*piVar3 == *psVar5;
      piVar3 = (int *)((int)piVar3 + 2);
      psVar5 = psVar5 + 1;
    } while (bVar6);
    if ((!bVar6) || (*(short *)(in_ECX + 0x916) != 0)) {
      param_1[0xd] = 1;
      if (bVar6) {
        uVar1 = CONCAT11((char)*(undefined2 *)(in_ECX + 0x916),
                         (char)((ushort)*(undefined2 *)(in_ECX + 0x916) >> 8));
      }
      else {
        uVar1 = 0xc02;
      }
      *(undefined2 *)(param_1 + 0xe) = uVar1;
    }
  }
  KfLowerIrql();
  return 0;
}
