/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26FFE935195CB80EEC52F859A5CAE401D3203EBE3850CC570F36B62E458F56B0
 * Entry: 0x000f2560, Ghidra index: 3023, label: FUN_000f2560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* Retail x86 0x000f25e8: LEA ECX,[ESP+10h] addresses the saved
 * entry ECX DWORD (entry ESP-4) after three remaining register saves
 * and two zero argument pushes. 0x000f25ec overwrites that DWORD with
 * 0x0eee8a51 before the vtable+8 call receives its address. This C11
 * word models the call's memory input only: POP ECX at 0x000f25fe,
 * guest register writeback, indirect-call ABI and behavior UNVERIFIED. */
extern uint32_t DAT_00469b58;
void FUN_000f2560(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 guest_saved_ecx_word;
  byte *pbVar5;
  
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar3 == -0x104e72d8) {
    iVar1 = **(int **)(DAT_00469b58 + 8);
    uVar4 = FUN_00102000();
    pbVar5 = (byte *)(**(code **)(iVar1 + 0x130))(uVar4);
    if (pbVar5 != (byte *)0x0) {
      cVar2 = FUN_000f2960(*(undefined4 *)(pbVar5 + 0x98));
      if (cVar2 == '\0') {
        *pbVar5 = *pbVar5 & 0xef;
        FUN_001020a0();
        piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar3 + 0x14))();
        piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        guest_saved_ecx_word = 0x0eee8a51U;
        (**(code **)(*piVar3 + 8))(&guest_saved_ecx_word,0,0);
        return;
      }
    }
  }
  FUN_000f0480(0);
  return;
}
