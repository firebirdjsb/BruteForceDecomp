/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 744D9E14E1D72D1DB86BF8BED3318CE80A884F724FAA081898B408ACA8F5D96F
 * Entry: 0x001edd40, Ghidra index: 6947, label: FUN_001edd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
bool FUN_001edd40(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  iVar4 = DAT_004698d0;
  iVar2 = (in_EAX + -1) * 0x598;
  piVar5 = (int *)(iVar2 + 0x16c + in_ECX);
  iVar3 = 0;
  do {
    if (*piVar5 == DAT_004698d0) {
      puVar1 = (undefined4 *)(iVar2 + iVar3 * 0x28 + 0x16c + in_ECX);
      if (puVar1 != (undefined4 *)0x0) {
        puVar6 = puVar1;
        for (iVar4 = 9; puVar6 = puVar6 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *param_1 = *puVar6;
          param_1 = param_1 + 1;
        }
        return puVar1 != (undefined4 *)0x0;
      }
      break;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 10;
  } while (iVar3 < 0x20);
  bVar7 = iRam004a5b64 != DAT_004698d0;
  *(undefined1 *)(in_ECX + 0xa0) = 1;
  if ((bVar7) && (*(int *)(in_ECX + 0x1c) == 5)) {
    iRam004a5b64 = iVar4;
  }
  return false;
}
