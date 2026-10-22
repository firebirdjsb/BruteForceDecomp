/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C498BA1E3468B6F6E58E62C6E5C5E8DFA85EAB26A50AD3F7452716DAD0E465B1
 * Entry: 0x0016b1d0, Ghidra index: 4771, label: FUN_0016b1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016b1d0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  fVar1 = (float)in_ECX[3];
  fVar2 = (float)in_ECX[2];
  fVar3 = (float)in_ECX[1];
  *in_EAX = *in_ECX;
  in_EAX[1] = -fVar3;
  in_EAX[2] = -fVar2;
  in_EAX[3] = -fVar1;
  return;
}
