/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D323EDAAF64D697D71A902066DCA8C7A9AC701729AF3F562A52CB8C3F7596DD
 * Entry: 0x001e2170, Ghidra index: 6744, label: FUN_001e2170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
undefined4 FUN_001e2170(void)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  
  switch(in_EAX) {
  case 0:
    (**(code **)(*DAT_00469940 + 8))();
    uVar1 = FUN_001e19f0();
    return uVar1;
  case 1:
    uVar1 = FUN_001e1aa0();
    return uVar1;
  case 2:
    uVar1 = FUN_001e19f0();
    return uVar1;
  case 3:
    uVar1 = FUN_001e19f0();
    return uVar1;
  case 4:
    uVar1 = FUN_001e1d00();
    return uVar1;
  case 5:
    return 1;
  case 6:
    uVar1 = FUN_001e19f0();
    return uVar1;
  default:
    return 0;
  }
}
