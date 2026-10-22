/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4545457D7DCFE9B7D2911ABEFCA711111C70070E030EEBB8275DDCA01505935
 * Entry: 0x0004dd70, Ghidra index: 659, label: FUN_0004dd70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004dd70(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  
  iVar1 = FUN_000120f0();
  if ((*(byte *)(iVar1 + 0x260) & 8) != 0) {
    FUN_0011e9d0(iVar1,*unaff_ESI,unaff_ESI[1],unaff_ESI[2]);
  }
  return;
}
