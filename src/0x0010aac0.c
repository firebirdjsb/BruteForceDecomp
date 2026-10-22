/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF2C47C16F655F453F36445938413873BA877C3A97C05C271A120AB960BCC9E9
 * Entry: 0x0010aac0, Ghidra index: 3432, label: FUN_0010aac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010aac0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(in_EAX + 0x74);
  if (0 < iVar4) {
    do {
      iVar3 = *(int *)(in_EAX + 0xe8) + 1;
      *(int *)(in_EAX + 0xe8) = iVar3;
      if (*(int *)(in_EAX + 0x74) < iVar3) {
        *(int *)(in_EAX + 0xe8) = *(int *)(in_EAX + 0x74);
      }
      else if (*(uint *)(in_EAX + 0x78) < 8) {
        FUN_0010a880(in_EAX,*(undefined2 *)(in_EAX + 0x62 + iVar3 * 2));
      }
      else {
        FUN_0010a880(in_EAX,*(undefined2 *)(*(int *)(in_EAX + 100) + -2 + iVar3 * 2));
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*(undefined4 **)(in_EAX + 0x80) == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)**(undefined4 **)(in_EAX + 0x80);
  }
  puVar1 = *(undefined4 **)(in_EAX + 0x80);
  iVar4 = 0;
  for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    FUN_0010abb0(iVar4);
    iVar4 = iVar4 + 1;
  }
  return;
}
