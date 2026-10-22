/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF0620080478E96FE24061B39C3177C72D873ABE35469650C3461F9C829E5825
 * Entry: 0x001a9df0, Ghidra index: 5482, label: FUN_001a9df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a9df0(void)

{
  int unaff_EBX;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(unaff_EBX + 4);
  iVar2 = 0x1b;
  do {
    *puVar1 = 0;
    FUN_0001fe40(puVar1 + 1,4,4,&LAB_0012de40);
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
