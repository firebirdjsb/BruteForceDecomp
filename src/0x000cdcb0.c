/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF5F59B1728155A9346EA07FA5876B093A152280C771BD5D6A2B83B0BDBC9F06
 * Entry: 0x000cdcb0, Ghidra index: 2543, label: FUN_000cdcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000cdcb0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int *in_EAX;
  undefined4 *puVar2;
  int unaff_EBX;
  int iVar3;
  
  puVar1 = *(undefined4 **)(unaff_EBX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)*puVar1;
  }
  for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    iVar3 = puVar2[2];
    if ((*(int *)(iVar3 + 0x24) == *in_EAX) && (*(int *)(iVar3 + 8) == in_EAX[1]))
    goto LAB_000cdcde;
  }
  iVar3 = 0;
LAB_000cdcde:
  *param_1 = 0;
  if (iVar3 != 0) {
    FUN_000cde60(unaff_EBX);
    return iVar3;
  }
  iVar3 = FUN_000cdd10(unaff_EBX);
  *param_1 = 1;
  return iVar3;
}
