/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD42EFBA2FCC7D1A43AED6928B6EC2C868BCE61184AD3CFD388C7408B60FB377
 * Entry: 0x001e7640, Ghidra index: 6810, label: FUN_001e7640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7640(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  FUN_001e75a0(param_1);
  iVar2 = in_EAX + 0x80;
  iVar1 = 0x21;
  do {
    FUN_001e51d0(iVar2);
    iVar2 = iVar2 + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_001e7600(in_EAX);
  FUN_001e77b0();
  FUN_001e7550(in_EAX,param_1);
  return;
}
