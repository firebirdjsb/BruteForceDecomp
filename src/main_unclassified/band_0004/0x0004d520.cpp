/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BFD9E21075369F83ADC78135E78C84641CF4F336B91DF8602A8C3A4655F7E60
 * Entry: 0x0004d520, Ghidra index: 649, label: FUN_0004d520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004d520(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_EAX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x74);
  puVar4 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar1;
  }
  puVar2 = *(undefined4 **)(in_EAX + 0x68);
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)*puVar2;
  }
  if (*(int *)(*(int *)(in_EAX + 0xbf4) + 0x4c) == 0) {
    return;
  }
  do {
    if (puVar5 == puVar2) {
      if (puVar4 == puVar1) {
        return;
      }
      if (puVar5 != puVar2) goto LAB_0004d56c;
      iVar6 = puVar4[3];
    }
    else {
LAB_0004d56c:
      iVar6 = puVar5[3];
    }
    if (((iVar6 != 0) && ((*(byte *)(iVar6 + 0x70) & 1) == 0)) &&
       (cVar3 = (**(code **)(*param_1 + 4))(iVar6), cVar3 != '\0')) {
      FUN_0004b8f0();
    }
    if (puVar5 == puVar2) {
      puVar4 = (undefined4 *)*puVar4;
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  } while( true );
}
