/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EF07AB5A96A4CEAA2C7DAD9EA85280C30D36044C7AB399988080E97C473ED52
 * Entry: 0x000fce20, Ghidra index: 3157, label: FUN_000fce20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000fce20(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_10;
  
  piVar1 = *(int **)(in_ECX + 8);
  local_10 = 0;
  for (piVar4 = *(int **)(in_ECX + 4); piVar4 != piVar1; piVar4 = piVar4 + 0xe) {
    iVar2 = FUN_002ea01d(0xa4);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_0010c2b0();
    }
    iVar2 = piVar4[2];
    piVar3[3] = piVar4[1];
    piVar3[4] = iVar2;
    (**(code **)(*piVar3 + 0x1c))();
    piVar3[5] = piVar4[3];
    (**(code **)(*piVar3 + 0x1c))();
    piVar3[6] = piVar4[4];
    (**(code **)(*piVar3 + 0x1c))();
    piVar3[9] = *piVar4;
    (**(code **)(*piVar3 + 0x2c))();
    if (piVar4[5] != 0) {
      FUN_000fcd30(piVar4[5]);
    }
    iVar2 = piVar4[0xc];
    for (iVar5 = piVar4[0xb]; iVar5 != iVar2; iVar5 = iVar5 + 4) {
      iVar6 = iVar5;
      FUN_001e97c0(iVar5);
      FUN_0010c660(iVar6);
    }
    iVar2 = FUN_000ff9e0(piVar3);
    if (iVar2 != -1) {
      FUN_000fbd40();
      local_10 = local_10 + 1;
    }
  }
  return local_10;
}
