/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49CC5E660F1878E4F8816BB2285CFE5FCEDAABBA0FC588311C53ACD42EC67473
 * Entry: 0x000c6380, Ghidra index: 2436, label: FUN_000c6380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c6380(int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x68) + 0x30))();
  if ((iVar1 != 0) &&
     ((((iVar1 = *(int *)(*(int *)(unaff_ESI + 0x68) + 0x90), iVar1 == 0 || (iVar1 == 1)) ||
       (iVar1 == 2)) || ((iVar1 == 4 || (iVar1 == 8)))))) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0x80) + 0x30) = 1;
    return;
  }
  if (param_1 == 1) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0x80) + 0x30) = 5;
    return;
  }
  if (param_1 != 2) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0x80) + 0x30) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(unaff_ESI + 0x80) + 0x30) = 6;
  return;
}
