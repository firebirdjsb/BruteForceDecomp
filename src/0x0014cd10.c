/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6E0C8B639D0E7FACF3B896B5D3B0A26D360B7B26E4A17673B184CA05929036D
 * Entry: 0x0014cd10, Ghidra index: 4347, label: FUN_0014cd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014cd10(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(in_EAX + 0x1b4) == 0) {
    iVar2 = FUN_002ea01d(0xc0);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0014bb20();
    }
    FUN_0014cb60(uVar3);
    iVar2 = *(int *)(in_EAX + 0x1b4);
    iVar1 = *(int *)(in_EAX + 0x1d4);
    if (*(int *)(iVar2 + 0xb0) != iVar1) {
      FUN_0008f6a0(iVar1);
    }
    *(undefined4 *)(iVar2 + 0xb4) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar2 + 4) = 0xf17261a3;
    }
    else {
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    }
  }
  *(undefined4 *)(*(int *)(in_EAX + 0x1b4) + 0xa8) = 0;
  FUN_0014db60(param_1);
  FUN_0014b290(in_EAX + 0x110,param_1);
  FUN_0014b290(in_EAX + 0x144,param_1);
  FUN_0014b290(in_EAX + 0x178,param_1);
  FUN_0014b290(in_EAX + 0x88,param_1);
  FUN_0014b290(in_EAX + 0xbc,param_1);
  FUN_0014b290(in_EAX,param_1);
  FUN_0014b290(in_EAX + 0x44,param_1);
  return;
}
