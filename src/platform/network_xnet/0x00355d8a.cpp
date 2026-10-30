/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F24C365089454195C788179874D63DD79113FDFCF123EFB49B448EE57E477F3C
 * Entry: 0x00355d8a, Ghidra index: 13133, label: FUN_00355d8a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00355d8a(undefined4 param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int in_ECX;
  undefined4 *puVar4;
  int local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  uVar3 = *(uint *)(in_ECX + 0x1d8);
  puVar4 = (undefined4 *)(in_ECX + 0x29c);
  local_c = 0x40;
  do {
    uVar2 = *(ushort *)((int)puVar4 + 0x16);
    if (uVar2 != 0) {
      if ((uint)puVar4[1] <= uVar3) {
        if (uVar2 < 4) {
          if (uVar2 == 3) {
            FUN_0034c9cf(in_ECX);
            puVar4[1] = (uint)*(byte *)(in_ECX + 0x14) * 300 + uVar3;
            *(undefined2 *)((int)puVar4 + 0x16) = 2;
          }
          else {
            puVar4[1] = 0xffffffff;
            *(undefined2 *)((int)puVar4 + 0x16) = 0;
            *puVar4 = 0;
          }
        }
        else {
          bVar1 = *(byte *)(in_ECX + 0x12);
          *(ushort *)((int)puVar4 + 0x16) = uVar2 - 1;
          puVar4[1] = uVar3 + (uint)bVar1 * 5;
          FUN_00355bea(0x100,*(undefined4 *)(in_ECX + 0x268),*puVar4,0);
        }
      }
      if ((uint)puVar4[1] < local_8) {
        local_8 = puVar4[1];
      }
    }
    puVar4 = puVar4 + 6;
    local_c = local_c + -1;
  } while (local_c != 0);
  FUN_0034c35a(param_1,local_8);
  return;
}
