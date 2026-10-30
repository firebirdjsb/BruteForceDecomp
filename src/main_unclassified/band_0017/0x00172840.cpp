/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D04A3C2A29FCC3AB4BA4BC8DF22F23B17F678AEC488684B100F469570C3133B9
 * Entry: 0x00172840, Ghidra index: 4867, label: FUN_00172840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a348;
extern uint32_t PTR_FUN_0039a388;
extern uint32_t PTR_FUN_0039a514;
extern uint32_t PTR_FUN_0039a548;
extern uint32_t PTR_FUN_0039a5fc;
extern uint32_t PTR_FUN_0039a6e0;
extern uint32_t PTR_LAB_0039a2b0;
extern uint32_t PTR_LAB_0039a2c4;
extern uint32_t PTR_LAB_0039a360;
extern uint32_t PTR_LAB_0039a500;
extern uint32_t PTR_LAB_0039a530;
void FUN_00172840(void)

{
  int in_EAX;
  undefined4 *unaff_EDI;
  
  unaff_EDI[4] = 0;
  unaff_EDI[4] = 0;
  *(byte *)(unaff_EDI + 5) = *(byte *)(unaff_EDI + 5) & 0xfb | 0xb;
  unaff_EDI[8] = 0;
  unaff_EDI[9] = 0;
  unaff_EDI[10] = 0;
  unaff_EDI[6] = PTR_FUN_0039a348;
  unaff_EDI[0x1d] = PTR_FUN_0039a5fc;
  unaff_EDI[0x1e] = PTR_FUN_0039a6e0;
  unaff_EDI[0x1c] = PTR_FUN_0039a388;
  unaff_EDI[0x1d] = PTR_LAB_0039a360;
  unaff_EDI[0x1e] = PTR_LAB_0039a500;
  unaff_EDI[0x1f] = 1;
  *unaff_EDI = PTR_FUN_0039a548;
  unaff_EDI[6] = PTR_LAB_0039a530;
  unaff_EDI[0x1c] = PTR_FUN_0039a514;
  unaff_EDI[0x1d] = PTR_LAB_0039a2c4;
  unaff_EDI[0x1e] = PTR_LAB_0039a2b0;
  unaff_EDI[2] = 0;
  unaff_EDI[1] = 2;
  if (unaff_EDI[4] != in_EAX) {
    FUN_0008f6a0();
  }
  unaff_EDI[0x19] = 0;
  return;
}
