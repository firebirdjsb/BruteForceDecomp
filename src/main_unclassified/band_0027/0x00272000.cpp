/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C41B257D96DCD7325B4B46C7AD1ABD0EC6140206264E8D58E600E40C44573AC8
 * Entry: 0x00272000, Ghidra index: 8827, label: FUN_00272000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00272000(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  
  puVar2 = (undefined4 *)0x0;
  if (*(undefined4 **)(in_ECX + 0x9c) != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0x9c);
  }
  while( true ) {
    if (puVar2 == *(undefined4 **)(in_ECX + 0x9c)) {
      iVar1 = *(int *)(in_ECX + 0x9c);
      iVar3 = FUN_000ff730(in_ECX + 0x98,iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
      FUN_000b2a50();
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      return 1;
    }
    if (puVar2[2] == param_1) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return 0;
}
