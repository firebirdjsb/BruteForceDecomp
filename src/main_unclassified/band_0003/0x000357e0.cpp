/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC6B548225C486AD9E5292F1379F270A8547E4562A01BA8177C0103B43D3E8F7
 * Entry: 0x000357e0, Ghidra index: 351, label: FUN_000357e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000357e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  
  uVar2 = FUN_000120f0();
  if (-1 < unaff_ESI) {
    iVar1 = *(int *)(uVar2 + 0x2e8);
    uVar2 = iVar1 + 0x1b8;
    if ((*(int *)(iVar1 + 0x1b8) == param_1) && (*(int *)(iVar1 + 0x1bc) == unaff_ESI)) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}
