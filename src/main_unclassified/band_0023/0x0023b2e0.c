/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85A547EFF6A802D4BF5FDEE4639CA741A8E56F2A8653C708CDB7ABAF72EBC70F
 * Entry: 0x0023b2e0, Ghidra index: 7909, label: FUN_0023b2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443318;
extern uint32_t PTR_FUN_00394088;
void FUN_0023b2e0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  uint32_t guest_constructor_context = (uint32_t)(uintptr_t)in_ECX;
  
  *in_ECX = &PTR_FUN_00394088;
  (**(code **)(*DAT_00443318 + 0x10))(DAT_00443318);
  FUN_00264430();
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  /* PUSH ECX at 0x0023B2E0 reserves and seeds this 32-bit guest stack slot. */
  FUN_0023b9c0(&guest_constructor_context,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[2]);
}
