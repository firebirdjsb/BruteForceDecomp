/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99E5A46AC162980DF267D8D4D562E9CD7B8395AACFA18B2D778EC419FCA15AC9
 * Entry: 0x00330194, Ghidra index: 12358, label: FUN_00330194
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00330194(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_8 [4];
  
  if (in_ECX == 0) {
    iVar2 = -0x7feafffb;
  }
  else {
    iVar1 = ExQueryNonVolatileSetting(0x100,local_8,param_1,0xc,&param_1);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}
