/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFCB0EA1FFA53B1FCC00BC0AA67BA1E55768B3F6BD9B98D6E2F13CDB85371C00
 * Entry: 0x00139bf0, Ghidra index: 3964, label: FUN_00139bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_00139bf0(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int in_EAX;
  uint *puVar5;
  int unaff_EBX;
  
  if (in_EAX != unaff_EBX) {
    puVar5 = (uint *)(in_EAX + 0x10);
    do {
      uVar1 = *puVar5;
      if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
        *puVar5 = 0;
        uVar2 = *(uint *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        puVar4 = (uint *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        while (uVar2 != 0) {
          puVar3 = (uint *)*puVar4;
          if (puVar3 == puVar5 + -1) {
            *puVar4 = *(uint *)*puVar4;
            break;
          }
          puVar4 = puVar3;
          uVar2 = *puVar3;
        }
      }
      in_EAX = in_EAX + 0x14;
      puVar5 = puVar5 + 5;
    } while (in_EAX != unaff_EBX);
  }
  return;
}
