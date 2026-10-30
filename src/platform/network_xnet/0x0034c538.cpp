/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A4A449CF48DF344377555FBABA987E31BE929AAEE4CFBA76247556A41D67FEC
 * Entry: 0x0034c538, Ghidra index: 12963, label: FUN_0034c538
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003569d0;
extern uint32_t DAT_00356a2c;
extern uint32_t DAT_00356a30;
bool FUN_0034c538(byte *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (*param_1 < 2) {
    iVar2 = 0x5f;
    bVar6 = true;
    pbVar5 = (byte *)((int)&DAT_00356a30 + 1);
    pbVar4 = param_1;
    do {
      pbVar4 = pbVar4 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pbVar4 == *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return true;
    }
  }
  puVar1 = &DAT_00356a2c;
  puVar3 = (uint *)(param_1 + 0x5c);
  do {
    if (*puVar1 != *puVar3) {
      return *puVar1 < *puVar3;
    }
    puVar1 = puVar1 + -1;
    puVar3 = puVar3 + -1;
  } while (&DAT_003569d0 < puVar1);
  return *puVar1 - 1 <= *puVar3;
}
