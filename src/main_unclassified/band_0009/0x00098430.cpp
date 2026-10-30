/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 389CC6EDAD4B662BCE0C324315A225E5237FAC16E27D293D12DD6328ACC66C50
 * Entry: 0x00098430, Ghidra index: 1837, label: FUN_00098430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a1340;
void FUN_00098430(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0xe2a21c12;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x1d5de3ee;
    *piVar1 = (int)&PTR_LAB_003a1340;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
