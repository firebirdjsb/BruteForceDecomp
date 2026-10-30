/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 911E4E1A666BF8407E8A48BF7A695731CCCFD6DA7BE69D89703B5DA98E32DCDB
 * Entry: 0x0009b260, Ghidra index: 1858, label: FUN_0009b260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern undefined4 FUN_00237ff0(int *param_1);

extern uint32_t PTR_LAB_003a1074;
void FUN_0009b260(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0xe7658e4;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0xe7658e4;
    *piVar1 = (int)&PTR_LAB_003a1074;
  }
  FUN_00237ff0(&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}
