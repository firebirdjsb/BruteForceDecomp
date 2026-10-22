/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59D90DF27A0A674BD33C7D2C6013CD74A6F7C88CB636FFC500DF91FAFEBB5471
 * Entry: 0x000de980, Ghidra index: 2719, label: FUN_000de980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000de980(void)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined1 local_4 [4];
  
  iVar1 = FUN_000da6f0();
  if (iVar1 != 0) {
    FUN_000ded40(unaff_EBX,0xffffffff,local_4);
    return 0;
  }
  iVar1 = FUN_000da9d0();
  if (iVar1 != 0) {
    FUN_000dec40(unaff_EBX,0xffffffff,local_4);
    return 0;
  }
  return 0;
}
