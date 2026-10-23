/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72AA60D608E5D7D82F40811501448E7DDA62F4BBBF3DDC06E3CED60846A7798E
 * Entry: 0x002de920, Ghidra index: 10334, label: FUN_002de920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002de920(void)

{
  undefined4 *in_EAX;
  int iVar1;
  
  in_EAX[0x78] = in_EAX + 4;
  in_EAX[0x7b] = in_EAX + 0x10;
  in_EAX[0x77] = in_EAX[100];
  in_EAX[0x7a] = in_EAX[0x65];
  in_EAX[0x7c] = 0;
  in_EAX[0x7d] = 0;
  iVar1 = in_EAX[0x69] * in_EAX[0x67] + -1;
  while (-1 < iVar1) {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(in_EAX[0x66] + 4 + iVar1 * 4) = 0;
  }
  in_EAX[3] = 0;
  in_EAX[2] = 0;
  in_EAX[1] = 0;
  *in_EAX = 0;
  return;
}
