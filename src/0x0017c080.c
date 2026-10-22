/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 122E67D385ADB7D4C70F746D115656F0B532DFE64B3C1B349FA45E068C11870A
 * Entry: 0x0017c080, Ghidra index: 5038, label: FUN_0017c080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017c080(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_0017beb0(unaff_ESI);
  if ((iVar1 != 0) && (*unaff_EBX != 0)) {
    uVar2 = FUN_00178e50();
    return uVar2;
  }
  return 0;
}
