/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1420CBF31647013F5E06F4A3554D180DA43E556A0B9067A295D8558AFE0FA386
 * Entry: 0x00374c34, Ghidra index: 13435, label: FUN_00374c34
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox x86 0x00374CAE..0x00374CD9: guest GPU command offsets, not
 * C function/label symbols. Native GPU mapping remains unimplemented. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400750;
extern uint32_t DAT_004009a0;
extern uint32_t PTR_DAT_00400754;
undefined4 FUN_00374c34(int *param_1,int param_2)

{
  int iVar1;
  int unaff_EBX;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  iVar1 = *param_1;
  FUN_00374cf1(&local_10);
  local_8 = (int *)((unaff_EBX + 0x10024) * 0x10 + iVar1);
  local_c = (int *)((unaff_EBX + 0x40090) * 0x10 + iVar1);
  do {
    FUN_003793b5();
    *local_8 = 0;
    *local_c = 0;
    *(uint *)(&DAT_00400750 + iVar1) = unaff_EBX * 4 + 0x10U & 0x1ffc | 0xea0000;
    *(undefined4 *)((int)&PTR_DAT_00400754 + iVar1) = 0;
  } while (*local_8 != *local_c);
  *(undefined4 *)(UINT32_C(0x00100300) + unaff_EBX * 4 + iVar1) = 0;
  *(undefined4 *)((uintptr_t)UINT32_C(0x00400980) + unaff_EBX * 4 + iVar1) = 0;
  *(uint *)(&DAT_00400750 + iVar1) = unaff_EBX * 4 + 0x90U & 0x1ffc | 0xea0000;
  *(undefined4 *)((int)&PTR_DAT_00400754 + iVar1) = 0;
  if (param_2 != 0) {
    *(undefined4 *)((uintptr_t)UINT32_C(0x00100324) + iVar1) = 0;
    *(undefined4 *)(&DAT_004009a0 + iVar1) = 0;
  }
  *(undefined4 *)(iVar1 + 0x3220) = local_10;
  return 1;
}
