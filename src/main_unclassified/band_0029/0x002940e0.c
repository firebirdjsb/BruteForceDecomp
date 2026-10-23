/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89284801934D7CDD77193A5D7574665C65E88FA43D12D18888D7493DEBDDBE89
 * Entry: 0x002940e0, Ghidra index: 9278, label: FUN_002940e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002940e0(void)

{
  undefined4 *in_EAX;
  
  for (; in_EAX != (undefined4 *)0x0; in_EAX = (undefined4 *)*in_EAX) {
    if (in_EAX[3] == -1) {
      FUN_0028ae10();
    }
  }
  return;
}
