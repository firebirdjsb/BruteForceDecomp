/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A098BD8DB01E9A793D918AC436079412634FE3A9F96CFBC1BA856D0271130F17
 * Entry: 0x00094460, Ghidra index: 1812, label: FUN_00094460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00094370(int param_1);

extern uint32_t *DAT_00443308;
undefined4 FUN_00094460(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x78))();
  FUN_00094370(param_1);
  (**(code **)(*param_1 + 0x78))();
  iVar1 = (**(code **)(*param_1 + 0x7c))();
  param_1[2] = iVar1;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*DAT_00443308 + 0x44))(DAT_00443308,param_1);
  return 1;
}
