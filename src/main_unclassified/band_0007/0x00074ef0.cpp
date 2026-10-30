/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 919303FA8F062FAE67DFF7960A06CE46B7563AB6AF978BBA6EF512767081A8B1
 * Entry: 0x00074ef0, Ghidra index: 1338, label: FUN_00074ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0001fed0(undefined4 *param_1,uint param_2);
extern void FUN_000764c0(undefined4 param_1);

extern uint32_t *DAT_00469b54;
undefined4 FUN_00074ef0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_1c [4];
  uint uStack_18;
  undefined4 uStack_8;
  uint uStack_4;
  
  iVar3 = (**(code **)(*DAT_00469b54 + 0x48))();
  pcVar6 = *(char **)(iVar3 + 0x4f0);
  iVar3 = (**(code **)(*DAT_00469b54 + 0x48))();
  pcVar2 = *(char **)(iVar3 + 0x4f4);
  if (pcVar6 != pcVar2) {
    pcVar6 = pcVar6 + 4;
    do {
      pcVar5 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar5 = *(char **)pcVar6;
      }
      uStack_4 = 0xf;
      uStack_8 = 0;
      uStack_18 = uStack_18 & 0xffffff00;
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_0001fed0(pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
      FUN_000764c0(auStack_1c);
      if (0xf < uStack_4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(uStack_18);
      }
      pcVar5 = pcVar6 + 0x18;
      uStack_18 = uStack_18 & 0xffffff00;
      pcVar6 = pcVar6 + 0x1c;
    } while (pcVar5 != pcVar2);
  }
  return 1;
}
