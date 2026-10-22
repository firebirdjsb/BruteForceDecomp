/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDBFE8D8B720FE60DAF1F383E0145206C7628364A40514E141374DED3CB1F84D
 * Entry: 0x00311ae1, Ghidra index: 11913, label: FUN_00311ae1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00311ae1(undefined4 *param_1)

{
  int in_ECX;
  
  if (param_1 == (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0xc) = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x10) = 0xffffffff;
  }
  else {
    *(undefined4 *)(in_ECX + 0xc) = *param_1;
    *(undefined4 *)(in_ECX + 0x10) = param_1[1];
  }
  return;
}
