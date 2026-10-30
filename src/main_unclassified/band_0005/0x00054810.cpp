/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08A44B16C207F995166AB1511C9EB89E6A72E00E94E983F4DA8372A8B3998D67
 * Entry: 0x00054810, Ghidra index: 796, label: FUN_00054810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000236e0(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_00054810(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_EDI;
  
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x28) = 0;
  *(undefined4 *)(in_EAX + 0x24) = 0;
  *(undefined4 *)(in_EAX + 0x20) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  *(undefined4 *)(in_EAX + 0x38) = 0;
  *(undefined4 *)(in_EAX + 0x34) = 0;
  *(undefined4 *)(in_EAX + 0x30) = 0;
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  *(undefined4 *)(in_EAX + 0x6c) = 0;
  *(undefined4 *)(in_EAX + 0x70) = 0;
  *(undefined4 *)(in_EAX + 0x74) = 0;
  *(undefined4 *)(in_EAX + 0x78) = 0;
  *(undefined4 *)(in_EAX + 0x7c) = 0x402ccccd;
  *(undefined4 *)(in_EAX + 0x8c) = 0;
  *(undefined4 *)(in_EAX + 0x90) = 0;
  *(undefined4 *)(in_EAX + 0x94) = 0;
  *(undefined4 *)(in_EAX + 0x98) = 0;
  FUN_000236e0();
  *(undefined4 *)(in_EAX + 100) = 1;
  *(undefined4 *)(in_EAX + 0x7c) = 0x40400000;
  if (*(int **)(in_EAX + 4) != unaff_EDI) {
    FUN_0008f6a0();
  }
  iVar3 = (**(code **)(*unaff_EDI + 0x40))();
  uVar1 = *(undefined4 *)(iVar3 + 0x2c);
  uVar2 = *(undefined4 *)(iVar3 + 0x28);
  *(undefined4 *)(in_EAX + 0x3c) = *(undefined4 *)(iVar3 + 0x24);
  *(undefined4 *)(in_EAX + 0x40) = uVar2;
  *(undefined4 *)(in_EAX + 0x44) = uVar1;
  if (*(int *)(unaff_EDI[3] + 4) == 3) {
    unaff_EDI[0x94] = unaff_EDI[0x94] | 1;
    *(int *)(in_EAX + 0x48) = unaff_EDI[0x93];
  }
  puVar4 = (undefined4 *)(**(code **)(*unaff_EDI + 0x54))();
  uVar1 = puVar4[2];
  uVar2 = puVar4[1];
  *(undefined4 *)(in_EAX + 0x4c) = *puVar4;
  *(undefined4 *)(in_EAX + 0x50) = uVar2;
  *(undefined4 *)(in_EAX + 0x54) = uVar1;
  if (*(int *)(unaff_EDI[3] + 4) != 3) {
    *(uint *)(in_EAX + 0x80) = *(uint *)(in_EAX + 0x80) & 0xfffffffb;
  }
  return;
}
