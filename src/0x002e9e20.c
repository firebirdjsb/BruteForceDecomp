/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B4952B69F8DE68EFB8A8C4CEF91D569D6C94B430A209058A6BDAEC4FD39DB98
 * Entry: 0x002e9e20, Ghidra index: 10564, label: FUN_002e9e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e9e20(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  in_ECX[7] = param_1;
  in_ECX[8] = param_2;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  return;
}
