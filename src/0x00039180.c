/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71A5CA7B5FE79D09EF9662B29430EC253078AB22C8A4C21DA2EF76C30ADA36B8
 * Entry: 0x00039180, Ghidra index: 393, label: FUN_00039180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f68;
void FUN_00039180(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307ee0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &PTR_FUN_003a4f68;
      param_1[5] = 0;
      uVar1 = *(undefined4 *)(in_ECX + 0xc);
      uVar2 = *(undefined4 *)(in_ECX + 8);
      param_1[1] = *(undefined4 *)(in_ECX + 4);
      param_1[2] = uVar2;
      param_1[3] = uVar1;
      if (param_1[5] != *(int *)(in_ECX + 0x14)) {
        FUN_0008f6a0(*(int *)(in_ECX + 0x14));
      }
    }
    param_1 = param_1 + 6;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
