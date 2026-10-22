/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88B1EFC8C70DFAFF15BCA2FCFDFF6D5792C30E8D19182D6518C4889DAF3A2229
 * Entry: 0x002c44e0, Ghidra index: 10054, label: FUN_002c44e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c44e0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EDI;
  
  uVar3 = (uint)*(ushort *)(unaff_EDI + 0x3e);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    iVar2 = *(int *)(*(int *)(unaff_EDI + 0x40) + uVar3 * 4);
    piVar1 = (int *)(iVar2 + 0x1c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_002c41e0();
      *(undefined4 *)(iVar2 + 0x1c) = 5;
    }
  }
  return;
}
