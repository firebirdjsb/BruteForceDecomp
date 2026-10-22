/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50F8AB92D892BE67808160E62EBD595E65C440EBCED138506EEDC32881BBB7EA
 * Entry: 0x0008bc00, Ghidra index: 1690, label: FUN_0008bc00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008bc00(int param_1,int param_2)

{
  int *in_ECX;
  
  in_ECX[3] = param_1;
  in_ECX[4] = param_2;
  (**(code **)(*in_ECX + 0x1c))();
  return;
}
