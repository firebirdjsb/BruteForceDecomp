/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A37F7F5357FC6E4D43DDD17804E0B561DE20B82969AAEECDCA1FD654CDA1B91
 * Entry: 0x001bb640, Ghidra index: 5733, label: FUN_001bb640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001bb640(int param_1)

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
  puStack_c = UINT32_C(0x003093b0); /* XBE push imm32 at 0x001bb645 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar3 != 0) {
    if (uVar3 < 0x924924a) {
      iVar1 = FUN_002ea01d(uVar3 * 0x1c);
      *(int *)(param_1 + 4) = iVar1;
      *(int *)(param_1 + 8) = iVar1;
      *(uint *)(param_1 + 0xc) = uVar3 * 0x1c + iVar1;
    }
    else {
      FUN_00038940(param_1);
    }
    local_8 = 0;
    uVar2 = FUN_001cf6b0(param_1,*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
