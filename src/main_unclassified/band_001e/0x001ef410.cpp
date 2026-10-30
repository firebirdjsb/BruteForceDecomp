/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D57259E6BCA514C14B3ADCEA93DC24BD1DF5F413D42FC61F89ECBF3015F2EFEF
 * Entry: 0x001ef410, Ghidra index: 6967, label: FUN_001ef410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t DAT_00469914;
extern uint32_t DAT_00469918;
undefined4 FUN_001ef410(int param_1)

{
  int in_ECX;
  
  FUN_001ed400();
  FUN_001ed440();
  *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x30) = 60000;
  XAPILIB__Sleep(500);
  *(undefined4 *)(in_ECX + 0x1c) = 3;
  DAT_00469914 = *(undefined4 *)(param_1 + 0x1c);
  DAT_00469918 = 1;
  DAT_004698d0 = 0;
  FUN_00085200();
  return 0;
}
