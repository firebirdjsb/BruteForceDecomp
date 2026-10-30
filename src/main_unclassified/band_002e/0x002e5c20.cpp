/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53122CD1CCEA4FFF2151DCAB2FE482643D8B2786E92FF143ED64E7AFE93C96B5
 * Entry: 0x002e5c20, Ghidra index: 10490, label: FUN_002e5c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e5c20(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int in_ECX;
  
  iVar6 = param_1;
  if (param_1 == -6) {
    iVar6 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
  }
  iVar6 = *(int *)(*(int *)(in_ECX + 0x1c) + iVar6 * 4);
  if (*(char *)(iVar6 + 5) != '\0') {
    *(int *)(in_ECX + 0x4870) = *(int *)(in_ECX + 0x4870) + -1;
    uVar7 = FUN_002e76c0();
    *(uint *)(in_ECX + 0x4874) = *(int *)(in_ECX + 0x4874) - (uVar7 & 0xff);
    if (*(char *)(in_ECX + 0x34) != '\0') {
      cVar3 = FUN_002e76c0();
      cVar2 = *(char *)(iVar6 + 8);
      cVar5 = (cVar2 != '\0') * '\x04' + '\x02';
      cVar1 = (cVar2 != '\0') * '\x04' + '\x03';
      bVar8 = -(cVar2 != '\0') & 4;
      cVar2 = (cVar2 != '\0') * '\x04' + '\x01';
      cVar4 = FUN_002e4840(cVar5);
      FUN_002e4850(cVar5,cVar4 + -1);
      if ((*(int *)(in_ECX + 0x489c) == 1) || (*(int *)(in_ECX + 0x489c) == 2)) {
        cVar5 = FUN_002e4840(cVar1);
        FUN_002e4850(cVar1,cVar5 + -1);
      }
      cVar5 = FUN_002e4840(bVar8);
      FUN_002e4850(bVar8,cVar5 + cVar3);
      if ((*(int *)(in_ECX + 0x489c) == 0) || (*(int *)(in_ECX + 0x489c) == 2)) {
        cVar5 = FUN_002e4840(cVar2);
        FUN_002e4850(cVar2,cVar5 - cVar3);
      }
      FUN_002e4490();
      FUN_002e44e0();
    }
    FUN_002e75c0(0);
  }
  if (param_1 == *(int *)(in_ECX + 0x4950)) {
    *(undefined4 *)(in_ECX + 0x4950) = 0xffffffff;
  }
  FUN_002e7a40(param_1);
  return;
}
