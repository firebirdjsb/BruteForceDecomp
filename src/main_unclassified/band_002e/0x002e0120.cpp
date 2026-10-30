/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E3D6E2D41E648E987F961F3483B26727001047685C01887FA389DAB87018C1F
 * Entry: 0x002e0120, Ghidra index: 10348, label: FUN_002e0120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e0120(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *in_ECX;
  
  bVar1 = *in_ECX;
  if (bVar1 == 0) {
    return -(uint)*param_1;
  }
  bVar2 = *param_1;
  if (bVar2 == 0) {
    return (uint)bVar1;
  }
  if ((bVar1 != bVar2) &&
     ((((byte)(bVar1 - bVar2) <= (byte)(bVar2 - bVar1) && (bVar2 < bVar1)) ||
      ((bVar1 != bVar2 && (((byte)(bVar2 - bVar1) < (byte)(bVar1 - bVar2) && (bVar1 < bVar2))))))))
  {
    return (uint)bVar1 - (uint)bVar2;
  }
  return ((uint)bVar1 - (uint)bVar2) + 0xff;
}
