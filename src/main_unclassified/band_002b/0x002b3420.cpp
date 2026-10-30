/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B24206E5967F7E83791F67B6F3DD4988A002C7912CBCA5ED8CA545188E50ACA
 * Entry: 0x002b3420, Ghidra index: 9761, label: FUN_002b3420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3420(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_EDX;
  undefined4 *extraout_EDX;
  int unaff_ESI;
  undefined4 *puVar4;
  
  puVar4 = in_EDX;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *in_EDX = 0x3f800000;
  in_EDX[5] = 0x3f800000;
  in_EDX[10] = 0x3f800000;
  if (*(int *)(unaff_ESI + 0x28) == 0) {
    puVar4 = in_EDX;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *in_EDX = 0x3f800000;
    in_EDX[5] = 0x3f800000;
    in_EDX[10] = 0x3f800000;
  }
  else {
    FUN_002b4100();
    in_EDX = extraout_EDX;
  }
  uVar1 = *(undefined4 *)(unaff_ESI + 0x30);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x34);
  in_EDX[0xc] = *(undefined4 *)(unaff_ESI + 0x2c);
  in_EDX[0xd] = uVar1;
  in_EDX[0xe] = uVar2;
  return;
}
