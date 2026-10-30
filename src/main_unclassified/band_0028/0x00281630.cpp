/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9DE6F01C983D6DD21225F07F0F5654BD9B6735A5EAF9FE4B260D985F888800B
 * Entry: 0x00281630, Ghidra index: 9045, label: FUN_00281630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00281630(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_EDX;
  int unaff_ESI;
  undefined4 *puVar4;
  
  iVar3 = in_EAX * 0xc;
  iVar2 = *(int *)(in_EDX + 0x2824) + *(int *)(*(int *)(in_EDX + 0x2824) + iVar3) * 0xc;
  if (*(int *)(iVar2 + 4) == in_EAX) {
    *(int *)(iVar2 + 4) = unaff_ESI;
  }
  else {
    *(int *)(iVar2 + 8) = unaff_ESI;
  }
  puVar1 = (undefined4 *)(*(int *)(in_EDX + 0x2824) + iVar3);
  iVar2 = unaff_ESI * 0xc;
  puVar4 = (undefined4 *)(*(int *)(in_EDX + 0x2824) + iVar2);
  *puVar4 = *puVar1;
  puVar4[1] = puVar1[1];
  puVar4[2] = puVar1[2];
  *(int *)(*(int *)(in_EDX + 0x2824) + *(int *)(iVar2 + 4 + *(int *)(in_EDX + 0x2824)) * 0xc) =
       unaff_ESI;
  *(int *)(*(int *)(in_EDX + 0x2824) + *(int *)(iVar2 + 8 + *(int *)(in_EDX + 0x2824)) * 0xc) =
       unaff_ESI;
  *(undefined4 *)(iVar3 + *(int *)(in_EDX + 0x2824)) = 0;
  return;
}
