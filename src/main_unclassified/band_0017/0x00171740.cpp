/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E113F4C59FFE179E5E89B69344C0CCB6BF1D0555FB503AFD9D594D3FE830E59
 * Entry: 0x00171740, Ghidra index: 4857, label: FUN_00171740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a348;
extern uint32_t PTR_FUN_0039a5fc;
extern uint32_t PTR_FUN_0039a6b4;
extern uint32_t PTR_FUN_0039a6e0;
extern uint32_t PTR_FUN_0039a714;
extern uint32_t PTR_FUN_0039c2a0;
extern uint32_t PTR_LAB_0039a570;
extern uint32_t PTR_LAB_0039a584;
extern uint32_t PTR_LAB_0039a59c;
extern uint32_t PTR_LAB_0039a5c4;
extern uint32_t PTR_LAB_0039a624;
extern uint32_t PTR_LAB_0039a628;
extern uint32_t PTR_LAB_0039a63c;
extern uint32_t PTR_LAB_0039a654;
extern uint32_t PTR_LAB_0039a67c;
extern uint32_t PTR_LAB_0039a69c;
void FUN_00171740(void)

{
  int in_EAX;
  undefined4 in_EDX;
  undefined4 *unaff_EDI;
  
  unaff_EDI[4] = 0;
  unaff_EDI[4] = 0;
  *(byte *)(unaff_EDI + 5) = *(byte *)(unaff_EDI + 5) & 0xfb | 0xb;
  unaff_EDI[8] = 0;
  unaff_EDI[9] = 0;
  unaff_EDI[10] = 0;
  unaff_EDI[6] = PTR_FUN_0039a348;
  unaff_EDI[0x1d] = PTR_FUN_0039a5fc;
  unaff_EDI[0x1e] = PTR_FUN_0039c2a0;
  unaff_EDI[0x1f] = PTR_FUN_0039a6e0;
  unaff_EDI[0x1c] = PTR_LAB_0039a5c4;
  unaff_EDI[0x1d] = PTR_LAB_0039a59c;
  unaff_EDI[0x1e] = PTR_LAB_0039a584;
  unaff_EDI[0x1f] = PTR_LAB_0039a570;
  unaff_EDI[0x20] = 1;
  unaff_EDI[0x21] = PTR_FUN_0039a714;
  *unaff_EDI = PTR_FUN_0039a6b4;
  unaff_EDI[6] = PTR_LAB_0039a69c;
  unaff_EDI[0x1c] = PTR_LAB_0039a67c;
  unaff_EDI[0x1d] = PTR_LAB_0039a654;
  unaff_EDI[0x1e] = PTR_LAB_0039a63c;
  unaff_EDI[0x1f] = PTR_LAB_0039a628;
  unaff_EDI[0x21] = PTR_LAB_0039a624;
  unaff_EDI[0x25] = in_EDX;
  unaff_EDI[2] = 0;
  unaff_EDI[1] = 2;
  if (unaff_EDI[4] != in_EAX) {
    FUN_0008f6a0();
  }
  unaff_EDI[0x19] = 0;
  *(byte *)(unaff_EDI + 0x24) = *(byte *)(unaff_EDI + 0x24) & 0xfe;
  return;
}
