/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B18C72D0ECA5F31BE6F688D6D814C98E8C2B50AB804CF93B49A638CB71CEA933
 * Entry: 0x00261bd0, Ghidra index: 8644, label: FUN_00261bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392c54;
undefined4 FUN_00261bd0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = 0;
  piVar1 = (int *)FUN_002ea01d(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[1] = 1;
    piVar1[2] = -0x90025ed;
    local_4 = 0xf6ffda13;
    *piVar1 = (int)&PTR_LAB_00392c54;
    FUN_00237ff0(&local_4);
    (**(code **)(*piVar1 + 8))(piVar1);
    return 1;
  }
  return 0;
}
