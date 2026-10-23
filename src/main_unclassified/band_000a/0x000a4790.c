/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86D89EDA358C48B537EE74E6820E8BA0F486A29B09A9ADAA38823F0B9FA3DDBF
 * Entry: 0x000a4790, Ghidra index: 1957, label: FUN_000a4790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a4790(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EDX;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *in_EDX;
  }
  return;
}
