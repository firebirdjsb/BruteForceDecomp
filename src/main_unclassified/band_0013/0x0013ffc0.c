/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFC058A40D6C1B7748FBD4BBE4CBFB14360903D30D6CACC7D5CBF611A5BDACF3
 * Entry: 0x0013ffc0, Ghidra index: 4073, label: FUN_0013ffc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013ffc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  FUN_000e1150(param_1 + 0x14,&param_1,uVar3,puVar1);
  if (*(int *)(iVar2 + 0x3c) != 0) {
    FUN_0001d590(iVar2 + 0x38,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar2 + 0x3c));
  }
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  FUN_0013f660();
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(byte *)(iVar2 + 0xc) = *(byte *)(iVar2 + 0xc) | 2;
  return;
}
