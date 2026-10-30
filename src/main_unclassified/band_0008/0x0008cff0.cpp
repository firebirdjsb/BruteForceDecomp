/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6B96BBF72C28C6B7F0A42D3A18B18512A7F165FC70BFE14CC217481574A3C6D
 * Entry: 0x0008cff0, Ghidra index: 1709, label: FUN_0008cff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008cff0(int param_1)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  piVar4 = (int *)(unaff_EBX + 100);
  do {
    iVar1 = FUN_0008c1b0(unaff_EBX);
    if ((iVar1 != 9) || (*piVar4 != 0)) {
      if (iVar3 == param_1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar3 < 4);
  return -1;
}
