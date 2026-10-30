/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EACB3C78B1CD88D9440A89F35A5F304D2477AE09F30B7ECC7B52126A5C7BC6B0
 * Entry: 0x00038f50, Ghidra index: 390, label: FUN_00038f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_00038f50(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 1;
  puVar3 = (undefined4 *)(param_1 + 4);
  do {
    if (puVar3 == param_2) {
      return;
    }
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    uVar5 = 0x7fff;
    uVar4 = DAT_0046cfd8 & 0x7fff;
    if (0x7fff < uVar6) {
      do {
        if (uVar5 == 0xffffffff) break;
        uVar5 = uVar5 << 0xf | 0x7fff;
        uVar4 = uVar4 << 0xf | 0x7fff;
      } while (uVar5 < uVar6);
    }
    uVar4 = uVar4 % uVar6;
    uVar2 = *puVar3;
    uVar6 = uVar6 + 1;
    puVar1 = (undefined4 *)(param_1 + uVar4 * 4);
    *puVar3 = *puVar1;
    *puVar1 = uVar2;
    puVar3 = puVar3 + 1;
  } while( true );
}
