/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3959314A63CF24C13C48500C08CF6632C9D9D00D398132F1F9030F0DDF9E7EB
 * Entry: 0x00092e70, Ghidra index: 1802, label: FUN_00092e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443308;
undefined4 FUN_00092e70(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x78))();
  (**(code **)(*param_1 + 0x78))();
  iVar1 = (**(code **)(*param_1 + 0x7c))();
  param_1[2] = iVar1;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*DAT_00443308 + 0x44))(DAT_00443308,param_1);
  FUN_00092df0();
  return 1;
}
