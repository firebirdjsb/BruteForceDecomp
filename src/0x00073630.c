/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2F12066782F1D10CCF518E39A880E218035E7F8445480D0F68B918FF5878ACA
 * Entry: 0x00073630, Ghidra index: 1302, label: FUN_00073630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00073630(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_EDX;
  int unaff_EBX;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)0x0;
  if (*(undefined4 **)(in_EDX + 0xc) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)**(undefined4 **)(in_EDX + 0xc);
  }
  do {
    if (puVar3 == *(undefined4 **)(in_EDX + 0xc)) {
      return;
    }
    iVar1 = puVar3[2];
    if ((*(int *)(iVar1 + 0x54) == 1) && (*(int *)(iVar1 + 0x148) == unaff_EBX)) {
      iVar2 = iVar1;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while (iVar2 == 0);
  return;
}
