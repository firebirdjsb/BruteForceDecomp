/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0CDBFA18432506AB2B89A6C2AC067C8B812AFA592BD926155542F0F1F69DD47
 * Entry: 0x001583a0, Ghidra index: 4497, label: FUN_001583a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001583a0(void)

{
  int iVar1;
  int in_ECX;
  
  if ((((*(int *)(in_ECX + 8) != 0) && (iVar1 = *(int *)(in_ECX + 0x6c), iVar1 != 0)) &&
      (iVar1 != -1)) &&
     ((*(int *)(iVar1 + 0x4c) != 0 && (*(int *)(iVar1 + 0x50) - *(int *)(iVar1 + 0x4c) >> 2 != 0))))
  {
    FUN_001582d0(*(int *)(in_ECX + 8),iVar1);
  }
  if ((((*(byte *)(in_ECX + 0x71) & 2) != 0) && (*(int *)(in_ECX + 0x6c) != 0)) &&
     (*(int *)(in_ECX + 0x6c) != -1)) {
    FUN_00235b40();
    iVar1 = *(int *)(in_ECX + 0x6c);
    if (iVar1 != 0) {
      FUN_00235ac0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
    *(undefined4 *)(in_ECX + 0x6c) = 0xffffffff;
  }
  *(undefined2 *)(in_ECX + 0x106) = 0;
  if (*(int *)(in_ECX + 0x108) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 0x108));
  }
  return;
}
