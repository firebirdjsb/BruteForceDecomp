/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5974FF3C0BAEA2489BC8300574B75DD894270EB6DA52A4AE776AC7A877E9F5AD
 * Entry: 0x0015a0d0, Ghidra index: 4509, label: FUN_0015a0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0015a0d0(int *param_1)

{
  int iVar1;
  uint in_EAX;
  int *piVar2;
  int *unaff_EBX;
  int *unaff_ESI;
  int iVar3;
  undefined4 *unaff_retaddr;
  
  if (*unaff_EBX != 0) {
    iVar3 = 0;
    in_EAX = (**(code **)(*unaff_ESI + 0x30))();
    if (0 < (int)in_EAX) {
      do {
        piVar2 = (int *)(**(code **)(*unaff_ESI + 0x34))(iVar3);
        if ((*piVar2 != 0) && (iVar1 = *(int *)(*piVar2 + 0x14), iVar1 != 0)) {
          piVar2 = *(int **)(iVar1 + 4);
          if (piVar2 != *(int **)(iVar1 + 8)) {
            do {
              if (*piVar2 == *unaff_EBX) {
                if (piVar2 != (int *)0x0) {
                  *unaff_retaddr = piVar2;
                  *param_1 = iVar3;
                  return CONCAT31((int3)((uint)piVar2 >> 8),1);
                }
                break;
              }
              piVar2 = piVar2 + 0xe;
            } while (piVar2 != *(int **)(iVar1 + 8));
          }
        }
        iVar3 = iVar3 + 1;
        in_EAX = (**(code **)(*unaff_ESI + 0x30))();
      } while (iVar3 < (int)in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}
