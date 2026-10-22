/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F142A0AC7F93E6D34E9A51DC01FF8734B6857F5EAF51DBA7C53960C480D9E7A2
 * Entry: 0x0002a1e0, Ghidra index: 283, label: FUN_0002a1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0002a2fe) */

int FUN_0002a1e0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  
  iVar2 = FUN_000120f0();
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(in_ECX + 0x3dc);
  }
  uVar3 = (*(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec)) - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(in_ECX + 0x3e4);
  }
  iVar5 = *(int *)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar3 * 4) + 0x58);
  iVar6 = *(int *)(iVar5 + 0x1b4);
  uVar4 = (**(code **)(*(int *)(iVar2 + 0x1b4) + 0x9c))();
  cVar1 = (**(code **)(iVar6 + 0xc0))(uVar4);
  if (cVar1 == '\0') {
    iVar5 = FUN_00049ca0();
  }
  if (((iVar5 != 0) && ((*(byte *)(iVar5 + 0x70) & 1) == 0)) &&
     (iVar6 = FUN_000388b0(*(undefined4 *)(in_ECX + 0x2d8)), iVar6 != 0)) {
    *(uint *)(iVar2 + 0x250) = *(uint *)(iVar2 + 0x250) | 1;
    iVar2 = FUN_0002a110(*(undefined4 *)(iVar2 + 0x24c),iVar5);
    if (iVar2 == 0) {
      return in_ECX;
    }
    FUN_0004e8f0();
    FUN_00058b60();
    FUN_00038320();
    FUN_00025730(in_ECX + 0x8b0,1,0);
    return 1;
  }
  return 0;
}
