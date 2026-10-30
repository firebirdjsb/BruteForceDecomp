/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16C4485C11D9C9521F82057447ABD8611F1210F6000487246B2E2AE68286369F
 * Entry: 0x00162e90, Ghidra index: 4661, label: FUN_00162e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039add0;
extern uint32_t PTR_FUN_0039a8e0;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_0039a8ac;
extern uint32_t PTR_LAB_0039a8b8;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039efdc;
void FUN_00162e90(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  if (in_EAX != 0) {
    unaff_ESI[0x13] = &DAT_0039add0;
    unaff_ESI[0x70] = &PTR_FUN_0039efec;
    unaff_ESI[0x6f] = &PTR_LAB_0039efdc;
    unaff_ESI[0x70] = &PTR_FUN_0039efd0;
  }
  FUN_00156930(0);
  *unaff_ESI = &PTR_FUN_0039a8e0;
  unaff_ESI[0x12] = &PTR_FUN_0039adec;
  unaff_ESI[0x1a] = &PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x4c + (int)unaff_ESI) = &PTR_LAB_0039a8b8;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x50 + (int)unaff_ESI) = &PTR_LAB_0039a8ac;
  *(int *)(*(int *)(unaff_ESI[0x13] + 4) + 0x48 + (int)unaff_ESI) =
       *(int *)(unaff_ESI[0x13] + 4) + -0x170;
  unaff_ESI[0x6c] = 0xe;
  unaff_ESI[0x6d] = 0xbf800000;
  return;
}
