/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDBA571D8620D7DB6F4860885E5A5C827F105843D89DB21176800352548BF532
 * Entry: 0x001aecf0, Ghidra index: 5562, label: FUN_001aecf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001aecf0(void)

{
  int iVar1;
  uint in_ECX;
  int in_EDX;
  uint uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* guest32 SEH stack word, native FS:0 TBD */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308ef0); /* original push imm32 at 0x001aecf5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (in_ECX < 0xe07039) {
    iVar3 = 0;
    if (*(int *)(in_EDX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 4)) / 0x124;
    }
    if (uVar2 < in_ECX) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce510();
      local_8 = 0xffffffff;
      if (*(int *)(in_EDX + 4) != 0) {
        iVar3 = (*(int *)(in_EDX + 8) - *(int *)(in_EDX + 4)) / 0x124;
      }
      if (*(int *)(in_EDX + 4) != 0) {
        FUN_00161660();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_EDX + 0xc) = in_ECX * 0x124 + iVar1;
      *(int *)(in_EDX + 8) = iVar3 * 0x124 + iVar1;
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
