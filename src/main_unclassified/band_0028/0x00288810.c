/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A95FE4282F905DD4062956CD66B0B8703B4C95804A05566EB7E7554F50CD4C94
 * Entry: 0x00288810, Ghidra index: 9113, label: FUN_00288810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char * FUN_00288810(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int in_ECX;
  char *pcVar7;
  int in_EDX;
  
  if (0 < in_EDX) {
    puVar5 = (undefined4 *)0x0;
    if (*(undefined4 **)(in_ECX + 0x20) != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)**(undefined4 **)(in_ECX + 0x20);
    }
    for (; puVar5 != *(undefined4 **)(in_ECX + 0x20); puVar5 = (undefined4 *)*puVar5) {
      in_EDX = in_EDX + -1;
      if (in_EDX == 0) {
        iVar4 = puVar5[2];
        if (*(int *)(iVar4 + 0x30) == 0) {
          if (*(uint *)(iVar4 + 0x18) < 0x10) {
            pcVar6 = (char *)(iVar4 + 4);
          }
          else {
            pcVar6 = *(char **)(iVar4 + 4);
          }
          pcVar1 = pcVar6 + 1;
          do {
            cVar3 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar3 != '\0');
          return pcVar6 + -(int)pcVar1;
        }
        if (*(uint *)(iVar4 + 0x18) < 0x10) {
          pcVar6 = (char *)(iVar4 + 4);
        }
        else {
          pcVar6 = *(char **)(iVar4 + 4);
        }
        pcVar1 = pcVar6 + 1;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        if (*(uint *)(iVar4 + 0x34) < 0x10) {
          pcVar7 = (char *)(iVar4 + 0x20);
        }
        else {
          pcVar7 = *(char **)(iVar4 + 0x20);
        }
        pcVar2 = pcVar7 + 1;
        do {
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        return pcVar6 + (int)(pcVar7 + ((3 - (int)pcVar2) - (int)pcVar1));
      }
    }
  }
  return (char *)0x0;
}
