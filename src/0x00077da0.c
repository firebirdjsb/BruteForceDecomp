/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B20D03D04344C4F28FF5602E6D0B9C4EB5BC84B23E44395138DEFF44E9D78077
 * Entry: 0x00077da0, Ghidra index: 1413, label: FUN_00077da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00077da0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  
  do {
    if ((*(int *)(in_EAX + 0xc) != 4) || (iVar1 = *(int *)(in_EAX + 4), iVar1 == 0)) {
      return 0;
    }
    uVar3 = 0;
    iVar4 = 0;
    while( true ) {
      iVar2 = *(int *)(iVar1 + 4);
      if (iVar2 == 0) {
        return 0;
      }
      if ((uint)(*(int *)(iVar1 + 8) - iVar2 >> 4) <= uVar3) {
        return 0;
      }
      in_EAX = iVar2 + iVar4;
      if (*(int *)(iVar2 + iVar4) == *in_ECX) break;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x10;
    }
    if (param_1 == 1) {
      return in_EAX;
    }
    param_1 = param_1 + -1;
    in_ECX = in_ECX + 1;
  } while( true );
}
