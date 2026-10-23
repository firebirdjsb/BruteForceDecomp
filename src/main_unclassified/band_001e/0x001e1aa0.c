/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6A10F6D06942C7ADCA80224CAA3AF4E58B56DBF0C44A1F80CE03CF80FEB807D
 * Entry: 0x001e1aa0, Ghidra index: 6739, label: FUN_001e1aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t *DAT_00443314;
undefined4 FUN_001e1aa0(void)

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
      (**(code **)(*DAT_00443314 + 0x10))(DAT_00443314,&local_4);
    }
  }
  return 1;
}
