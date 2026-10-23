/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 450EA863F43F9CF606CAC75CE23F7C550D6AEF469971835A0AD3D7DEBC65E591
 * Entry: 0x000fe6a0, Ghidra index: 3185, label: FUN_000fe6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x000fe719) */
/* WARNING: Removing unreachable block (ram,0x000fe720) */
/* WARNING: Removing unreachable block (ram,0x000fe72d) */
/* WARNING: Removing unreachable block (ram,0x000fe724) */
/* WARNING: Removing unreachable block (ram,0x000fe72b) */
/* WARNING: Removing unreachable block (ram,0x000fe7b2) */

void FUN_000fe6a0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int in_EAX;
  bool bVar6;
  undefined4 *local_1c;
  
  if ((*(int *)(in_EAX + 0xc) != 0) && (cVar5 = FUN_000fe560(), cVar5 == '\0')) {
    puVar2 = *(undefined4 **)(in_EAX + 8);
    piVar3 = *(int **)(puVar2[1] + 8);
    if (puVar2 == (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      local_1c = (undefined4 *)*puVar2;
    }
    for (; puVar2 != local_1c; puVar2 = (undefined4 *)puVar2[1]) {
      piVar4 = *(int **)(puVar2[1] + 8);
      if ((piVar4[0x18] == 0) && ((*(byte *)(piVar4 + 0x19) & 1) != 0)) {
        bVar6 = piVar4 == piVar3;
      }
      else {
        bVar6 = true;
      }
      FUN_001611d0();
      bVar1 = *(byte *)(piVar4 + 10);
      if ((bool)(bVar1 >> 1 & 1) != bVar6) {
        *(byte *)(piVar4 + 10) = (bVar6 << 1 ^ bVar1) & 2 ^ bVar1;
        (**(code **)(*piVar4 + 0x24))();
      }
      bVar1 = *(byte *)(piVar4 + 10);
      if (bVar6 != (bool)(bVar1 >> 2 & 1)) {
        *(byte *)(piVar4 + 10) = (bVar6 << 2 ^ bVar1) & 4 ^ bVar1;
        (**(code **)(*piVar4 + 0x28))();
      }
    }
  }
  return;
}
