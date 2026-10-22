/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD3B55BB096AF7D884AF8CE4B92B4D0DAD4610D040DB69C2A8B8838DF030E6CB
 * Entry: 0x0009c4c0, Ghidra index: 1865, label: FUN_0009c4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0fc4;
void FUN_0009c4c0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0xf6e8f81b;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x91707e5;
    *piVar1 = (int)&PTR_LAB_003a0fc4;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
