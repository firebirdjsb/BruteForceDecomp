/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6F1161568F7E1AC376DEA2CB1CD8E7735BDB8B04D997F73B82CD352C2BF276D
 * Entry: 0x0009a5a0, Ghidra index: 1853, label: FUN_0009a5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a1120;
void FUN_0009a5a0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0x1df292a1;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x1df292a1;
    *piVar1 = (int)&PTR_LAB_003a1120;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
