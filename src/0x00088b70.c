/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 765028AC87294CB009A7A67E47D4D77F3A5A25FE4403194A4B46BEE902DA878F
 * Entry: 0x00088b70, Ghidra index: 1635, label: FUN_00088b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00088b70(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(in_EAX + 0x58);
  iVar3 = 2;
  do {
    iVar4 = 0;
    iVar2 = 4;
    do {
      iVar1 = *piVar5;
      if (iVar1 != 0) {
        if (iVar4 == 0) {
          iVar4 = *(int *)(iVar1 + 0x28);
        }
        FUN_0008a720(iVar1,0);
      }
      piVar5 = piVar5 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x14) != 0) {
        FUN_0014bc50();
      }
      FUN_0005b950();
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
