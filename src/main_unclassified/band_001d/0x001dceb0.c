/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DA913F43A5C73F5AA2D4C39CB21855F8F1D7292B4F330B8864126BBF114713C
 * Entry: 0x001dceb0, Ghidra index: 6601, label: FUN_001dceb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dceb0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puStack00000004;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    puStack00000004 = in_EAX + 1;
    FUN_001bddb0();
    return;
  }
  return;
}
