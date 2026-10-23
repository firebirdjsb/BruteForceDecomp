/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 632CD51CBD4E4B03A21974FE4F9F83CA3C2E6EB321F787F2825F56FC5A562AF3
 * Entry: 0x001dd220, Ghidra index: 6619, label: FUN_001dd220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd220(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = 0;
    FUN_001cd360();
  }
  return;
}
