/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 751C935473773D3D00377D9959808752CC9F30D3C8536C9120CFE37F12CCC7C7
 * Entry: 0x0030df50, Ghidra index: 11115, label: FUN_0030df50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t DAT_0048a820;
void FUN_0030df50(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 4;
  puVar5 = (undefined4 *)&DAT_0048a820;
  do {
    uVar1 = puVar5[-2];
    if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
      puVar5[-2] = 0;
      iVar2 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      piVar4 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      while (iVar2 != 0) {
        piVar3 = (int *)*piVar4;
        if (piVar3 == puVar5 + -3) {
          *piVar4 = *(int *)*piVar4;
          break;
        }
        piVar4 = piVar3;
        iVar2 = *piVar3;
      }
    }
    iVar6 = iVar6 + -1;
    puVar5 = puVar5 + -2;
    if (iVar6 == 0) {
      return;
    }
  } while( true );
}
