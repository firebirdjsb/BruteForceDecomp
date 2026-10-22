/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6483569BBC87C505E6D827F693A674E55AB780F8FE2C5AFDD4A57446BF8D981F
 * Entry: 0x002bd570, Ghidra index: 9949, label: FUN_002bd570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd570(void)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int in_EDX;
  int unaff_EDI;
  
  iVar2 = *(ushort *)(in_EDX + 2) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)(in_EDX + 4) + iVar2 * 4);
    do {
      if (*piVar3 == unaff_EDI) break;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(ushort *)(in_EDX + 2) - 1;
  *(ushort *)(in_EDX + 2) = uVar1;
  if (iVar2 < (int)(uint)uVar1) {
    do {
      *(undefined4 *)(*(int *)(in_EDX + 4) + iVar2 * 4) =
           *(undefined4 *)(*(int *)(in_EDX + 4) + 4 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(in_EDX + 2));
  }
  return;
}
