/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D822E285B97CE01BF4ECA1635C5B9A4E3C2075A111D8C26D3B159815CCCDDE3
 * Entry: 0x00106be0, Ghidra index: 3363, label: FUN_00106be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_00106be0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_d4 [212];
  
  FUN_00106660();
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d0))(local_d4);
  if (cVar1 != '\0') {
    /* XBE 0x00106BE0 reserves 0xD4 bytes; the LEA instructions at
     * 0x00106BE7, 0x00106BFC and 0x00106C0B address [ESP+4].
     * Reuse the existing 212-byte local buffer instead of Ghidra's
     * synthetic stack0xffffff28. Virtual-call ABI remains unverified. */
    FUN_001066a0(local_d4);
    uVar2 = FUN_002ebf10();
    return uVar2;
  }
  return 0;
}
