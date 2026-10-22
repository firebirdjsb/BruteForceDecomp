/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1684573115C115369B93A63BFC42F5371121524227C7042BE32E6E2CE169A55F
 * Entry: 0x001a9670, Ghidra index: 5468, label: FUN_001a9670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a9670(void)

{
  int *in_EAX;
  int in_ECX;
  uint uVar1;
  
  uVar1 = (uint)(*in_EAX != -1);
  if (uVar1 == 0) {
    in_ECX = 1;
  }
  if (uVar1 + in_ECX == 0) {
    *in_EAX = -1;
  }
  else if (*in_EAX == -1) {
    *in_EAX = 0;
    return;
  }
  return;
}
