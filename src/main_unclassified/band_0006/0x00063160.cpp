/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1E92E4248C27AC885501632B5E1717E3D77FA334EE58EE0A8025754BFDE1043
 * Entry: 0x00063160, Ghidra index: 1070, label: FUN_00063160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000627f0(void);

void FUN_00063160(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_000627f0(param_1 + 8);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0xc));
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
