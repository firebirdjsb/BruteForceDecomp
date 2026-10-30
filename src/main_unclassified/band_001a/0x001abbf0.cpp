/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85469C9769135A900846495502FBA13CB6605D71E15B1DDB9678352455FB66B2
 * Entry: 0x001abbf0, Ghidra index: 5514, label: FUN_001abbf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001abbf0(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint in_EDX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original 32-bit SEH guest word; FS:0 adapter pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00307c70); /* original XBE push imm32 at 0x001abbf5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (in_EDX < 0x400000) {
    if (*(int *)(in_ECX + 4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4) >> 10;
    }
    if (uVar1 < in_EDX) {
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cde50(in_ECX);
      local_8 = 0xffffffff;
      if (*(int *)(in_ECX + 4) == 0) {
        *(uint *)(in_ECX + 0xc) = in_EDX * 0x400 + iVar2;
        *(int *)(in_ECX + 8) = iVar2;
        *(int *)(in_ECX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
  }
  else {
    FUN_00038940();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
