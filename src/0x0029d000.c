/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 285CDC0CC4570F58D9ECD57C922BB6E0FADDFD4FB59AFD0207E0D6074FCDB79E
 * Entry: 0x0029d000, Ghidra index: 9453, label: FUN_0029d000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0029d000(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00234c90();
  if (iVar1 != 0) {
    iVar1 = FUN_00234c90();
    if (iVar1 != 0) {
      iVar1 = FUN_00234c90();
      if (iVar1 != 0) {
        return 0x80004005;
      }
    }
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}
