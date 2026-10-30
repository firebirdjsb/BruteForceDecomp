/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1664CB42B2606BAFDB150114723A039D6C2A7E48000763108BDF39B38C34DA65
 * Entry: 0x00347ad7, Ghidra index: 12873, label: FUN_00347ad7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347ad7(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xbcc) != 0) {
    XAPILIB__LocalFree(*(int *)(in_ECX + 0xbcc));
  }
  return;
}
