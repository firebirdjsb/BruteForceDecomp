/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5B3BAB9507A5A4B71447C224D87723D38E3F0BA735DBDF7A060F697DFF0F7A0
 * Entry: 0x00072940, Ghidra index: 1284, label: FUN_00072940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00072850(int param_1);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

extern uint32_t switchD_000729a0_default[];
void FUN_00072940(void)

{
  int unaff_EBX;
  int iVar1;
  int unaff_EDI;
  
  if (unaff_EBX < 0) {
    return;
  }
  if (6 < unaff_EBX) {
    return;
  }
  if ((*(int *)(unaff_EDI + 0x38) != 0) &&
     (FUN_00072850(unaff_EDI), *(int *)(unaff_EDI + 0x38) != 0)) {
    FUN_0008f6a0(0);
  }
  if ((*(int *)(unaff_EDI + 0x38 + unaff_EBX * 8) != 0) &&
     (FUN_00072850(unaff_EDI), *(int *)(unaff_EDI + 0x38 + unaff_EBX * 8) != 0)) {
    FUN_0008f6a0(0);
  }
  switch(unaff_EBX) {
  case 0:
    if ((*(int *)(unaff_EDI + 0x40) != 0) &&
       (FUN_00072850(unaff_EDI), *(int *)(unaff_EDI + 0x40) != 0)) {
      FUN_0008f6a0(0);
    }
    if ((*(int *)(unaff_EDI + 0x48) != 0) &&
       (FUN_00072850(unaff_EDI), *(int *)(unaff_EDI + 0x48) != 0)) {
      FUN_0008f6a0(0);
    }
    if ((*(int *)(unaff_EDI + 0x50) != 0) &&
       (FUN_00072850(unaff_EDI), *(int *)(unaff_EDI + 0x50) != 0)) {
      FUN_0008f6a0(0);
    }
    if ((*(int *)(unaff_EDI + 0x58) != 0) &&
       (FUN_00072850(unaff_EDI), *(int *)(unaff_EDI + 0x58) != 0)) {
      FUN_0008f6a0(0);
    }
  case 2:
    if ((*(int *)(unaff_EDI + 0x60) != 0) &&
       (FUN_00072850(unaff_EDI), *(int *)(unaff_EDI + 0x60) != 0)) {
      FUN_0008f6a0(0);
    }
    if (*(int *)(unaff_EDI + 0x68) == 0) {
      return;
    }
    FUN_00072850(unaff_EDI);
    iVar1 = unaff_EDI + 100;
    break;
  case 1:
    if ((*(int *)(unaff_EDI + 0x50) != 0) &&
       (FUN_00072850(unaff_EDI), *(int *)(unaff_EDI + 0x50) != 0)) {
      FUN_0008f6a0(0);
    }
    if (*(int *)(unaff_EDI + 0x58) == 0) {
      return;
    }
    FUN_00072850(unaff_EDI);
    iVar1 = unaff_EDI + 0x54;
    break;
  case 3:
  case 4:
    if (*(int *)(unaff_EDI + 0x40) == 0) {
      return;
    }
    FUN_00072850(unaff_EDI);
    iVar1 = unaff_EDI + 0x3c;
    break;
  case 5:
  case 6:
    if (*(int *)(unaff_EDI + 0x48) == 0) {
      return;
    }
    FUN_00072850(unaff_EDI);
    iVar1 = unaff_EDI + 0x44;
    break;
  default:
    goto switchD_000729a0_default;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_0008f6a0(0);
  }
switchD_000729a0_default:
  return;
}
