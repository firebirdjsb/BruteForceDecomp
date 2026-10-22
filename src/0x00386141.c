/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1252A600D91C75E9A478831D50438B6CA50B6AE4572F43C8DBF43A3F14ACBBD6
 * Entry: 0x00386141, Ghidra index: 13688, label: FUN_00386141
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00386141(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x424);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(in_ECX + 0x424);
    cVar3 = FUN_00385d64(*(undefined2 *)(iVar1 + 0x20));
    if (cVar3 == '\0') break;
    iVar2 = *(int *)(iVar1 + 0x24);
    *(int *)(in_ECX + 0x424) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(in_ECX + 0x428) = 0;
    }
    FUN_00385df0(iVar1);
    iVar1 = *(int *)(in_ECX + 0x424);
  }
  return;
}
