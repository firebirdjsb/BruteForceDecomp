/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 723570EE51C1BA9C38247B742B4B9368C210F912359F2EEAC0A6B93DCBFA7060
 * Entry: 0x00271610, Ghidra index: 8814, label: FUN_00271610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392400;
void FUN_00271610(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_ESI;
  
  FUN_002710e0(unaff_ESI,in_EAX);
  *unaff_ESI = &PTR_FUN_00392400;
  unaff_ESI[0x38] = 0;
  unaff_ESI[0x39] = 0;
  unaff_ESI[0x37] = 0;
  FUN_002716d0(in_EAX);
  unaff_ESI[0x3a] = unaff_ESI[0x37];
  FUN_00271330();
  FUN_00271430(unaff_ESI,unaff_ESI + 0x26,unaff_ESI + 0x15);
  return;
}
