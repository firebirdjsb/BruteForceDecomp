/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FD6BA00CFD2AAC22AF231AF06AFFB8036AE5819D31BBE29279A6DAB620DCA27
 * Entry: 0x00316674, Ghidra index: 12143, label: FUN_00316674
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00316674(int param_1,undefined4 param_2,code *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 8) = param_2;
  }
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xc) = param_5;
  }
  if (param_3 == (code *)0x0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      NtSetEvent(*(int *)(param_1 + 0x10),0);
    }
  }
  else {
    (*param_3)(param_4,*(undefined4 *)(param_1 + 0x10),param_5);
  }
  return;
}
