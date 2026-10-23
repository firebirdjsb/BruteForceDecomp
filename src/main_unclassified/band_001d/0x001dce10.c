/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E865D9B893E6813E8AC96A6B77F4D2B91667A011FD638706D560D106072E0736
 * Entry: 0x001dce10, Ghidra index: 6596, label: FUN_001dce10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dce10(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puStack00000004;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    puStack00000004 = in_EAX + 1;
    FUN_001cb420();
    return;
  }
  return;
}
