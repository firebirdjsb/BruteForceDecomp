/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 510D401866059D80A48BC086105154E74C00BCEE88462638D6B39DAC740E14F6
 * Entry: 0x002a56e0, Ghidra index: 9567, label: FUN_002a56e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046af48;
undefined4 FUN_002a56e0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_2 + 0x2c))(param_2);
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  FUN_002a58a0(&DAT_0046af48);
  (**(code **)(*piVar1 + 8))(piVar1);
  (**(code **)(*param_2 + 8))(param_2);
  return 0;
}
