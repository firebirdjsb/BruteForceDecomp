/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E7F537900DB4C1F56338D66D982819713210EDF95C9FCF7C34E34338AC7BB1A
 * Entry: 0x002e39e0, Ghidra index: 10417, label: FUN_002e39e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e39e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 9) = 0;
  in_ECX[1] = param_1;
  *in_ECX = param_3;
  in_ECX[5] = param_2;
  in_ECX[4] = param_4;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  return;
}
