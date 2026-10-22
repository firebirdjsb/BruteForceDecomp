/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C26C3EF0ABB6CD0C8276C8FCBF355E8759FD9DF058E9958A8C0B9E4646E70CB
 * Entry: 0x0015b8a0, Ghidra index: 4531, label: FUN_0015b8a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015b8a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  in_EAX[7] = 0;
  in_EAX[6] = 0;
  in_EAX[5] = 0;
  in_EAX[3] = 0;
  in_EAX[2] = 0;
  in_EAX[1] = 0;
  in_EAX[8] = 0x3f800000;
  in_EAX[4] = 0x3f800000;
  *in_EAX = 0x3f800000;
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  in_EAX[9] = *in_ECX;
  in_EAX[10] = uVar2;
  in_EAX[0xb] = uVar1;
  return;
}
