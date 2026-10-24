/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF62C87D782A5F51010826406CB436111E2AD2D4A4D4E8196E0BA99E5200F8A2
 * Entry: 0x000f4200, Ghidra index: 3059, label: FUN_000f4200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
bool FUN_000f4200(uint32_t guest_argument_word)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  int *piVar4;
  int aiStack_20 [8];
  
  iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xdc))(1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) {
    if ((*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c)) / 0x4c != 0) {
      /* MOV [ESP+0x28] and LEA [ESP+0x2c] reference the same
       * incoming 32-bit argument before/after PUSH EDI.  The callee
       * clears its first byte, not a fabricated return-address slot. */
      FUN_000f4c00(guest_argument_word,iVar2 + 8,unaff_ESI,(uint8_t *)&guest_argument_word);
      aiStack_20[0] = 0;
      aiStack_20[3] = 0;
      piVar4 = aiStack_20;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      aiStack_20[1] = *(undefined4 *)(unaff_ESI + 0x60);
      aiStack_20[4] = 0;
      cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x248))();
      aiStack_20[3] = (-(uint)(cVar1 != '\0') & 0xfc52ce56) + 0xe30d436;
      puVar3 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      iVar2 = (**(code **)*puVar3)(aiStack_20);
      return iVar2 != 0;
    }
  }
  return false;
}
