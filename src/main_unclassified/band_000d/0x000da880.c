/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C4198F134FE492010DDAA5A70910940965062A9D937B3A33850D10D75DFD53E
 * Entry: 0x000da880, Ghidra index: 2694, label: FUN_000da880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000da880(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = FUN_000ff730(param_1 + 0x24,iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000008);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  if ((*(byte *)(param_1 + 0xc50) & 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar2 = FUN_000ff730(param_1 + 0x48,iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000008);
    FUN_000b2a50();
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  return;
}
