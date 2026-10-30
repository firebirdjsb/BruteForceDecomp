/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDD078237E8444B50EB1831DC725A395052C339862B3F906BED5BC9AD50DAB1D
 * Entry: 0x002540b0, Ghidra index: 8405, label: FUN_002540b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039394c;
undefined4 FUN_002540b0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x1b54c456;
    local_4 = 0xe4ab3baa;
    *piVar1 = (int)&PTR_LAB_0039394c;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
