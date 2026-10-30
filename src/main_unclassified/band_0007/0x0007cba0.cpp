/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CC52398784D844A120EFD749F51AE32D0F17572A140A3CC64B4288B3308C972
 * Entry: 0x0007cba0, Ghidra index: 1482, label: FUN_0007cba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0007cba0(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int *unaff_EDI;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    pbVar2 = (byte *)(**(code **)(*unaff_EDI + 0x130))(iVar1);
    if ((((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) &&
        ((*(int *)(pbVar2 + 4) != param_2 || (*(int *)(pbVar2 + 8) != param_3)))) &&
       (*(int *)(pbVar2 + 0x98) == param_1)) {
      iVar3 = iVar3 + 1;
    }
  } while (iVar1 < 8);
  return iVar3;
}
