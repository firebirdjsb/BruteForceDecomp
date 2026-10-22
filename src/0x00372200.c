/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B52CE6127566C403EAA0081A4DB540BC5BD5D5252A4EF832A58572CC97AC8F38
 * Entry: 0x00372200, Ghidra index: 13395, label: FUN_00372200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00372200(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_EDX;
  in_EAX[1] = *in_ECX;
  in_EAX[2] = in_ECX[4];
  in_EAX[3] = in_ECX[8];
  in_EAX[4] = in_ECX[0xc];
  in_EAX[5] = in_ECX[1];
  in_EAX[6] = in_ECX[5];
  in_EAX[7] = in_ECX[9];
  in_EAX[8] = in_ECX[0xd];
  in_EAX[9] = in_ECX[2];
  in_EAX[10] = in_ECX[6];
  in_EAX[0xb] = in_ECX[10];
  in_EAX[0xc] = in_ECX[0xe];
  in_EAX[0xd] = in_ECX[3];
  in_EAX[0xe] = in_ECX[7];
  in_EAX[0xf] = in_ECX[0xb];
  in_EAX[0x10] = in_ECX[0xf];
  return;
}
