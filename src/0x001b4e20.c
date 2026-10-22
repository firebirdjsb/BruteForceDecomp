/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 838BB14A75D65E586C21F834AF26CBF6A4FEEAF30255124866136F299022BDFF
 * Entry: 0x001b4e20, Ghidra index: 5662, label: FUN_001b4e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b4e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0xc;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0xc;
    }
    FUN_001c5830(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_3);
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0xc)) {
      FUN_001c57b0(in_ECX,local_4,*(int *)(in_ECX + 4) + in_EAX * 0xc,*(int *)(in_ECX + 8));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_3);
}
