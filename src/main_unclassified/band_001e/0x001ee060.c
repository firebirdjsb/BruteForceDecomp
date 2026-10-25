/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D72AE38F7CE2F3F326324830F1D48F4BF6F6D2C90AF6F0D8EA14AF07D2262FC4
 * Entry: 0x001ee060, Ghidra index: 6953, label: FUN_001ee060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t PTR_FUN_00396930;

/* Original XBE 0x001EE08B: LEA EAX,[ESP+0x12C] after SUB ESP,0x11C
 * addresses the fourth incoming stack DWORD at entry ESP+0x10.
 * Both observed direct callers (0x000F2A19, 0x000F2E29) pass five guest
 * DWORDs and perform ADD ESP,0x14 after returning. Their fourth and fifth
 * words form two adjacent 32-bit formatting inputs, not host va_list.
 * This storage reconstruction is syntax-only: guest memory translation,
 * unobserved indirect callers and formatter/stack ABI remain ABI_UNVERIFIED.
 */
void FUN_001ee060(undefined4 param_1, undefined4 *param_2, undefined4 param_3,
                  uint32_t format_word_0, uint32_t format_word_1)
{
  undefined **local_11c [6];
  undefined4 local_104;
  undefined1 local_100 [256];
  uint32_t guest_format_words[2] = {format_word_0, format_word_1};
  _Static_assert(sizeof(guest_format_words) == 8, "two adjacent guest DWORDs");

  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    FUN_002e8c40();
    local_104 = *param_2;
    local_11c[0] = &PTR_FUN_00396930;
    FUN_002eb2b3(local_100,0x80,param_3,guest_format_words);
    FUN_002e7f50(0xfffffffc,local_11c,1,1);
    FUN_002e8b80();
  }
  return;
}