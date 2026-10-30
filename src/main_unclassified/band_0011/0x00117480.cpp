/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47CF7B61AE540A19385D807B2D3D96DD9A402E6A81853ECD7F436D88828612C4
 * Entry: 0x00117480, Ghidra index: 3596, label: FUN_00117480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00117480(void)

{
  int unaff_EBX;
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(unaff_EBX + 0x228);
  iVar1 = 3;
  do {
    if (*piVar2 != 0) {
      FUN_0023d3e0();
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(unaff_EBX + 0x214) = 0;
  *(undefined1 *)(unaff_EBX + 0x225) = 2;
  return;
}
