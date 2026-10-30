/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C74822A518DC555284BD2D083191E7E30F5C0842C4C419952111CF60E7062376
 * Entry: 0x0022f1d0, Ghidra index: 7735, label: FUN_0022f1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0022f1d0(void)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_60 [17];
  int local_1c;
  undefined4 local_14;
  
  uVar1 = 0;
  switch(in_EAX) {
  case 0:
  case 3:
    uVar1 = FUN_0022bac0(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x1fc),in_ECX);
    return uVar1;
  case 2:
    iVar2 = FUN_0022fb50(in_ECX,*(undefined4 *)(in_ECX + 0x1fc),*(undefined4 *)(in_ECX + 0x360),
                         in_ECX + 0x1ec);
    return iVar2 != 0;
  case 4:
    local_1c = 0;
    puVar3 = local_60;
    for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_14 = 0;
    uVar1 = FUN_002317e0(*(undefined4 *)(in_ECX + 0x1fc),local_60);
    if (local_1c != 0) {
      FUN_0008f6e0();
      return uVar1;
    }
    break;
  case 5:
    FUN_0022f9b0(in_ECX,*(undefined4 *)(in_ECX + 0x1fc));
    uVar1 = 1;
  }
  return uVar1;
}
