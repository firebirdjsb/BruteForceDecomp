/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 286708EAB1064E1E19895956777AED206ED2C5ACACEA7689389B7A21D7568841
 * Entry: 0x0034877b, Ghidra index: 12900, label: FUN_0034877b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ushort FUN_0034877b(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  KeRaiseIrqlToDpcLevel();
  puVar5 = param_1;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *param_1 = *(undefined4 *)(in_ECX + 0x268);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)(in_ECX + 0x1e0);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)(in_ECX + 0x1e4);
  uVar3 = 0;
  if ((*(byte *)(in_ECX + 0xa70) & 1) != 0) {
    cVar2 = *(char *)(in_ECX + 0x8c0);
    if (cVar2 == '\x05') {
      uVar3 = 4;
    }
    else if (((cVar2 == '\f') || (cVar2 == '\r')) || (cVar2 == '\x0e')) {
      uVar3 = 8;
    }
    else {
      uVar3 = ((cVar2 != '\x16') - 1 & 0x2e) + 2;
    }
    if (*(int *)(in_ECX + 0x8c8) != 0) {
      uVar3 = uVar3 | 0x20;
    }
    if (*(int *)(in_ECX + 0x8d8) != 0) {
      uVar3 = uVar3 | 0x40;
    }
    if (5 < *(uint *)(in_ECX + 0xae4)) {
      piVar1 = (int *)(in_ECX + 0xae8);
      if (*piVar1 != 0) {
        param_1[1] = *(undefined4 *)(*piVar1 + 0xd8);
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(*piVar1 + 0xdc);
        uVar3 = uVar3 | 0x80;
        puVar5 = (undefined4 *)(*piVar1 + 0xc4);
        puVar6 = param_1 + 4;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
    }
    if ((*(byte *)(in_ECX + 0xa73) & 0x80) != 0) {
      param_1._0_2_ = CONCAT11(0x80,(char)uVar3);
      uVar3 = (ushort)param_1;
    }
  }
  KfLowerIrql();
  return uVar3;
}
