/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A776A8F373911FCE934531B6550790039D4F49E6C68DA3EAE603E4B7AC70BB37
 * Entry: 0x001d92e0, Ghidra index: 6460, label: FUN_001d92e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d92e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xd) {
    *in_EAX = *param_1;
    FUN_0003d730(in_EAX + 1,param_1 + 1);
    in_EAX = in_EAX + 0xd;
  }
  return in_EAX;
}
