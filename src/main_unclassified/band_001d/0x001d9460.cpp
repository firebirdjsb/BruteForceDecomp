/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CD146A4590C17B1D7B87EDDF9C9B3C9789E60E6104F7DF75203DFD13F2131F3
 * Entry: 0x001d9460, Ghidra index: 6464, label: FUN_001d9460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d9460(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    *in_EAX = *param_1;
    FUN_00087940(in_EAX + 1,0,0xffffffff);
    FUN_0001f4f0(param_1 + 8,0,0xffffffff);
    in_EAX[0xf] = param_1[0xf];
    in_EAX = in_EAX + 0x10;
  }
  return in_EAX;
}
