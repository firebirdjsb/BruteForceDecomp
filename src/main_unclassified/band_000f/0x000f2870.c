/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC1FD4077973C2CD8F5AB574D132EE237ED7206F1E492253EFC81D6BD2E3C8D7
 * Entry: 0x000f2870, Ghidra index: 3027, label: FUN_000f2870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000f2870(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 saved_ecx_word;
  
  iVar4 = **(int **)(DAT_00469b58 + 8);
  uVar2 = FUN_00102000();
  pbVar3 = (byte *)(**(code **)(iVar4 + 0x130))(uVar2);
  if (pbVar3 == (byte *)0x0) {
    return 0;
  }
  for (piVar6 = *(int **)(param_1 + 0x74);
      (piVar7 = (int *)0x0, piVar6 != *(int **)(param_1 + 0x78) &&
      (piVar7 = (int *)*piVar6, piVar7[9] != 0x17c025b)); piVar6 = piVar6 + 1) {
  }
  if ((piVar7 != (int *)0x0) && (iVar4 = (**(code **)(*piVar7 + 4))(), iVar4 == 3)) {
    puVar5 = (undefined4 *)FUN_0010c850();
    cVar1 = FUN_000f27f0(pbVar3);
    if (cVar1 != '\0') {
      *(undefined4 *)(pbVar3 + 0xc) = *puVar5;
      *pbVar3 = *pbVar3 | 2;
      FUN_000793b0();
      FUN_001020a0();
      return 1;
    }
    piVar6 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    /* XBE 0x000f291c LEA ECX,[ESP+0x18], followed by
     * 0x000f2920 MOV [ESP+0x18],0xe5aaad1d. Five saved
     * registers plus two pushed zeros locate the saved ECX word. */
    saved_ecx_word = 0xe5aaad1d;
    (**(code **)(*piVar6 + 8))(&saved_ecx_word,0,0);
    /* XBE 0x000f2936 writes 0xfd890279 to that same saved
     * ECX slot, then 0x000f2943 LEA EDX,[ESP+0x10]. */
    saved_ecx_word = 0xfd890279;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&saved_ecx_word);
  }
  return 0;
}
