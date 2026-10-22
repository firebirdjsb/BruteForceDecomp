/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFFC76EA16D640B59C26BC6FA671677A45B46C990C38C2D2DDB364F036094C24
 * Entry: 0x001dce70, Ghidra index: 6599, label: FUN_001dce70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dce70(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puStack00000004;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    puStack00000004 = in_EAX + 1;
    FUN_001cb6b0();
    return;
  }
  return;
}
