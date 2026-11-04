/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 123A7A537F7017D46AE835359D2F1AC41B576F20C72C43DD5149B30DEBD18561
 * Entry: 0x0017f300, Ghidra index: 5123, label: FUN_0017f300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-observed 0x0017EE90 returns a guest DWORD with no explicit
 * arguments. Implicit guest registers and Xbox ABI remain UNVERIFIED. */
extern undefined4 FUN_0017ee90(void);
undefined4 FUN_0017f300(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0017ee90();
  if (piVar1 != (int *)0x0) {
    if (piVar1[0xb] != param_2) {
      piVar1[0xb] = param_2;
      (**(code **)(*piVar1 + 0x44))();
    }
    return 1;
  }
  return 0;
}
