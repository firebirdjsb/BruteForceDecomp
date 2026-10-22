/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E80C28484BF990B4B36BB2F6DC9019A30F7D773662A89C4BCAB412B8916B6389
 * Entry: 0x001e1000, Ghidra index: 6728, label: FUN_001e1000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698bc;
undefined4 FUN_001e1000(void)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 local_18;
  
  if (((byte)DAT_004698bc & 1) != 0) {
    uVar1 = (**(code **)(*in_ECX + 0x34))();
    return uVar1;
  }
  local_18 = local_18 & 0xffffff00;
  FUN_00239e50();
  uVar1 = (**(code **)(*in_ECX + 0x34))();
  if (local_18 < 0x10) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(0);
}
