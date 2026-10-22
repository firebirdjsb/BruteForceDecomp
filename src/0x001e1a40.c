/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BA963C3D8EB6F83B505EBE0641A98BB6A42DED0B78555147B3F21BF310C81DE
 * Entry: 0x001e1a40, Ghidra index: 6738, label: FUN_001e1a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004698d4;
extern uint32_t DAT_004698d8;
undefined4 FUN_001e1a40(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_EBX;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = *(int *)(in_EAX + 8);
  iVar5 = *(int *)(in_EAX + 4);
  if (iVar5 != iVar1) {
    puVar4 = (undefined4 *)(iVar5 + 4);
    do {
      puVar3 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar3 = (undefined4 *)*puVar4;
      }
      iVar2 = (**(code **)(*unaff_EBX + 0x10))(puVar3);
      if (iVar2 == 0) {
        if (DAT_004698d4 != (code *)0x0) {
          (*DAT_004698d4)(DAT_004698d8);
        }
        puVar3 = puVar4;
        if (0xf < (uint)puVar4[5]) {
          puVar3 = (undefined4 *)*puVar4;
        }
        (**(code **)*unaff_EBX)(puVar3);
      }
      iVar5 = iVar5 + 0x1c;
      puVar4 = puVar4 + 7;
    } while (iVar5 != iVar1);
  }
  return 1;
}
