/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AB266598B4BDD93B090348E4BF28C1464D2CC4B7637F6932AB0E251EBACB2FA
 * Entry: 0x001e8a90, Ghidra index: 6841, label: FUN_001e8a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040ddd8;
void FUN_001e8a90(void)

{
  char *pcVar1;
  int in_EAX;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char local_208 [520];
  
  FUN_002ea78d();
  if (local_208[0] != '\0') {
    pcVar1 = local_208;
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    if (pcVar2[-1] != '-') {
      pcVar1 = &DAT_0040ddd8;
      do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      puVar5 = (undefined4 *)(in_EAX + -1);
      do {
        pcVar1 = (char *)((int)puVar5 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      } while (*pcVar1 != '\0');
      puVar4 = (undefined4 *)&DAT_0040ddd8;
      for (uVar3 = (uint)(pcVar2 + -0x40ddd7) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = (uint)(pcVar2 + -0x40ddd7) & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
  }
  return;
}
