/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4FB757965C8371F4AB26BB5D78D9D94EA035D0BF67511C1E33A227EE383F1F6
 * Entry: 0x001aee30, Ghidra index: 5563, label: FUN_001aee30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001aee30(void)

{
  int iVar1;
  uint in_ECX;
  int in_EDX;
  uint uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* guest32 SEH stack word, native FS:0 TBD */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00309800); /* original push imm32 at 0x001aee35 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (in_ECX < 0xca4588) {
    if (*(int *)(in_EDX + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_EDX + 0xc) - *(int *)(in_EDX + 4)) / 0x144;
    }
    if (uVar2 < in_ECX) {
      iVar1 = FUN_002ea01d();
      local_8 = 0;
      FUN_001ce540();
      local_8 = 0xffffffff;
      if (*(int *)(in_EDX + 4) == 0) {
        *(uint *)(in_EDX + 0xc) = in_ECX * 0x144 + iVar1;
        *(int *)(in_EDX + 8) = iVar1;
        *(int *)(in_EDX + 4) = iVar1;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      FUN_00162a20(*(undefined4 *)(in_EDX + 8));
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EDX + 4));
    }
  }
  else {
    FUN_00038940();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
