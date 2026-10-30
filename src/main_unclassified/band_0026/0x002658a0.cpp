/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B290B6B1A709A0C69AC33D89FCA2F8CB509A0D408F3DC134BEECD1E27D4D696
 * Entry: 0x002658a0, Ghidra index: 8725, label: FUN_002658a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392824;
undefined4 FUN_002658a0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0x45dfdf8;
    local_4 = 0x45dfdf8;
    *piVar1 = (int)&PTR_LAB_00392824;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
