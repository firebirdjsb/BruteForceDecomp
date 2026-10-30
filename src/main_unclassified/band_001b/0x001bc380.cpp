/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 944086E527002625361E90C30D09EA948D6F312C1D63229C5F46C26B1329537E
 * Entry: 0x001bc380, Ghidra index: 5739, label: FUN_001bc380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001bc380(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original guest32 SEH stack word; FS:0 adapter pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x00308e80); /* XBE push imm32 at 0x001bc385 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x44;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar3 != 0) {
    if (uVar3 < 0x3c3c3c4) {
      iVar1 = FUN_002ea01d(uVar3 * 0x44);
      *(int *)(param_1 + 4) = iVar1;
      *(int *)(param_1 + 8) = iVar1;
      *(uint *)(param_1 + 0xc) = uVar3 * 0x44 + iVar1;
    }
    else {
      FUN_00038940(param_1);
    }
    local_8 = 0;
    uVar2 = FUN_001cf870(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
