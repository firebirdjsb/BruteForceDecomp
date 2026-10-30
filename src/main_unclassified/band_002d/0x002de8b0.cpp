/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B277FEF3609FAFA1129064960D37E1B0C8497BD73CB4FA9CB3D370541ED39AD4
 * Entry: 0x002de8b0, Ghidra index: 10333, label: FUN_002de8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002de8b0(void)

{
  undefined4 *in_EAX;
  int iVar1;
  
  in_EAX[0x30] = in_EAX + 4;
  in_EAX[0x33] = in_EAX + 8;
  in_EAX[0x2f] = in_EAX[0x24];
  in_EAX[0x32] = in_EAX[0x25];
  in_EAX[0x34] = 0;
  in_EAX[0x35] = 0;
  iVar1 = in_EAX[0x29] * in_EAX[0x27] + -1;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(in_EAX[0x26] + 4 + iVar1 * 4) = 0;
  }
  in_EAX[3] = 0;
  in_EAX[2] = 0;
  in_EAX[1] = 0;
  *in_EAX = 0;
  return;
}
