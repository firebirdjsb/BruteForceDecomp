/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B7395651BCE760E1B50AB914C0AEF885CDB8A98D488D0883764ABF3A930163C
 * Entry: 0x000884b0, Ghidra index: 1633, label: FUN_000884b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
undefined4 * FUN_000884b0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (((-1 < in_ECX) && (in_ECX < 4)) && (in_EAX != 0)) {
    iVar1 = FUN_002ea01d(0xa0);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_0008a0b0();
    }
    *puVar2 = *(undefined4 *)(in_EAX + 0x24);
    uVar3 = FUN_002383b0();
    puVar2[1] = uVar3;
    iVar1 = FUN_00160da0(0xffffffff,1);
    puVar2[4] = *(undefined4 *)(iVar1 + 0x2d4);
    puVar2[5] = *(undefined4 *)(iVar1 + 0x2d8);
    puVar2[10] = *(undefined4 *)(iVar1 + 0x2dc);
    puVar2[0xb] = *(undefined4 *)(iVar1 + 0x2e0);
    puVar2[0xc] = *(undefined4 *)(iVar1 + 0x2e4);
    puVar2[0xd] = *(undefined4 *)(iVar1 + 0x2e8);
    puVar2[0xe] = *(undefined4 *)(iVar1 + 0x2ec);
    puVar2[0xf] = *(undefined4 *)(iVar1 + 0x2f0);
    puVar2[0x10] = *(undefined4 *)(iVar1 + 0x2f4);
    puVar2[0x11] = *(undefined4 *)(iVar1 + 0x2f8);
    puVar2[0x12] = *(undefined4 *)(iVar1 + 0x2fc);
    puVar2[0x13] = *(undefined4 *)(iVar1 + 0x300);
    puVar2[0x14] = *(undefined4 *)(iVar1 + 0x304);
    puVar2[0x15] = *(undefined4 *)(iVar1 + 0x308);
    return puVar2;
  }
  return (undefined4 *)0x0;
}
