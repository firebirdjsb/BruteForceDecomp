/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FCC506D8ADC1DC1F60B9FE9C16D1BC168B821A50B35085146B915EE87B2E181
 * Entry: 0x001ba470, Ghidra index: 5721, label: FUN_001ba470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001ba470(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  uint32_t puStack_c; /* original guest32 SEH word; native FS:0 adapter TBD */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003093f0); /* original x86 push imm32 at 0x001ba475 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x14;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar3 != 0) {
    if (uVar3 < 0xccccccd) {
      iVar1 = FUN_002ea01d(uVar3 * 0x14);
      *(int *)(param_1 + 4) = iVar1;
      *(int *)(param_1 + 8) = iVar1;
      *(uint *)(param_1 + 0xc) = uVar3 * 0x14 + iVar1;
    }
    else {
      FUN_00038940(param_1);
    }
    local_8 = 0;
    uVar2 = FUN_001cf450(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
