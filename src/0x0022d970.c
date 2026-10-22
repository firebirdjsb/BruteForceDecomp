/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A32E17AF6680F36B2A7EF28C4F6BFA876FBDD354F957B9BA9CA6029E9201888
 * Entry: 0x0022d970, Ghidra index: 7711, label: FUN_0022d970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0022d970(void)

{
  int *piVar1;
  char cVar2;
  uint in_EAX;
  undefined4 uVar3;
  int iVar4;
  char extraout_DL;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0x358);
  if (piVar1 != (int *)0x0) {
    uVar3 = FUN_0015a030(1);
    in_EAX = CONCAT31((int3)((uint)uVar3 >> 8),*(char *)((int)piVar1 + 0x26));
    if (-1 < *(char *)((int)piVar1 + 0x26)) {
      in_EAX = (**(code **)(*piVar1 + 0xb8))(0x3f800000);
    }
    *(byte *)((int)piVar1 + 0x71) = *(byte *)((int)piVar1 + 0x71) & 0xef;
    if ((char)uVar3 != '\0') {
      cVar2 = '\x01';
      if (*(int *)(unaff_EDI + 0x1b0) != 0) {
        iVar4 = FUN_0014ab50();
        cVar2 = extraout_DL;
        if (iVar4 != 0) {
          cVar2 = FUN_00126c60(2,0);
        }
      }
      if ((1.0 <= *(float *)(*(int *)(unaff_EDI + 8) + 0xc58)) || (cVar2 == '\0')) {
        FUN_000db3e0(piVar1);
      }
      else {
        piVar1[0x6a] = (int)(*(float *)(piVar1[3] + 0x140) /
                            *(float *)(*(int *)(unaff_EDI + 8) + 0xc5c));
      }
      in_EAX = 0;
      if (*(int *)(unaff_EDI + 0x358) != 0) {
        in_EAX = FUN_0008f6a0(0);
      }
      *(undefined4 *)(unaff_EDI + 0x1f8) = 0;
    }
  }
  return in_EAX & 0xffffff00;
}
