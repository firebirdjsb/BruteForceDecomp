/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BDFFC8C5C2A19244ACC8C65F154F750009EC790638C5AC266DA9FED9E785E5A
 * Entry: 0x001ab860, Ghidra index: 5511, label: FUN_001ab860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ab860(void)

{
  int iVar1;
  uint in_ECX;
  int in_EDX;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* guest SEH DWORD; native FS:0 bridge required */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003088c0); /* original x86 push imm32 at 0x001ab865 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (in_ECX < 0x924924a) {
    iVar3 = 0;
    if (*(int *)(in_EDX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 4)) / 0x1c;
    }
    if (uVar2 < in_ECX) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_000e2820();
      local_8 = 0xffffffff;
      if (*(int *)(in_EDX + 4) != 0) {
        iVar3 = (*(int *)(in_EDX + 8) - *(int *)(in_EDX + 4)) / 0x1c;
      }
      if (*(int *)(in_EDX + 4) != 0) {
        FUN_000762d0();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*(undefined4 *)(in_EDX + 4));
      }
      *(uint *)(in_EDX + 0xc) = in_ECX * 0x1c + iVar1;
      *(int *)(in_EDX + 8) = iVar3 * 0x1c + iVar1;
      *(int *)(in_EDX + 4) = iVar1;
      *unaff_FS_OFFSET = local_10;
      return;
    }
  }
  else {
    FUN_00038940();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
