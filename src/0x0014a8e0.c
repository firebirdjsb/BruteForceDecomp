/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F970A45D40C3899EF94E34BEE08A45D406236CDA169295357843709FA5643327
 * Entry: 0x0014a8e0, Ghidra index: 4298, label: FUN_0014a8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014a8e0(float param_1)

{
  char cVar1;
  undefined1 uVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  
  cVar1 = *(char *)(in_EAX + 0x1b8);
  if (cVar1 == '\b') {
    FUN_0014a610();
    *(undefined1 *)(in_EAX + 0x1b9) = 1;
    return;
  }
  if ((*(char *)(in_EAX + 0x1b9) != cVar1) && ((iVar3 = (int)cVar1, iVar3 < 0 || (2 < iVar3)))) {
    iVar3 = *(int *)(*(int *)(in_EAX + 0xc) + 0x19c + iVar3 * 4);
    if ((iVar3 != 0) && (*(float *)(in_EAX + 0x1cc) <= *(float *)(iVar3 + 0x18))) {
      *(float *)(in_EAX + 0x1cc) = param_1 + *(float *)(in_EAX + 0x1cc);
      return;
    }
    iVar3 = FUN_0014a800();
    if (iVar3 != extraout_ECX) {
      uVar2 = FUN_0014a800();
      *(undefined1 *)(in_EAX + 0x1b8) = uVar2;
      FUN_0014a880();
      *(undefined4 *)(in_EAX + 0x1cc) = 0;
      return;
    }
    FUN_0014a610();
    *(undefined4 *)(in_EAX + 0x1cc) = 0;
  }
  return;
}
