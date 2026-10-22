/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D320A40E8E8CB32371026803C34276B3D6ED34ABEA0738F2E125AC2B181FC3FB
 * Entry: 0x002e76c0, Ghidra index: 10513, label: FUN_002e76c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e76c0(void)

{
  int in_ECX;
  
  switch(*(byte *)(in_ECX + 7)) {
  case 1:
  case 2:
  case 4:
  case 8:
    return 1;
  case 3:
  case 5:
  case 6:
  case 9:
  case 10:
  case 0xc:
    return 2;
  case 7:
  case 0xb:
  case 0xd:
  case 0xe:
    return 3;
  case 0xf:
    return 4;
  default:
    return *(byte *)(in_ECX + 7) - 1 & 0xffffff00;
  }
}
