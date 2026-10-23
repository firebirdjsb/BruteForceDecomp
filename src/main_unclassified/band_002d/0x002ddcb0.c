/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9068036FE5B37D0BD20AC94E13C16D659DD2C4EEDB74436C09BE6733FFDB453D
 * Entry: 0x002ddcb0, Ghidra index: 10327, label: FUN_002ddcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ddcb0(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[4];
  uVar1 = in_ECX[8];
  in_EAX[3] = 0;
  in_EAX[2] = uVar1;
  in_EAX[4] = in_ECX[1];
  in_EAX[5] = in_ECX[5];
  uVar1 = in_ECX[9];
  in_EAX[7] = 0;
  in_EAX[6] = uVar1;
  in_EAX[8] = in_ECX[2];
  in_EAX[9] = in_ECX[6];
  uVar1 = in_ECX[10];
  in_EAX[0xb] = 0;
  in_EAX[10] = uVar1;
  in_EAX[0xc] = in_ECX[0xc];
  in_EAX[0xd] = in_ECX[0xd];
  in_EAX[0xe] = in_ECX[0xe];
  in_EAX[0xf] = 0x3f800000;
  return;
}
