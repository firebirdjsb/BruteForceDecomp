/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53CDA6AA3BA8C7CF2D26D6854711FF0E86471B76AF9AB278DAB574D00A995D28
 * Entry: 0x002add80, Ghidra index: 9702, label: FUN_002add80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038f444;
undefined4 FUN_002add80(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x19bb3fdf;
    local_4 = 0xe644c021;
    *piVar1 = (int)&PTR_LAB_0038f444;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
