/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 497D0F14C94E16AE89106801319B2873B19C7417D68121DE2A7F38B345442B5C
 * Entry: 0x0012e9d0, Ghidra index: 3816, label: FUN_0012e9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0012e9d0(void)

{
  int in_EAX;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EDI;
  
  uVar1 = 0;
  if ((-1 < unaff_EDI) && (unaff_EDI < 0x3a)) {
    piVar2 = *(int **)(in_EAX + 0x2cc);
    iVar3 = 0;
    if (0 < *(int *)(in_EAX + 0x2c8)) {
      while (*piVar2 != unaff_EDI) {
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 0x13;
        if (*(int *)(in_EAX + 0x2c8) <= iVar3) {
          return uVar1;
        }
      }
      if ((*(byte *)((int)piVar2 + 0x3d) & 4) == 0) {
        if (*(int *)(unaff_EBX + 0x218) == 0) {
          *(int **)(unaff_EBX + 0x218) = piVar2;
          uVar1 = 1;
        }
      }
      else if (*(int *)(unaff_EBX + 0x244) == 0) {
        *(int **)(unaff_EBX + 0x244) = piVar2;
        return 1;
      }
    }
  }
  return uVar1;
}
