/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8ABD734FE093C8B6E9F616366AF827B0A60D324F0C8EC0CCC330C1173276F239
 * Entry: 0x001e07e0, Ghidra index: 6710, label: FUN_001e07e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e07e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *(undefined1 *)(in_EAX + 2) = *(undefined1 *)(param_1 + 2);
    *(undefined1 *)((int)in_EAX + 9) = *(undefined1 *)((int)param_1 + 9);
    in_EAX = in_EAX + 3;
  }
  return;
}
