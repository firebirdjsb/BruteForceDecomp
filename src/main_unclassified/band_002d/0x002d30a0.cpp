/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE970C7BAFB1ADD0799E8306ADBB60632AB092641336B899835C8B3673514738
 * Entry: 0x002d30a0, Ghidra index: 10197, label: FUN_002d30a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002d30a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x44);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x28) + 0x24);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    iVar4 = (int)*(short *)(puVar2 + 3) + (int)puVar2;
    if (((*(int *)(*(short *)(puVar2 + 3) + 0x10 + (int)puVar2) == iVar1) ||
        (*(int *)(iVar4 + 0x24) == iVar1)) && (iVar3 = FUN_002c61a0(), iVar3 != 0)) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return iVar4;
}
