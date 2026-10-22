/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 388C6C2355BE800C58643D3D1C6441AF848515D966A1B0CFE13D6E785F74B345
 * Entry: 0x002f3867, Ghidra index: 10840, label: FUN_002f3867
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002f3867(int param_1)

{
  if (param_1 < 10) {
    param_1 = param_1 + 0x30;
  }
  else {
    param_1 = param_1 + 0x37;
  }
  return param_1;
}
