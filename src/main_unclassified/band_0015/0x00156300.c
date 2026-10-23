/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A94289A1EAB6FDEFB66E7B5B59FC7C1B03108BA9C061F788B80785FA3DADE999
 * Entry: 0x00156300, Ghidra index: 4476, label: FUN_00156300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00156300(void)

{
  int iVar1;
  int in_EAX;
  int unaff_EBX;
  int unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0xc) + 4);
  if (iVar1 == 0x11) {
    if (*(int *)(unaff_EDI + 0xcc) != in_EAX) {
      FUN_0008f6a0();
    }
    if (*(int *)(unaff_EDI + 0xd4) != unaff_EBX) {
      FUN_0008f6a0();
    }
  }
  else if (iVar1 == 0x18) {
    if ((in_EAX != 0) && (*(int *)(*(int *)(in_EAX + 0xc) + 4) == 3)) {
      FUN_0010fed0();
      FUN_0010fef0();
    }
    *(byte *)(unaff_EDI + 0x1bc) = *(byte *)(unaff_EDI + 0x1bc) | 2;
    *(undefined1 *)(unaff_EDI + 0x79) = 0;
                    /* WARNING: Could not recover jumptable at 0x0015634f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(*(int *)(unaff_EDI + 0xc) + 0x15c) + 0x10))();
    return;
  }
  return;
}
