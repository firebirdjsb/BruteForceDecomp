/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6A47FCEDBB6898F865FF5D3FE2620AFDE7250CFE49FCDA96F6743DBD31A1E36
 * Entry: 0x0021c380, Ghidra index: 7526, label: FUN_0021c380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021c380(float param_1)

{
  int in_EAX;
  
  if (!isnan(param_1) && param_1 < 0.0 != (param_1 == 0.0)) {
    *(undefined4 *)(in_EAX + 0xbc) = 0;
    FUN_0021c330();
    return;
  }
  if (1.0 <= param_1) {
    *(undefined4 *)(in_EAX + 0xbc) = 0x3f800000;
    FUN_0021c330();
    return;
  }
  *(float *)(in_EAX + 0xbc) = param_1;
  FUN_0021c330();
  return;
}
