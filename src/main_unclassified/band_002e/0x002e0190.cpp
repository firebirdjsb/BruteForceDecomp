/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 154CE20BD3B49762FD9EC06CE488C552CA37F5A967454B23E7578729E98CA8C8
 * Entry: 0x002e0190, Ghidra index: 10349, label: FUN_002e0190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e0190(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return param_1;
  case 1:
    return 0xfffffffd;
  case 2:
    return 0xffffffff;
  case 3:
    return 0xfffffffe;
  default:
    return 0;
  }
}
