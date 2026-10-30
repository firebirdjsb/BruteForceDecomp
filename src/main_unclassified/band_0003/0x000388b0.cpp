/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDB8BB17790B8FED2EDBAAF9732849C8C73D9D53A5DD536E5A67E08781D2E5F3
 * Entry: 0x000388b0, Ghidra index: 377, label: FUN_000388b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00023740(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_00038b00(void);

extern uint32_t DAT_004a884c;
extern uint32_t DAT_004a88e4;
int FUN_000388b0(int param_1)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    if ((DAT_004a88e4 & 1) == 0) {
      DAT_004a88e4 = DAT_004a88e4 | 1;
      FUN_00023740();
      /* x86 0x000388E3: push 0x0030DE90; 0x000388E8: call 0x002EA4BF.\n       * The callback address is original-image-relative, not a native-PC pointer.\n       * TODO ABI_UNVERIFIED: map this original code address to a linked C function. */
      _atexit((void (*)(void))(uintptr_t)0x0030de90U);
    }
    if (DAT_004a884c != in_EAX) {
      FUN_0008f6a0();
    }
    FUN_00038b00();
    if (param_1 != *(int *)(param_1 + 4)) {
      return param_1 + 0xc;
    }
  }
  return 0;
}
