/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D3920454FF32D18D81323E57EBCC1DE696C20C46756F4F7C7D8DA5901CC0721
 * Entry: 0x00174e10, Ghidra index: 4924, label: FUN_00174e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174e10(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x18))(*(int **)(in_EAX + 0x74));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_000de9f0(*(undefined4 *)(in_EAX + 0x70),iVar3);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 8) == 0) {
          FUN_000120f0();
          FUN_00174cd0(in_EAX);
        }
        else if (*(int *)(iVar2 + 8) == 1) {
          FUN_000d42b0();
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if (*(int *)(in_EAX + 0xb4) != 0) {
    FUN_00174cd0(in_EAX);
  }
  return;
}
