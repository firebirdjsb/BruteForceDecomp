/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D9F496EA16769BA96A4EF96DBA86B90CBD9BF06B0C1A21C27F504A2687F4DCC
 * Entry: 0x002a6200, Ghidra index: 9581, label: FUN_002a6200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002a6200(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  iVar5 = (int)param_1;
  puVar3 = *(undefined4 **)((int)param_1 + 0xc);
  iVar1 = (int)param_1 + 8;
  cVar2 = *(char *)((int)puVar3[1] + 0x15);
  param_1 = puVar3;
  puVar8 = (undefined4 *)puVar3[1];
  while (cVar2 == '\0') {
    if ((undefined4 *)puVar8[3] < param_2) {
      puVar6 = (undefined4 *)puVar8[2];
      puVar8 = param_1;
    }
    else {
      puVar6 = (undefined4 *)*puVar8;
    }
    param_1 = puVar8;
    puVar8 = puVar6;
    cVar2 = *(char *)((int)puVar6 + 0x15);
  }
  if ((param_1 == puVar3) || (param_2 < (undefined4 *)param_1[3])) {
    param_2 = puVar3;
    piVar7 = (int *)&param_2;
  }
  else {
    piVar7 = (int *)&param_1;
  }
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0xc) != 0) {
    FUN_002a7970(iVar5 + 0x14,&param_1);
    FUN_002a0050(iVar1,&param_1,iVar4);
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + -1;
    return 0;
  }
  return 0x80004005;
}
