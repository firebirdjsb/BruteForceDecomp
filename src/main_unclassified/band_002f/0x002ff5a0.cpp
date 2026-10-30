/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52553304FA6F67E305E628591CE329D6BB385BEACE0313E5B0AF89BF4011EEF1
 * Entry: 0x002ff5a0, Ghidra index: 11066, label: FUN_002ff5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002ff5a0(void)

{
  byte bVar1;
  byte *in_EAX;
  byte *in_ECX;
  bool bVar2;
  
  while( true ) {
    bVar1 = *in_EAX;
    bVar2 = bVar1 < *in_ECX;
    if (bVar1 != *in_ECX) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = in_EAX[1];
    bVar2 = bVar1 < in_ECX[1];
    if (bVar1 != in_ECX[1]) break;
    in_EAX = in_EAX + 2;
    in_ECX = in_ECX + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar2) - (uint)(bVar2 != 0);
}
