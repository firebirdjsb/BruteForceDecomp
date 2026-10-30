/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A48B856B5929BE8447CFD33C4AF01D8EF31B36F19559ABB2E5AAF754096248D0
 * Entry: 0x0015f2c0, Ghidra index: 4574, label: FUN_0015f2c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039aa94;
extern uint32_t PTR_FUN_0039aab0;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039aa9c;
extern uint32_t PTR_LAB_0039aaa8;
extern uint32_t PTR_LAB_0039efdc;
void FUN_0015f2c0(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  if (in_EAX != 0) {
    unaff_ESI[0x13] = DAT_0039aa94;
    unaff_ESI[0x74] = PTR_FUN_0039efec;
    unaff_ESI[0x73] = PTR_LAB_0039efdc;
    unaff_ESI[0x74] = PTR_FUN_0039efd0;
  }
  FUN_00156930();
  *unaff_ESI = &PTR_FUN_0039aab0;
  unaff_ESI[0x12] = &PTR_FUN_0039adec;
  unaff_ESI[0x1a] = &PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x4c + (int)unaff_ESI) = &PTR_LAB_0039aaa8;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x50 + (int)unaff_ESI) = &PTR_LAB_0039aa9c;
  *(int *)(*(int *)(unaff_ESI[0x13] + 4) + 0x48 + (int)unaff_ESI) =
       *(int *)(unaff_ESI[0x13] + 4) + -0x180;
  unaff_ESI[0x6e] = 0;
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6c] = 0;
  *(byte *)(unaff_ESI + 0x6f) = *(byte *)(unaff_ESI + 0x6f) & 0xfc;
  return;
}
