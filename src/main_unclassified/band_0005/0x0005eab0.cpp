/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 685D9C676843439C3F337CBFC7B3B26DA7F18B07A222FDB0D59DF09B105A0104
 * Entry: 0x0005eab0, Ghidra index: 991, label: FUN_0005eab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0005ecb0(undefined4 param_1,int param_2);
extern void FUN_001f7620(int param_1,int param_2,uint param_3,int param_4);

void FUN_0005eab0(void)

{
  int iVar1;
  undefined4 unaff_EBX;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(unaff_ESI + 8) - iVar1 >> 3) < (uint)(*(int *)(unaff_ESI + 0xc) - iVar1 >> 3))
     ) {
    iVar1 = *(int *)(unaff_ESI + 8);
    FUN_0005ecb0(iVar1,1);
    *(int *)(unaff_ESI + 8) = iVar1 + 8;
    return;
  }
  FUN_001f7620(unaff_ESI,*(undefined4 *)(unaff_ESI + 8),1,unaff_EBX);
  return;
}
