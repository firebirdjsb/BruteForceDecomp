/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B8BACB4169BEDB2C1D7E1C97708DD6F7BBA77D3DB400F3E4397497AE1728EE3
 * Entry: 0x001773b0, Ghidra index: 4949, label: FUN_001773b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399de8;
extern uint32_t PTR_FUN_00399e1c;
extern uint32_t PTR_FUN_00399e74;
extern uint32_t PTR_FUN_0039a348;
extern uint32_t PTR_FUN_0039a6e0;
extern uint32_t PTR_LAB_00399dd4;
extern uint32_t PTR_LAB_00399e04;
extern uint32_t PTR_LAB_00399e60;
void FUN_001773b0(void)

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
  unaff_EDI[0x1d] = PTR_FUN_0039a6e0;
  unaff_EDI[0x1c] = PTR_FUN_00399e74;
  unaff_EDI[0x1d] = PTR_LAB_00399e60;
  unaff_EDI[0x1e] = 1;
  *unaff_EDI = PTR_FUN_00399e1c;
  unaff_EDI[6] = PTR_LAB_00399e04;
  unaff_EDI[0x1c] = PTR_FUN_00399de8;
  unaff_EDI[0x1d] = PTR_LAB_00399dd4;
  unaff_EDI[2] = 1;
  unaff_EDI[1] = 2;
  if (unaff_EDI[4] != in_EAX) {
    FUN_0008f6a0();
  }
  unaff_EDI[0x19] = 0;
  return;
}
