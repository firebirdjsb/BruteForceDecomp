/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF9FCCD7109C5DFE1005A0B0693C225E278F597AA8F2469AAEE37650A9BFA104
 * Entry: 0x00175300, Ghidra index: 4930, label: FUN_00175300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00175300(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)(in_EAX + 0xd0);
  puVar5 = puVar1;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_4 = 0;
  *puVar1 = 9;
  uVar3 = FUN_001727f0();
  *(undefined4 *)(in_EAX + 0x108) = uVar3;
  *(undefined4 *)(in_EAX + 0x110) = 0;
  *(undefined4 *)(in_EAX + 0x100) = 0;
  *(undefined4 *)(in_EAX + 0xfc) = 0;
  *(undefined4 *)(in_EAX + 0xf8) = 0;
  *(undefined4 *)(in_EAX + 0xf0) = 0;
  *(undefined4 *)(in_EAX + 0xec) = 0;
  *(undefined4 *)(in_EAX + 0xe8) = 0;
  *(undefined4 *)(in_EAX + 0x104) = 0x3f800000;
  *(undefined4 *)(in_EAX + 0xf4) = 0x3f800000;
  *(undefined4 *)(in_EAX + 0xe4) = 0x3f800000;
  piVar2 = *(int **)(in_EAX + 0x74);
  *(undefined4 *)(in_EAX + 0x128) = 1;
  *(undefined4 *)(in_EAX + 300) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x8c))(piVar2,puVar1,&local_4);
  }
  uVar3 = (**(code **)(*(int *)(in_EAX + 4) + 0x10))();
  piVar2 = *(int **)(in_EAX + 0x74);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x30))(piVar2,local_4,uVar3);
  }
  return;
}
