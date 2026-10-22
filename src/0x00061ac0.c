/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9F50DCF3964796700E0DD1CF105B76A53A2BE11D0259DA4B8570884C30A2732
 * Entry: 0x00061ac0, Ghidra index: 1033, label: FUN_00061ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00061ac0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_4 [4];
  
  puVar2 = *(undefined4 **)(in_EAX + 4);
  puVar3 = *(undefined4 **)(in_EAX + 8);
  if (puVar2 != puVar3) {
    do {
      cVar1 = (**(code **)(*(int *)*puVar2 + 0x1c))((int *)*puVar2);
      if (cVar1 == '\0') {
        (**(code **)(*(int *)*puVar2 + 0xa4))((int *)*puVar2,param_1);
        (**(code **)(*(int *)*puVar2 + 0xb0))((int *)*puVar2,*param_2,0);
        (**(code **)(*(int *)*puVar2 + 0xa8))((int *)*puVar2);
        puVar2 = puVar2 + 1;
      }
      else {
        puVar2 = (undefined4 *)FUN_00061490(auStack_4,puVar2);
        puVar2 = (undefined4 *)*puVar2;
        puVar3 = *(undefined4 **)(in_EAX + 8);
      }
    } while (puVar2 != puVar3);
  }
  return;
}
