/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7900CC1507FC4F9054CE9363DB316A950A90A202FBD0DFB7096DBA4590B97B90
 * Entry: 0x0007fe20, Ghidra index: 1510, label: FUN_0007fe20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0007fe20(int *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *unaff_EDI;
  
  iVar2 = 0;
  while( true ) {
    iVar2 = iVar2 + 1;
    pbVar3 = (byte *)(**(code **)(*unaff_EDI + 0x130))(iVar2);
    bVar1 = *pbVar3;
    if (((((bVar1 & 1) != 0) && ((bVar1 & 0x20) != 0)) && ((bVar1 & 4) != 0)) &&
       (*(int *)(pbVar3 + 0x10) == *param_1)) break;
    if (7 < iVar2) {
      return 0;
    }
  }
  return 1;
}
