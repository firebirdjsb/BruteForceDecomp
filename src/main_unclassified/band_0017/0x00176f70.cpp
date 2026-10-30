/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CA62A39F8959DF3E160DCD13E6233B74374814E0CEAA04CE3639075BFC38363
 * Entry: 0x00176f70, Ghidra index: 4945, label: FUN_00176f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399e74;
extern uint32_t PTR_FUN_00399ea4;
extern uint32_t PTR_FUN_00399ed8;
extern uint32_t PTR_FUN_0039a348;
extern uint32_t PTR_FUN_0039a6e0;
extern uint32_t PTR_LAB_00399e60;
extern uint32_t PTR_LAB_00399e90;
extern uint32_t PTR_LAB_00399ec0;
void FUN_00176f70(void)

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
  *unaff_EDI = PTR_FUN_00399ed8;
  unaff_EDI[6] = PTR_LAB_00399ec0;
  unaff_EDI[0x1c] = PTR_FUN_00399ea4;
  unaff_EDI[0x1d] = PTR_LAB_00399e90;
  unaff_EDI[2] = 1;
  unaff_EDI[1] = 2;
  if (unaff_EDI[4] != in_EAX) {
    FUN_0008f6a0();
  }
  unaff_EDI[0x19] = 0;
  return;
}
