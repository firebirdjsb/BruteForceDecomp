/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 830287BD3C90B48D39B7C33BECC46A13C155233C15CA0B8DC3D724BF6293BFA3
 * Entry: 0x0023c4e0, Ghidra index: 7928, label: FUN_0023c4e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0023c4e0(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  uint uVar3;
  int *in_EDX;
  
  piVar2 = *(int **)(in_EAX + 8);
  if (piVar2 != *(int **)(in_EAX + 0xc)) {
    do {
      if (*(int *)(*piVar2 + 0x14) == *in_EDX) {
        iVar1 = *piVar2;
        piVar2 = (int *)0x0;
        if (iVar1 != 0) {
          uVar3 = FUN_00252d00(iVar1);
          return uVar3;
        }
        break;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(in_EAX + 0xc));
  }
  return (uint)piVar2 & 0xffffff00;
}
