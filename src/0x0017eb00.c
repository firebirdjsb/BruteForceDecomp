/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A68CED60BF9DD29B8703E523742B5AB7023594F3E6E9F7AFBAEE255B1072F53
 * Entry: 0x0017eb00, Ghidra index: 5111, label: FUN_0017eb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0017eb00(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_ECX;
  
  iVar3 = param_1;
  param_1 = 0;
  iVar2 = FUN_0017bf40(in_ECX,&param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 4) != 0) {
    iVar3 = FUN_001822d0();
    if (iVar3 != 0) {
      cVar1 = FUN_00183760(iVar2);
      if (cVar1 != '\0') {
        return iVar3;
      }
    }
    return 0;
  }
  iVar3 = FUN_001825b0(iVar3 + 0xdc,param_1);
  return iVar3;
}
