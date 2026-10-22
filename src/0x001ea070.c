/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE858DCBED46484ECB68EE70453886FD2E180D2E028A661DBC117210105C75A4
 * Entry: 0x001ea070, Ghidra index: 6869, label: FUN_001ea070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ea070(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  uint *puVar2;
  int unaff_EBX;
  int iVar3;
  uint in_stack_00000024;
  
  while (unaff_EBX < in_ECX) {
    iVar3 = (in_ECX + -1) / 2;
    uVar1 = *(uint *)(iVar3 * 0x20 + param_1);
    if (param_2 <= uVar1) break;
    puVar2 = (uint *)(in_ECX * 0x20 + param_1);
    *puVar2 = uVar1;
    FUN_00087940(puVar2 + 1,0,0xffffffff);
    in_ECX = iVar3;
  }
  puVar2 = (uint *)(in_ECX * 0x20 + param_1);
  *puVar2 = param_2;
  FUN_00087940(puVar2 + 1,0,0xffffffff);
  if (7 < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_4);
  }
  return;
}
