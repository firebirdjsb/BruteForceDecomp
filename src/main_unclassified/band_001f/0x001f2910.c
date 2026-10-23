/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1638243708492290D6EB04F03D88A2E83EC2B9529BD3F7A695C1B3A8BE861A3A
 * Entry: 0x001f2910, Ghidra index: 7008, label: FUN_001f2910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f2910(float param_1)

{
  int in_ECX;
  int in_EDX;
  
  param_1 = param_1 + *(float *)(in_EDX + 0x30 + in_ECX * 4);
  if (param_1 < -1.0) {
    *(undefined4 *)(in_EDX + 0x30 + in_ECX * 4) = 0xbf800000;
    return;
  }
  if (1.0 < param_1) {
    param_1 = 1.0;
  }
  *(float *)(in_EDX + 0x30 + in_ECX * 4) = param_1;
  return;
}
