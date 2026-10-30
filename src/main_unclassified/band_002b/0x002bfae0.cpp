/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B36B15F005548C9D17FF350E10E989E4401AB29C152C735AA7AFA19FDAFDED3
 * Entry: 0x002bfae0, Ghidra index: 10000, label: FUN_002bfae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing zero-argument 0x002CCF80 Ghidra callee declaration.
 * Guest input registers and original Xbox ABI are UNVERIFIED. */
extern void FUN_002ccf80(void);
void FUN_002bfae0(void)

{
  int iVar1;
  int in_EAX;
  int unaff_EDI;
  
  *(uint *)(unaff_EDI + 0x14) = *(uint *)(unaff_EDI + 0x14) & 0xffcfffff | 0xc0000;
  iVar1 = *(int *)(in_EAX + 8);
  *(int *)(unaff_EDI + 0x74) = iVar1;
  *(undefined4 *)(unaff_EDI + 0x78) = 0;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x78) = unaff_EDI;
  }
  *(int *)(in_EAX + 8) = unaff_EDI;
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x28) + 0x1c);
  *(int *)(unaff_EDI + 0x20) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = unaff_EDI + 0x18;
  }
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  *(int *)(*(int *)(unaff_EDI + 0x28) + 0x1c) = unaff_EDI + 0x18;
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x44) + 0x1c);
  *(int *)(unaff_EDI + 0x3c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = unaff_EDI + 0x34;
  }
  *(undefined4 *)(unaff_EDI + 0x40) = 0;
  *(int *)(*(int *)(unaff_EDI + 0x44) + 0x1c) = unaff_EDI + 0x34;
  if ((*(int *)(*(int *)(*(int *)(unaff_EDI + 0x28) + 0x90) + 0x10) != 0) ||
     (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x44) + 0x90) + 0x10) != 0)) {
    if (*(ushort *)(in_EAX + 0xc) <= *(ushort *)(in_EAX + 0xe)) {
      FUN_002ccf80();
    }
    *(int *)(*(int *)(in_EAX + 0x10) + (uint)*(ushort *)(in_EAX + 0xe) * 4) = unaff_EDI;
    *(short *)(in_EAX + 0xe) = *(short *)(in_EAX + 0xe) + 1;
  }
  return;
}
