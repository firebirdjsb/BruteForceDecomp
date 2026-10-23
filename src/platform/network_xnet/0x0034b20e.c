/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14F2AA1D49468D5A49B7734714632DE7E108BB0BCA7CBDD782E50B1701C0DF96
 * Entry: 0x0034b20e, Ghidra index: 12943, label: FUN_0034b20e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034b20e(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  byte *pbVar6;
  short *psVar7;
  int *piVar8;
  bool bVar9;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = 3;
  bVar9 = true;
  psVar4 = (short *)(in_ECX + 0x1e0);
  psVar7 = (short *)((int)param_1 + 10);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar9 = *psVar4 == *psVar7;
    psVar4 = psVar4 + 1;
    psVar7 = psVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    *param_3 = 0x100007f;
    return 0;
  }
  if (((*param_2 & 0xc0) == 0x80) && (param_1[1] == 0)) {
    return 0x2726;
  }
  KeRaiseIrqlToDpcLevel();
  iVar2 = FUN_00347b83(param_2);
  if (iVar2 == 0) {
    uVar5 = 0x2726;
    goto LAB_0034b31d;
  }
  pbVar1 = (byte *)FUN_003483a7(param_1,param_2);
  local_14 = 0;
  local_10 = 0;
  if (pbVar1 == (byte *)0x0) {
LAB_0034b2e6:
    pbVar1 = (byte *)FUN_0034a8e6(param_1,iVar2);
    if (pbVar1 == (byte *)0x0) {
      uVar5 = 0x2776;
      goto LAB_0034b31d;
    }
    *(undefined4 *)(pbVar1 + 0xe8) = local_14;
    *(undefined4 *)(pbVar1 + 0xec) = local_10;
  }
  else {
    local_14 = *(undefined4 *)(pbVar1 + 0xe8);
    local_10 = *(undefined4 *)(pbVar1 + 0xec);
    if ((*pbVar1 & 2) != 0) {
      iVar3 = 9;
      bVar9 = true;
      pbVar6 = pbVar1 + 0xc4;
      piVar8 = param_1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *(int *)pbVar6 == *piVar8;
        pbVar6 = pbVar6 + 4;
        piVar8 = piVar8 + 1;
      } while (bVar9);
      if (!bVar9) {
        FUN_0034964a(pbVar1,0);
      }
    }
    if (pbVar1[2] == 1) {
      FUN_00349730(pbVar1,0);
      pbVar1 = (byte *)0x0;
    }
    if (pbVar1 == (byte *)0x0) goto LAB_0034b2e6;
  }
  *param_3 = *(undefined4 *)(pbVar1 + 4);
  uVar5 = 0;
LAB_0034b31d:
  KfLowerIrql();
  return uVar5;
}
