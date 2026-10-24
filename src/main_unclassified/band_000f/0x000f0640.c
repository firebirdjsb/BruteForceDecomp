/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B53AF51017EC5D63735E1925C0C49E09C48B684867F6FFB64CA32F55A58B978E
 * Entry: 0x000f0640, Ghidra index: 3000, label: FUN_000f0640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* Retail x86 0x000f06a3: LEA ECX,[ESP+0Ch] addresses the saved
 * incoming ECX DWORD at entry ESP-4 (four saved registers).
 * 0x000f06aa writes EBP (loaded from [EDI+14h]) to that same slot
 * before 0x000f06ae calls 0x0010cb40. The callee reads exactly
 * one DWORD through the supplied pointer. This explicit word models
 * the call input; the original later POP ECX, guest register restoration,
 * implicit register arguments, and native ABI are NOT yet modeled. */
extern uint32_t DAT_00469b58;
undefined1 FUN_000f0640(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 guest_saved_ecx_word;
  byte *pbVar4;
  int *piVar5;
  undefined1 uVar6;
  int *unaff_ESI;
  
  if ((unaff_ESI == (int *)0x0) || (iVar2 = (**(code **)(*unaff_ESI + 4))(), iVar2 != 3)) {
    return 0;
  }
  iVar2 = **(int **)(DAT_00469b58 + 8);
  uVar3 = FUN_00102000();
  pbVar4 = (byte *)(**(code **)(iVar2 + 0x130))(uVar3);
  uVar6 = 0;
  FUN_0010c7d0();
  if ((*pbVar4 & 0x10) != 0) {
    piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar5 == -0x104e72d8) {
      iVar2 = *(int *)(pbVar4 + 0x14);
      guest_saved_ecx_word = (undefined4)iVar2;
      cVar1 = FUN_0010cb40(&guest_saved_ecx_word);
      if (cVar1 == '\0') {
        return 0;
      }
      piVar5 = (int *)FUN_0010c850();
      if (*piVar5 != iVar2) {
        *pbVar4 = *pbVar4 & 0xe3;
        return 0;
      }
    }
    uVar6 = 1;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar5 + 4))(unaff_ESI[1]);
  }
  return uVar6;
}
