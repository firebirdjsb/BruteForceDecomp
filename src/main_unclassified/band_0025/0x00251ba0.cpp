/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F73CB15D8318E20ED5BB955C53B27032FBB524BD1F51E48A57A250E4D3D2F08A
 * Entry: 0x00251ba0, Ghidra index: 8373, label: FUN_00251ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038d7c8;
extern uint32_t DAT_0038d7ca;
extern uint32_t DAT_0038d7cc;
extern uint32_t DAT_0038d7ce;
void FUN_00251ba0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_EDX;
  undefined4 *puVar4;
  
  *(int *)(in_EDX + 0x34) = *(int *)(in_EDX + 0x24) << 1;
  *(undefined2 *)(*(int *)(in_EDX + 0x3c) + -2 + *(int *)(in_EDX + 0x44) * 2) = 0;
  uVar3 = *(int *)(in_EDX + 0x44) * 2 - 2;
  puVar4 = *(undefined4 **)(in_EDX + 0x3c);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  iVar1 = *(int *)(in_EDX + 0x7c) * 0xc;
  *(uint *)(in_EDX + 0x78) = (uint)*(ushort *)(&DAT_0038d7ca + iVar1);
  *(uint *)(in_EDX + 0x84) = (uint)*(ushort *)(&DAT_0038d7c8 + iVar1);
  *(uint *)(in_EDX + 0x88) = (uint)*(ushort *)(&DAT_0038d7cc + iVar1);
  *(uint *)(in_EDX + 0x74) = (uint)*(ushort *)(&DAT_0038d7ce + iVar1);
  *(undefined4 *)(in_EDX + 100) = 0;
  *(undefined4 *)(in_EDX + 0x54) = 0;
  *(undefined4 *)(in_EDX + 0x6c) = 0;
  *(undefined4 *)(in_EDX + 0x60) = 0;
  *(undefined4 *)(in_EDX + 0x40) = 0;
  *(undefined4 *)(in_EDX + 0x70) = 2;
  *(undefined4 *)(in_EDX + 0x58) = 2;
  return;
}
