/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 233028CBAFC1D24E5CE075EC794D028A26CAB90856F4AE53E29EBE1F00CB58D6
 * Entry: 0x000564c0, Ghidra index: 830, label: FUN_000564c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00056530(int param_1,int param_2);
extern void FUN_00056980(int param_1,undefined4 param_2);

void FUN_000564c0(void)

{
  int *piVar1;
  float *pfVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  piVar1 = (int *)FUN_000120f0();
  pfVar2 = (float *)(**(code **)(*piVar1 + 0x54))();
  if (1.6899998 < *pfVar2 * *pfVar2 + pfVar2[2] * pfVar2[2]) {
    FUN_00056530(unaff_EDI,unaff_ESI);
  }
  FUN_00056980(unaff_EDI,unaff_ESI);
  return;
}
