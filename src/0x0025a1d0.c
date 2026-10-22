/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C21A57B4F25221FE498A35067EF2BABF48D372E161F2E887A7C4F737E792651E
 * Entry: 0x0025a1d0, Ghidra index: 8517, label: FUN_0025a1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00393510;
undefined4 FUN_0025a1d0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x114a8726;
    local_4 = 0xeeb578da;
    *piVar1 = (int)&PTR_LAB_00393510;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
