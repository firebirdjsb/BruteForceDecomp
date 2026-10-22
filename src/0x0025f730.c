/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C90A16B0982498546D7D5B606F2B851C5B6240A3BDE24CA444DA971F5B15A5E4
 * Entry: 0x0025f730, Ghidra index: 8605, label: FUN_0025f730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025f730(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    FUN_0025e7a0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
