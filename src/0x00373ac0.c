/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE870478D2B9FFFEB8FAC703D1F9ED2B7C80DC934EB00F8CC0A0420326757F82
 * Entry: 0x00373ac0, Ghidra index: 13414, label: FUN_00373ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00373ac0(void)

{
  undefined4 in_EAX;
  
  switch(in_EAX) {
  case 2:
    return 0x10;
  case 3:
    return 0x1c;
  case 5:
    return 0x11;
  case 6:
    return 0x12;
  case 7:
    return 0x1e;
  case 0x2a:
    return 0x2e;
  case 0x2b:
    in_EAX = 0x2f;
    break;
  case 0x2c:
    return 0x30;
  case 0x2d:
    return 0x31;
  }
  return in_EAX;
}
