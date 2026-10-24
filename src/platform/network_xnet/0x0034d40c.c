/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D060A408242FEC4D254DFC2EFDB3A38FB903D3A1C053640B2BBE58DACACCD529
 * Entry: 0x0034d40c, Ghidra index: 13001, label: FUN_0034d40c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fef000a8;
extern uint32_t _DAT_fef000ac;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034d40c(byte *param_1)

{
  int *piVar1;
  int in_ECX;
  uint8_t local_six[6];
  uint32_t first_word;
  uint16_t last_word;
  
  piVar1 = *(int **)(in_ECX + 0x260);
  if (piVar1 == (int *)0x0) {
    /* 0x0034d444-0x0034d44e: MOVSD/MOVSW copy exactly six bytes from
     * guest ECX+0x1e6 into the contiguous local at EBP-8 through EBP-3.
     * The guest-address-to-host mapping and original DF-clear string-op
     * convention remain ABI_UNVERIFIED. */
    memcpy(local_six,(const void *)(uintptr_t)((uint32_t)in_ECX + 0x1e6U),6);
    if ((param_1 != (byte *)0x0) &&
       (((*(int *)param_1 != 0 || (*(short *)(param_1 + 4) != 0)) && ((*param_1 & 1) == 0)))) {
      /* 0x0034d46e-0x0034d472 replace those same six local bytes. */
      memcpy(local_six,param_1,6);
    }
    /* 0x0034d47e REPE CMPSW tests equality of all three guest words. */
    if (memcmp((const void *)(uintptr_t)((uint32_t)in_ECX + 0x1e0U),local_six,6) != 0) {
      FUN_0034ce64();
      /* 0x0034d48a/92 read DWORD and WORD from EBP-8/EBP-4; MOVZX
       * zero-extends the latter before its DWORD store at 0xfef000ac. */
      memcpy(&first_word,local_six,sizeof(first_word));
      _DAT_fef000a8 = first_word;
      memcpy(&last_word,local_six + 4,sizeof(last_word));
      _DAT_fef000ac = (uint32_t)last_word;
      /* 0x0034d49b-0x0034d4a7 copy the same six bytes to ECX+0x1e0. */
      memcpy((void *)(uintptr_t)((uint32_t)in_ECX + 0x1e0U),local_six,6);
      FUN_0034ce3c();
    }
  }
  else if ((piVar1[2] == 0x58424456) && (piVar1[3] != 0)) {
    (**(code **)(*piVar1 + 0x1c))(param_1,in_ECX + 0x1e0);
  }
  return;
}
