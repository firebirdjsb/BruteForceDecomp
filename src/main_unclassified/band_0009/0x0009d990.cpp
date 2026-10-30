/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E99C1352E0F805030FC25EAA3F09ADBABE630F6B0D66647B2A9E96BEB97B355A
 * Entry: 0x0009d990, Ghidra index: 1870, label: FUN_0009d990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern undefined4 FUN_00237ff0(int *param_1);

extern uint32_t PTR_LAB_003a0f18;
void FUN_0009d990(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0xe938eea6;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x16c7115a;
    *piVar1 = (int)&PTR_LAB_003a0f18;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
