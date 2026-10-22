/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E2C68C204A168CFDE255E89337E86306213B112DB897A5AD637E4B54BB56B6F
 * Entry: 0x00317710, Ghidra index: 12181, label: FUN_00317710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff48;
void FUN_00317710(void)

{
  int in_ECX;
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  uint local_8;
  
  FUN_003118f0();
  if ((*(byte *)(in_ECX + 0x12) & 1) != 0) {
    local_8 = 0;
    if (*(char *)(in_ECX + 100) != '\0') {
      puVar2 = (ushort *)(in_ECX + 0xc);
      do {
        puVar3 = (undefined4 *)((uint)*puVar2 * 0x80 + DAT_0032ff48);
        for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        local_8 = local_8 + 1;
        *(uint *)((uint)*puVar2 * 0x80 + 0x7c + DAT_0032ff48) = (uint)*puVar2;
        puVar2 = puVar2 + 1;
      } while (local_8 < *(byte *)(in_ECX + 100));
    }
    *(undefined4 *)(in_ECX + 0x68) = 0;
    *(undefined4 *)(in_ECX + 0x6c) = 0;
    FUN_00315c8f(in_ECX);
    FUN_003174e3();
  }
  FUN_00311923();
  return;
}
