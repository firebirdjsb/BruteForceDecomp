/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C0010E1C362E712896B77C2F6F33C5C9DB22F7053CFF6A6A38750A2BCD7B81B
 * Entry: 0x0024ec10, Ghidra index: 8306, label: FUN_0024ec10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0024ec10(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_0024eb50();
  puVar5 = *(undefined4 **)(in_EAX + 0x88);
  if (puVar5 != *(undefined4 **)(in_EAX + 0x8c)) {
    puVar4 = puVar5 + 1;
    do {
      cVar2 = (**(code **)(*(int *)*puVar5 + 0x14))(param_1,in_EAX + 0x58);
      if (cVar2 == '\0') {
        (**(code **)(*(int *)*puVar5 + 0x10))(in_EAX + 0x58);
        puVar1 = *(undefined4 **)(in_EAX + 0x8c);
        if (puVar4 != puVar1) {
          puVar3 = puVar4;
          do {
            *(undefined4 *)(((int)puVar5 - (int)puVar4) + (int)puVar3) = *puVar3;
            puVar3 = puVar3 + 1;
          } while (puVar3 != puVar1);
        }
        *(int *)(in_EAX + 0x8c) = *(int *)(in_EAX + 0x8c) + -4;
      }
      else {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
    } while (puVar5 != *(undefined4 **)(in_EAX + 0x8c));
  }
  return 0;
}
