/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD63FCCEEA774E7D86A13D68E2F2DACBA1E404520E67B21E81110D018D6FD2B7
 * Entry: 0x0025f5b0, Ghidra index: 8604, label: FUN_0025f5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392fe8;
void FUN_0025f5b0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x1c6b5ccf;
    local_4 = 0xe394a331;
    *piVar1 = (int)&PTR_LAB_00392fe8;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}
