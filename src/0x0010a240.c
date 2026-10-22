/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28F963FEB0492759B59A5C95A69F604DC6F7797F1C5523E3C6DBE35168070D1B
 * Entry: 0x0010a240, Ghidra index: 3423, label: FUN_0010a240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010a240(undefined4 param_1)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0xe0) = param_1;
  *(undefined4 *)(in_EAX + 0xe4) = 0;
  if (*(int *)(in_EAX + 0x74) != 0) {
    if (7 < *(uint *)(in_EAX + 0x78)) {
      FUN_0010a7d0();
      return;
    }
    FUN_0010a7d0();
  }
  return;
}
