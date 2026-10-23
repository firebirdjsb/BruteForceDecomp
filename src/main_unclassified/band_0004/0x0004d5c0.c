/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A8337059878740D40D25F618F4186A02F98D1A645155CD3BD2161BC391EC1A4
 * Entry: 0x0004d5c0, Ghidra index: 650, label: FUN_0004d5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004d5c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(unaff_EBX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar1;
  }
  if (puVar4 != puVar1) {
    do {
      iVar2 = puVar4[3];
      if ((((iVar2 != 0) && ((*(byte *)(iVar2 + 0x28) & 4) != 0)) && (param_2 != (undefined4 *)0x0))
         && (cVar3 = (**(code **)*param_2)(iVar2), cVar3 != '\0')) {
        FUN_00064490();
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != *(undefined4 **)(unaff_EBX + 4));
  }
  return;
}
