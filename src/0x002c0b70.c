/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24697025263AA9041B1EF8E68DD961F13894575C84DF939357E7CD3A35BBED5A
 * Entry: 0x002c0b70, Ghidra index: 10014, label: FUN_002c0b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c0b70(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) != 0) {
    FUN_002d5de0();
    *(undefined4 *)(unaff_EDI + 4) = 0;
  }
  if (*(int *)(unaff_EDI + 0x74) != 0) {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x74) + 0x78) = *(undefined4 *)(unaff_EDI + 0x78);
  }
  if (*(int *)(unaff_EDI + 0x78) == 0) {
    *(undefined4 *)(unaff_EBX + 8) = *(undefined4 *)(unaff_EDI + 0x74);
  }
  else {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x78) + 0x74) = *(undefined4 *)(unaff_EDI + 0x74);
  }
  if (*(int *)(unaff_EDI + 0x20) != 0) {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x20) + 0xc) = *(undefined4 *)(unaff_EDI + 0x24);
  }
  if (*(int *)(unaff_EDI + 0x24) == 0) {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x28) + 0x1c) = *(undefined4 *)(unaff_EDI + 0x20);
  }
  else {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x24) + 8) = *(undefined4 *)(unaff_EDI + 0x20);
  }
  if (*(int *)(unaff_EDI + 0x3c) != 0) {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x3c) + 0xc) = *(undefined4 *)(unaff_EDI + 0x40);
  }
  if (*(int *)(unaff_EDI + 0x40) == 0) {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x44) + 0x1c) = *(undefined4 *)(unaff_EDI + 0x3c);
  }
  else {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x40) + 8) = *(undefined4 *)(unaff_EDI + 0x3c);
  }
  iVar1 = *(ushort *)(unaff_EBX + 0xe) - 1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*(int *)(unaff_EBX + 0x10) + iVar1 * 4);
    while (*piVar2 != unaff_EDI) {
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
      if (iVar1 < 0) {
        return;
      }
    }
    if (-1 < iVar1) {
      *(short *)(unaff_EBX + 0xe) = *(short *)(unaff_EBX + 0xe) + -1;
      *(undefined4 *)(*(int *)(unaff_EBX + 0x10) + iVar1 * 4) =
           *(undefined4 *)(*(int *)(unaff_EBX + 0x10) + (uint)*(ushort *)(unaff_EBX + 0xe) * 4);
    }
  }
  return;
}
