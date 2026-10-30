/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5096FCB33CB1908BD64096B96AA604BDD30049055359CCF7AB25F0D18B10B6C8
 * Entry: 0x000f13c0, Ghidra index: 3008, label: FUN_000f13c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b58;
undefined4 FUN_000f13c0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_000ffb00(in_EAX);
  if ((iVar1 != -1) && (iVar1 = *(int *)(*(int *)(in_EAX + 0x74) + iVar1 * 4), iVar1 != 0)) {
    iVar2 = (**(code **)(*DAT_00469b58 + 0x48))();
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar1 == 0x87c40bb) {
        uVar3 = *(undefined4 *)(iVar2 + 0x50);
      }
      else if (iVar1 == -0x1b696ffb) {
        uVar3 = *(undefined4 *)(iVar2 + 0x54);
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + 0x58);
      }
      (**(code **)(*(int *)DAT_00469b58[2] + 0x230))(uVar3);
      return 1;
    }
  }
  return 0;
}
