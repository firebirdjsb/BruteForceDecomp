/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F4CC1BC058EE69521F6A5B05E49CEA07F57F6E01AC15A419EF85E0965003EDB
 * Entry: 0x002e3ff0, Ghidra index: 10428, label: FUN_002e3ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e3ff0(char param_1)

{
  float *in_ECX;
  float local_10;
  float fStack_c;
  float local_8;
  float local_4;
  
  *in_ECX = 0.0;
  in_ECX[4] = 0.0;
  in_ECX[5] = 0.0;
  in_ECX[6] = 0.0;
  in_ECX[7] = 0.0;
  *(undefined1 *)(in_ECX + 8) = 0;
  XAPILIB__QueryPerformanceFrequency(&local_10);
  in_ECX[2] = local_10;
  in_ECX[3] = fStack_c;
  *in_ECX = 1.0 / (float)CONCAT44(fStack_c,local_10);
  if (param_1 != '\0') {
    XAPILIB__QueryPerformanceCounter(&local_8);
    in_ECX[4] = local_8;
    in_ECX[5] = local_4;
    *(undefined1 *)(in_ECX + 8) = 1;
  }
  return;
}
