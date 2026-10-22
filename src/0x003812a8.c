/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89299E5C83623CB0BF9CC742A92102706A13D65AC1345891D45F56448F8F853B
 * Entry: 0x003812a8, Ghidra index: 13560, label: FUN_003812a8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_003812a8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined1 uVar4;
  
  iVar2 = FUN_00380f83();
  uVar4 = 1;
  if (iVar2 == param_1) {
    cVar1 = *(char *)(param_1 + 3);
    *(char *)(in_ECX + 2) = cVar1;
    if (cVar1 == -0x80) {
      uVar4 = 0;
    }
  }
  else if (iVar2 != 0) {
    do {
      iVar3 = FUN_00380f9a();
      if (iVar3 == param_1) break;
      iVar2 = FUN_00380f9a();
    } while (iVar2 != 0);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(param_1 + 3);
    }
  }
  *(undefined1 *)(param_1 + 3) = 0x80;
  *(undefined1 *)(param_1 + 1) = 0x80;
  return uVar4;
}
