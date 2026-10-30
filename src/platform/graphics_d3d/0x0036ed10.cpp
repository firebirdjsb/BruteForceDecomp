/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EC7D686E75E111B6A4272D2F083822F459895547E3F9B496664B0DAE8CED726
 * Entry: 0x0036ed10, Ghidra index: 13315, label: FUN_0036ed10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0036ed10(void)

{
  undefined4 *puVar1;
  byte bVar2;
  int in_EAX;
  byte bVar3;
  uint in_ECX;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint local_4;
  
  puVar1 = (undefined4 *)(in_EAX + 0x1c);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  iVar6 = 0x10;
  puVar4 = puVar1;
  do {
    *puVar4 = 2;
    puVar4 = puVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar7 = in_ECX & 0xe;
  uVar5 = 0;
  if (uVar7 == 4) {
    *(uint *)(in_EAX + 4) = *(uint *)(in_EAX + 4) | 2;
    *puVar1 = 0x42;
    uVar5 = 0x10;
  }
  else if (uVar7 != 0) {
    *puVar1 = 0x32;
    uVar5 = 0xc;
    if (5 < uVar7) {
      iVar6 = (uVar7 - 6 >> 1) + 1;
      *(undefined4 *)(in_EAX + 0x28) = 0xc;
      *(uint *)(in_EAX + 0x2c) = iVar6 * 0x10 | 2;
      uVar5 = iVar6 * 4 + 0xc;
    }
  }
  if ((in_ECX & 0x10) != 0) {
    *(uint *)(in_EAX + 0x38) = uVar5;
    *(undefined4 *)(in_EAX + 0x3c) = 0x32;
    uVar5 = uVar5 + 0xc;
  }
  if ((in_ECX & 0x40) != 0) {
    *(uint *)(in_EAX + 0x48) = uVar5;
    *(undefined4 *)(in_EAX + 0x4c) = 0x40;
    *(uint *)(in_EAX + 4) = *(uint *)(in_EAX + 4) | 0x400;
    uVar5 = uVar5 + 4;
  }
  if ((char)in_ECX < '\0') {
    *(uint *)(in_EAX + 0x58) = uVar5;
    *(undefined4 *)(in_EAX + 0x5c) = 0x40;
    *(uint *)(in_EAX + 4) = *(uint *)(in_EAX + 4) | 0x800;
    uVar5 = uVar5 + 4;
  }
  local_4 = in_ECX >> 8 & 0xf;
  uVar7 = in_ECX >> 0x10;
  if (local_4 != 0) {
    bVar3 = 0;
    puVar8 = (uint *)(in_EAX + 0xac);
    do {
      iVar6 = *(int *)((uVar7 & 3) * 4 + 0x37b5b0);
      *puVar8 = iVar6 << 4 | 2;
      bVar2 = bVar3 & 0x1f;
      puVar8[-1] = uVar5;
      uVar5 = uVar5 + iVar6 * 4;
      uVar7 = uVar7 >> 2;
      puVar8 = puVar8 + 4;
      bVar3 = bVar3 + 8;
      local_4 = local_4 - 1;
      *(uint *)(in_EAX + 0x10) = *(uint *)(in_EAX + 0x10) | iVar6 << bVar2;
    } while (local_4 != 0);
  }
  return;
}
