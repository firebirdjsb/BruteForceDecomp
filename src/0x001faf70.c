/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 545C2D8C55EC9C0879D9B077005DFDFBCFC36BEB8DE7F1BF1DEB48CB5C4C982B
 * Entry: 0x001faf70, Ghidra index: 7106, label: FUN_001faf70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001faf70(int *param_1,int *param_2,int *param_3)

{
  int *in_EAX;
  
  if (param_1 != param_2) {
    do {
      if (param_1[3] == *param_3) break;
      param_1 = (int *)*param_1;
    } while (param_1 != param_2);
  }
  *in_EAX = (int)param_1;
  return;
}
