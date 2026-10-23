/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4611701A21907CC01608856F9D161E7E33DD67DB96EFEB519496A851D0D483FF
 * Entry: 0x001328a0, Ghidra index: 3854, label: FUN_001328a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001328a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    *(undefined1 *)(in_EAX + 4) = *(undefined1 *)(param_1 + 4);
    in_EAX = in_EAX + 5;
  }
  return;
}
