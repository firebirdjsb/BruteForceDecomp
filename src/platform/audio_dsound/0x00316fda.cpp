/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C25CB58D840D39C17175DD78172131D28988C005E87EC244EB6A98FBC59F0A4
 * Entry: 0x00316fda, Ghidra index: 12168, label: FUN_00316fda
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00316fda(void)

{
  bool bVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  bVar1 = true;
  FUN_003118f0();
  do {
    uVar3 = *(uint *)(in_ECX + 0x198);
    local_c = 0;
    do {
      iVar2 = FUN_003166d3(uVar3);
      if (iVar2 == 0) break;
      FUN_00316e24(uVar3,0);
      local_8 = local_8 | 1;
      if (((*(ushort *)(in_ECX + 0x12) & 0x1000) != 0) &&
         (*(char *)(uVar3 * 0x10 + 0xe + *(int *)(in_ECX + 0x68)) == '\0')) {
        *(ushort *)(in_ECX + 0x12) = *(ushort *)(in_ECX + 0x12) & 0xefff;
        *(ushort *)(in_ECX + 0x12) = *(ushort *)(in_ECX + 0x12) | 0x2000;
      }
      uVar3 = uVar3 - 1 & 1;
      local_c = local_c + 1;
    } while (local_c < 2);
    if ((*(ushort *)(in_ECX + 0x12) & 0x2000) != 0) break;
    uVar4 = *(int *)(in_ECX + 0x19c) + *(int *)(in_ECX + 0x198);
    uVar3 = 0;
    do {
      iVar2 = FUN_00316ceb(uVar4 & 1);
      if (iVar2 == 0) {
        bVar1 = false;
        break;
      }
      local_8 = local_8 | 2;
      uVar4 = (uVar4 & 1) - 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
  } while (bVar1);
  if ((*(byte *)(*(int *)(in_ECX + 0x88) + 0xb) & 0x40) != 0) {
    FUN_00316dcd();
  }
  FUN_00311923();
  return local_8;
}
