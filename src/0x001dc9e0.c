/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 537D6844E386FE195EA5367DCFF474684C784FEE4ED840055FC8643D34713020
 * Entry: 0x001dc9e0, Ghidra index: 6569, label: FUN_001dc9e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dc9e0(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    FUN_001d1dc0(param_1);
    in_EAX = in_EAX + 0x50;
  }
  return in_EAX;
}
