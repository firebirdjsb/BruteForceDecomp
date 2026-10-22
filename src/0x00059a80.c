/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60717342FF36E93141C58D255D36E9D8AB6C29081FE636A4B3781B4E40F60910
 * Entry: 0x00059a80, Ghidra index: 895, label: FUN_00059a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00059a80(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int in_ECX;
  uint uVar3;
  
  *(uint *)(in_EAX + 0x24) =
       *(uint *)(in_EAX + 0x24) ^
       ((*(int *)(in_ECX + 0x24) << 0x14) >> 0x14 ^ *(uint *)(in_EAX + 0x24)) & 0xfff;
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  uVar2 = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  *(undefined4 *)(in_EAX + 0x18) = uVar2;
  *(undefined4 *)(in_EAX + 0x1c) = uVar1;
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  uVar3 = *(uint *)(in_EAX + 0x28) ^
          ((*(int *)(in_ECX + 0x28) << 0x1f) >> 0x1f ^ *(uint *)(in_EAX + 0x28)) & 1;
  *(uint *)(in_EAX + 0x28) = uVar3;
  uVar3 = ((*(int *)(in_ECX + 0x28) << 0x1d) >> 0x1d ^ uVar3) & 4 ^ uVar3;
  *(uint *)(in_EAX + 0x28) = uVar3;
  *(uint *)(in_EAX + 0x28) = ((*(int *)(in_ECX + 0x28) << 0x1c) >> 0x1c ^ uVar3) & 8 ^ uVar3;
  uVar3 = *(uint *)(in_EAX + 0x24) ^
          ((*(int *)(in_ECX + 0x24) << 0x12) >> 0x12 ^ *(uint *)(in_EAX + 0x24)) & 0x2000;
  *(uint *)(in_EAX + 0x24) = uVar3;
  uVar3 = ((*(int *)(in_ECX + 0x24) << 0x11) >> 0x11 ^ uVar3) & 0x4000 ^ uVar3;
  *(uint *)(in_EAX + 0x24) = uVar3;
  *(uint *)(in_EAX + 0x24) = (*(ushort *)(in_ECX + 0x24) ^ uVar3) & 0x8000 ^ uVar3;
  *(uint *)(in_EAX + 0x28) =
       *(uint *)(in_EAX + 0x28) ^
       ((*(int *)(in_ECX + 0x28) << 0x1b) >> 0x1b ^ *(uint *)(in_EAX + 0x28)) & 0x10;
  return;
}
