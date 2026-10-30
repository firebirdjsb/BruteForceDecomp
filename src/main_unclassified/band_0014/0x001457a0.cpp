/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAC6D36A4D697D21A200637604BBF11EF2A654260F720CEF0EC2D724A807BB57
 * Entry: 0x001457a0, Ghidra index: 4193, label: FUN_001457a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039c0d0;
extern uint32_t PTR_FUN_0039a714;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039c0f0;
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039c0d8;
extern uint32_t PTR_LAB_0039c0e4;
extern uint32_t PTR_LAB_0039c0ec;
extern uint32_t PTR_LAB_0039efdc;
void FUN_001457a0(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  if (in_EAX != 0) {
    unaff_ESI[0x13] = DAT_0039c0d0;
    unaff_ESI[0x72] = PTR_FUN_0039efec;
    unaff_ESI[0x71] = PTR_LAB_0039efdc;
    unaff_ESI[0x72] = PTR_FUN_0039efd0;
  }
  FUN_00156930();
  unaff_ESI[0x6c] = &PTR_FUN_0039a714;
  *unaff_ESI = &PTR_FUN_0039c0f0;
  unaff_ESI[0x12] = &PTR_FUN_0039adec;
  unaff_ESI[0x1a] = &PTR_LAB_0039a8c0;
  unaff_ESI[0x6c] = &PTR_LAB_0039c0ec;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x4c + (int)unaff_ESI) = &PTR_LAB_0039c0e4;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x50 + (int)unaff_ESI) = &PTR_LAB_0039c0d8;
  *(int *)(*(int *)(unaff_ESI[0x13] + 4) + 0x48 + (int)unaff_ESI) =
       *(int *)(unaff_ESI[0x13] + 4) + -0x178;
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6e] = 0;
  unaff_ESI[0x6f] = 0;
  return;
}
