/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00DF423EB6AD32C25D007632AF56212DEB9FE8F0E917D3F4A0D7325BBCCD00D7
 * Entry: 0x0024b9f0, Ghidra index: 8259, label: FUN_0024b9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024b9f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    FUN_00235c70();
    in_EAX = in_EAX + 0x14;
  }
  return in_EAX;
}
