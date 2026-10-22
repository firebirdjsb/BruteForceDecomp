/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3F8E131C05DBAEAA58DF3D845C8D3F58870C7FEF0349941C9B9A50CA06D9D76
 * Entry: 0x002c6f80, Ghidra index: 10089, label: FUN_002c6f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002c6f80(void)

{
  byte bVar1;
  byte *in_EAX;
  byte *in_ECX;
  bool bVar2;
  
  if (in_EAX == (byte *)0x0) {
    return in_ECX != (byte *)0x0;
  }
  if (in_ECX == (byte *)0x0) {
    return (bool)0xff;
  }
  while( true ) {
    bVar1 = *in_EAX;
    bVar2 = bVar1 < *in_ECX;
    if (bVar1 != *in_ECX) break;
    if (bVar1 == 0) {
      return false;
    }
    bVar1 = in_EAX[1];
    bVar2 = bVar1 < in_ECX[1];
    if (bVar1 != in_ECX[1]) break;
    in_EAX = in_EAX + 2;
    in_ECX = in_ECX + 2;
    if (bVar1 == 0) {
      return false;
    }
  }
  return (bool)(('\x01' - bVar2) - (bVar2 != false));
}
