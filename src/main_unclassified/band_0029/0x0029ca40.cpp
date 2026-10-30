/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A67BCCB51F78FF2060BBB582E6E3E29FA9A7CE2767EFB772A42E09653D310D07
 * Entry: 0x0029ca40, Ghidra index: 9448, label: FUN_0029ca40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0029ca40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00295460();
  iVar2 = FUN_0029c5b0();
  uVar3 = FUN_0029c5b0();
  *(uint *)(iVar1 + 0x14) = uVar3 | iVar2 << 0x10;
  iVar2 = FUN_0029c7a0();
  *(int *)(iVar1 + 0x18) = iVar2;
  if (iVar2 == 0) {
    uVar4 = FUN_00294810();
    *(undefined4 *)(iVar1 + 0x18) = uVar4;
  }
  uVar4 = FUN_0029c720();
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  FUN_0029c850(iVar1);
  FUN_0029c8e0(iVar1,param_2);
  return iVar1;
}
