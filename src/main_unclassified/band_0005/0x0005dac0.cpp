/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F09953B79A04825E47B93B949DFAF28BE39DCDC7431EA35C25562A38811FEFA1
 * Entry: 0x0005dac0, Ghidra index: 972, label: FUN_0005dac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005dac0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_EDX;
  in_EAX[1] = param_1;
  in_EAX[2] = param_2;
  in_EAX[3] = *in_ECX;
  in_EAX[4] = in_ECX[1];
  in_EAX[5] = in_ECX[2];
  in_EAX[6] = in_ECX[3];
  *(undefined1 *)(in_EAX + 7) = param_3;
  *(undefined1 *)((int)in_EAX + 0x1d) = 0;
  return;
}
