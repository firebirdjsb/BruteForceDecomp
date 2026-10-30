/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61444C45E98705DB42A39F30E50C6DD0B8BC7C75FBF8969A35CDEB4BBC2FFBB4
 * Entry: 0x001794f0, Ghidra index: 4986, label: FUN_001794f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001794f0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *extraout_ECX;
  undefined4 *puVar6;
  int iVar7;
  int extraout_EDX;
  int unaff_EBX;
  
  puVar2 = *(undefined4 **)(*(int *)(unaff_EBX + 0x20) + 4);
  iVar7 = 0;
  puVar5 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*puVar2;
  }
  puVar2 = *(undefined4 **)(*(int *)(unaff_EBX + 0x20) + 4);
  while( true ) {
    if (puVar5 == puVar2) {
      return iVar7;
    }
    bVar1 = *(byte *)((int)puVar5 + 0x85);
    puVar6 = puVar5 + 2;
    if (((bVar1 & 1) != 0) && (*(char *)(puVar5 + 7) != '\0')) break;
    if (((bVar1 & 4) == 0) && (iVar7 = iVar7 + 1, (bVar1 & 2) != 0)) {
      for (puVar3 = (undefined4 *)*puVar5;
          (puVar3 != puVar2 &&
          ((bVar1 = *(byte *)((int)puVar3 + 0x85), (bVar1 & 1) == 0 ||
           (*(char *)(puVar3 + 7) == '\0')))); puVar3 = (undefined4 *)*puVar3) {
        if (((bVar1 & 4) == 0) &&
           ((((bVar1 & 2) != 0 && (puVar6[1] == puVar3[3])) &&
            (cVar4 = FUN_00179cf0(unaff_EBX), puVar6 = extraout_ECX, cVar4 != '\0')))) {
          *(byte *)(extraout_EDX + 0x7d) = *(byte *)(extraout_EDX + 0x7d) | 4;
        }
      }
    }
    puVar5 = (undefined4 *)*puVar5;
  }
  return iVar7;
}
