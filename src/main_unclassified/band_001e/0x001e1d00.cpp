/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EE0361F4C332A44219FDFCA51B9B7A4F6F1CE2757342B0B1EFA38F3F541E928
 * Entry: 0x001e1d00, Ghidra index: 6740, label: FUN_001e1d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t *DAT_00443310;
undefined4 FUN_001e1d00(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint local_4;
  
  iVar3 = *(int *)(in_EAX + 8);
  uVar4 = FUN_002383b0();
  for (iVar6 = *(int *)(in_EAX + 4); iVar6 != iVar3; iVar6 = iVar6 + 0x1c) {
    if (*(uint *)(iVar6 + 0x18) < 0x10) {
      pcVar5 = (char *)(iVar6 + 4);
    }
    else {
      pcVar5 = *(char **)(iVar6 + 4);
    }
    if (pcVar5 == (char *)0x0) {
      local_4 = 0;
    }
    else {
      local_4 = 0xffffffff;
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        local_4 = local_4 >> 8 ^
                  *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ local_4) & 0xff) * 4);
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar1;
      }
      local_4 = ~local_4;
    }
    if (local_4 != uVar4) {
      (**(code **)(*DAT_00443310 + 0x3c))(&local_4);
      /* All three LEA EAX,[ESP+0x10] calls address the same CRC DWORD. */
      (**(code **)(*DAT_00443310 + 0x1c))(&local_4);
      (**(code **)(*DAT_00443310 + 0x50))(&local_4);
    }
  }
  return 1;
}
