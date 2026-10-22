/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FF3D7C8EC4BC30EA2D2711094419E068034044306B3C7B8994D263215A09521
 * Entry: 0x002c9260, Ghidra index: 10134, label: FUN_002c9260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c9260(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0xc);
  if (((iVar2 < 0) || ((int)(uint)*(ushort *)(in_EAX + 2) <= iVar2)) ||
     (*(int *)(*(int *)(in_EAX + 4) + iVar2 * 4) != unaff_EDI)) {
    iVar2 = *(int *)(unaff_EDI + 0x10);
  }
  *(short *)(in_EAX + 2) = *(short *)(in_EAX + 2) + -1;
  if (iVar2 < (int)(uint)*(ushort *)(in_EAX + 2)) {
    iVar1 = *(int *)(*(int *)(in_EAX + 4) + (uint)*(ushort *)(in_EAX + 2) * 4);
    *(int *)(*(int *)(in_EAX + 4) + iVar2 * 4) = iVar1;
    if (*(uint *)(iVar1 + 0xc) == (uint)*(ushort *)(in_EAX + 2)) {
      *(int *)(iVar1 + 0xc) = iVar2;
    }
    else {
      *(int *)(iVar1 + 0x10) = iVar2;
    }
  }
  if (*(int *)(unaff_EDI + 0xc) == iVar2) {
    *(undefined4 *)(unaff_EDI + 0xc) = 0xffffffff;
    return;
  }
  *(undefined4 *)(unaff_EDI + 0x10) = 0xffffffff;
  return;
}
