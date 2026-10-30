/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F47B7D4EE52587916F58F2B626F3E5DD1B54829AAAFA2EB9F2C0C7CEB1339B91
 * Entry: 0x00104c90, Ghidra index: 3330, label: FUN_00104c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469b58;
undefined4 FUN_00104c90(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e8))();
  (**(code **)(*DAT_00469940 + 0x88))(0,*(undefined4 *)(iVar1 + 0xc));
  (**(code **)(*DAT_00469940 + 0x88))(3,*(undefined4 *)(iVar1 + 0xc));
  (**(code **)(*DAT_00469940 + 0x88))(2,*(undefined4 *)(iVar1 + 0xc));
  (**(code **)(*DAT_00469940 + 0x88))(1,*(undefined4 *)(iVar1 + 0x10));
  (**(code **)(*DAT_00469940 + 0x90))();
  return 1;
}
