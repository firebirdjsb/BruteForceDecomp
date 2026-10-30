/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A1AB3B6D88C34DD1F9B150187BDB5B7EB0CF9FCCE32F232F8C7B716A0051AD1
 * Entry: 0x000bcb90, Ghidra index: 2299, label: FUN_000bcb90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000bc9c0(void);
extern void FUN_000bea80(void);

extern uint32_t DAT_00469ac0;
extern uint32_t PTR_FUN_0039f878;
extern uint32_t PTR_LAB_0039f744;
extern uint32_t PTR_LAB_0039f754;
void FUN_000bcb90(void)

{
  undefined4 *in_EAX;
  
  FUN_000bc9c0();
  *in_EAX = &PTR_FUN_0039f878;
  FUN_000bea80();
  in_EAX[0x17] = 0x3e800000;
  in_EAX[0x18] = 0x3e800000;
  in_EAX[0xc] = &PTR_LAB_0039f744;
  in_EAX[0x20] = 0x3fd9999a;
  in_EAX[0x21] = 0x40200000;
  in_EAX[0x1e] = 0x3fc00000;
  DAT_00469ac0 = 0;
  FUN_000bea80();
  in_EAX[0x22] = &PTR_LAB_0039f754;
  in_EAX[0x34] = 0x439a8000;
  in_EAX[0x38] = 0;
  in_EAX[0x39] = 0;
  in_EAX[0x3b] = 0;
  in_EAX[0x3c] = 0;
  in_EAX[0x3d] = 0;
  in_EAX[0x3e] = 0;
  in_EAX[0x3f] = 0;
  in_EAX[0x40] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x42] = 0;
  in_EAX[0x43] = 0;
  in_EAX[0x44] = 0;
  in_EAX[0x45] = 0;
  *(byte *)(in_EAX + 0x3a) = *(byte *)(in_EAX + 0x3a) & 0xfc | 4;
  *(undefined2 *)(in_EAX + 9) = 6;
  return;
}
