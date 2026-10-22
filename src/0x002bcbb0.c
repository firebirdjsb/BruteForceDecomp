/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3615685AEAE67A30B562D3CF3DC79B1867120A05F7F9E8833C38309AFC10DC1F
 * Entry: 0x002bcbb0, Ghidra index: 9929, label: FUN_002bcbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bcbb0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_002bc920();
  if (iVar2 != 0) {
    uVar4 = (uint)*(ushort *)(iVar2 + 6);
    do {
      uVar4 = uVar4 - 1;
      if ((int)uVar4 < 0) {
        return;
      }
      puVar1 = *(undefined4 **)(*(int *)(iVar2 + 8) + uVar4 * 4);
    } while ((((*(byte *)(puVar1 + 1) & 1) == 0) || ((**(code **)*puVar1)(), (int)uVar4 < 1)) ||
            (iVar3 = FUN_002bc920(), iVar3 != 0));
  }
  return;
}
