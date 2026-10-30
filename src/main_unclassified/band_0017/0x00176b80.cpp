/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BC63F433FD0AA1B52456EB4224B03DDA1010A7A5F4FD3B691F1CFCF04F1DC56
 * Entry: 0x00176b80, Ghidra index: 4942, label: FUN_00176b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399efc;
extern uint32_t PTR_FUN_0039a004;
extern uint32_t PTR_FUN_0039a348;
extern uint32_t PTR_FUN_0039a6e0;
extern uint32_t PTR_FUN_0039c2a0;
extern uint32_t PTR_LAB_00399f1c;
extern uint32_t PTR_LAB_00399f30;
extern uint32_t PTR_LAB_00399f48;
extern uint32_t PTR_LAB_00399f68;
extern uint32_t PTR_LAB_00399f84;
extern uint32_t PTR_LAB_00399f98;
extern uint32_t PTR_LAB_00399fb0;
extern uint32_t PTR_LAB_00399fd0;
extern uint32_t PTR_LAB_00399fec;
void FUN_00176b80(void)

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
  unaff_EDI[0x1f] = PTR_FUN_00399efc;
  unaff_EDI[0x20] = PTR_FUN_0039c2a0;
  unaff_EDI[0x21] = PTR_FUN_0039a6e0;
  unaff_EDI[0x1e] = PTR_LAB_00399f68;
  unaff_EDI[0x1f] = PTR_LAB_00399f48;
  unaff_EDI[0x20] = PTR_LAB_00399f30;
  unaff_EDI[0x21] = PTR_LAB_00399f1c;
  unaff_EDI[0x22] = 1;
  *unaff_EDI = PTR_FUN_0039a004;
  unaff_EDI[6] = PTR_LAB_00399fec;
  unaff_EDI[0x1e] = PTR_LAB_00399fd0;
  unaff_EDI[0x1f] = PTR_LAB_00399fb0;
  unaff_EDI[0x20] = PTR_LAB_00399f98;
  unaff_EDI[0x21] = PTR_LAB_00399f84;
  unaff_EDI[2] = 1;
  unaff_EDI[1] = 2;
  if (unaff_EDI[4] != in_EAX) {
    FUN_0008f6a0();
  }
  unaff_EDI[0x19] = 0;
  unaff_EDI[0x1c] = 0;
  *(undefined1 *)(unaff_EDI + 0x23) = 0;
  return;
}
