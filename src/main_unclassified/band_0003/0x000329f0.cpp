/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA7DE20407D1C6DDB7676E1E5F056F9A7319243458B327B18FE0844DDE5FFB97
 * Entry: 0x000329f0, Ghidra index: 329, label: FUN_000329f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00055aa0(void);
extern int32_t FUN_000125b0(int32_t in_EAX);

undefined1 FUN_000329f0(int *param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  
  *param_1 = 0;
  uVar5 = 0;
  if (*(int *)(in_EAX + 0x42c) == 0) {
    return 0;
  }
  iVar1 = FUN_00055aa0();
  if (*(int *)(iVar1 + 0x14) != 0) {
    *param_1 = *(int *)(iVar1 + 0x14);
    return 1;
  }
  uVar4 = *(uint *)(iVar1 + 0x88) >> 0xd & 1;
  if (((uVar4 == 0) || (*(char *)(iVar1 + 0x19) != '\0')) && (uVar2 = iVar1 + 0x1c, uVar2 != 0)) {
    if (uVar4 != 0) {
      uVar2 = uVar2 & -(uint)(*(char *)(iVar1 + 0x19) != '\0');
    }
    if (*(int *)(uVar2 + 4) != 3) {
      iVar3 = FUN_000125b0();
      if (((*(int *)(iVar3 + 0x24) != 0) && (iVar1 = *(int *)(iVar1 + 0x58), iVar1 != 0)) &&
         (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 3)) {
        *(uint *)(iVar1 + 0x250) = *(uint *)(iVar1 + 0x250) | 1;
        iVar1 = *(int *)(iVar1 + 0x24c);
        *param_1 = iVar1;
        if (iVar1 != 0) {
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}
