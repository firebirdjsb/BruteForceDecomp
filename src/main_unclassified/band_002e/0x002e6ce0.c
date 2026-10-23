/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E03A2CDEB8A358849B439803FA572DBC204390B3382A1521FD8B3060FF39529
 * Entry: 0x002e6ce0, Ghidra index: 10500, label: FUN_002e6ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e6ce0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  
  FUN_002e5890();
  *(undefined4 *)(in_ECX + 0x486c) = param_2;
  *(undefined4 *)(in_ECX + 0x4868) = param_1;
  *(undefined4 *)(in_ECX + 0x4898) = 1;
  *(undefined1 *)(in_ECX + 0x34) = 1;
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x50))(0xfffffffb);
  FUN_002e7710(0);
  *(undefined1 *)(in_ECX + 0x19) = 1;
  (**(code **)(*(int *)(in_ECX + 0x38) + 0x14))();
  if (*(int *)(in_ECX + 0x28) == 1) {
    puVar1 = (undefined4 *)(in_ECX + 0x4880);
    puVar2 = (undefined4 *)(in_ECX + 0x4878);
    FUN_00344ffa(puVar2,puVar1);
    FUN_00345005(puVar2,puVar1);
    FUN_002e7a80(0,in_ECX + 0x40);
    *(undefined4 *)(in_ECX + 100) = *puVar2;
    *(undefined4 *)(in_ECX + 0x6c) = *puVar1;
    *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(in_ECX + 0x487c);
    *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(in_ECX + 0x4884);
    *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(in_ECX + 0x4888);
    *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x488c);
  }
  *(undefined4 *)(in_ECX + 0x4870) = 1;
  uVar3 = FUN_002e76c0();
  *(uint *)(in_ECX + 0x4874) = uVar3 & 0xff;
  return in_ECX + 0x38;
}
