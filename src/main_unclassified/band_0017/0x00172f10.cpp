/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76C799C4C6333D5E39429E99B73319DF49CECEB1DC0BD318363FCCFC782F55F6
 * Entry: 0x00172f10, Ghidra index: 4873, label: FUN_00172f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00390e8c;
extern uint32_t PTR_FUN_0039a348;
extern uint32_t PTR_FUN_0039a4b4;
extern uint32_t PTR_FUN_0039a6e0;
extern uint32_t PTR_LAB_0039a3d4;
extern uint32_t PTR_LAB_0039a3e8;
extern uint32_t PTR_LAB_0039a41c;
extern uint32_t PTR_LAB_0039a438;
extern uint32_t PTR_LAB_0039a44c;
extern uint32_t PTR_LAB_0039a480;
extern uint32_t PTR_LAB_0039a49c;
void FUN_00172f10(void)

{
  int in_EAX;
  undefined4 *unaff_EDI;
  
  unaff_EDI[4] = 0;
  unaff_EDI[4] = 0;
  unaff_EDI[2] = 0;
  unaff_EDI[1] = 0xffffffff;
  *(byte *)(unaff_EDI + 5) = *(byte *)(unaff_EDI + 5) & 0xfb | 0xb;
  unaff_EDI[8] = 0;
  unaff_EDI[9] = 0;
  unaff_EDI[10] = 0;
  unaff_EDI[6] = PTR_FUN_0039a348;
  unaff_EDI[0x21] = PTR_FUN_00390e8c;
  unaff_EDI[0x22] = PTR_FUN_0039a6e0;
  unaff_EDI[0x20] = PTR_LAB_0039a41c;
  unaff_EDI[0x21] = PTR_LAB_0039a3e8;
  unaff_EDI[0x22] = PTR_LAB_0039a3d4;
  unaff_EDI[0x23] = 1;
  *unaff_EDI = PTR_FUN_0039a4b4;
  unaff_EDI[6] = PTR_LAB_0039a49c;
  unaff_EDI[0x20] = PTR_LAB_0039a480;
  unaff_EDI[0x21] = PTR_LAB_0039a44c;
  unaff_EDI[0x22] = PTR_LAB_0039a438;
  if (unaff_EDI[4] != in_EAX) {
    FUN_0008f6a0();
  }
  unaff_EDI[2] = 0;
  unaff_EDI[0x19] = 0;
  unaff_EDI[1] = 2;
  return;
}
