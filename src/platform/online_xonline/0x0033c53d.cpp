/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 657BDA6D4FDA494E528E9EAFE7B6F70CA0AED1E50C2972992084C8AE0256FEC9
 * Entry: 0x0033c53d, Ghidra index: 12553, label: FUN_0033c53d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callee draft only; original Xbox ABI_UNVERIFIED. */
extern void FUN_0033bd35(void);
undefined4 FUN_0033c53d(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0033bd35();
  }
  else {
    uVar1 = 0x80004005;
  }
  return uVar1;
}
