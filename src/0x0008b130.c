/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22714F8BAE3AE088907603D379FF008A7A0B5CBE4A68A18BC5E77B0C86DDBC91
 * Entry: 0x0008b130, Ghidra index: 1673, label: FUN_0008b130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0008b130(void)

{
  int iVar1;
  int *piVar2;
  int *in_EAX;
  int *piVar3;
  int iVar4;
  int unaff_EBX;
  
  if (unaff_EBX != 0) {
    iVar1 = *in_EAX;
    piVar3 = (int *)0x0;
    if (*(undefined4 **)(unaff_EBX + 0xf8) != (undefined4 *)0x0) {
      piVar3 = (int *)**(undefined4 **)(unaff_EBX + 0xf8);
    }
    if (piVar3 != *(int **)(unaff_EBX + 0xf8)) {
      do {
        piVar2 = (int *)piVar3[2];
        if (piVar2 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar2 + 0x20))();
          if (iVar4 == 0xe) {
            iVar4 = (**(code **)(*piVar2 + 0x3c))();
            if ((iVar4 == 1) && (piVar2[1] == iVar1)) {
              return piVar2;
            }
          }
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(unaff_EBX + 0xf8));
    }
  }
  return (int *)0x0;
}
