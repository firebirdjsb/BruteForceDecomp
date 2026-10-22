/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41328B53DA8374C2FA25CF64444FC34C534E285C4F9D2BE984E6DFBA785FE349
 * Entry: 0x00385d25, Ghidra index: 13681, label: FUN_00385d25
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fcc;
void FUN_00385d25(undefined1 param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = DAT_004a8fcc;
  if (DAT_004a8fcc != 0) {
    DAT_004a8fcc = *(int *)(DAT_004a8fcc + 0x14);
  }
  pbVar1 = (byte *)(iVar2 + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  *(undefined1 *)(iVar2 + 0x1f) = param_1;
  return;
}
