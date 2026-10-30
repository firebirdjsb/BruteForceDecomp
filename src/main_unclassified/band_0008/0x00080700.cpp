/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A111DD493B6719282B41CC82F00F0FDAE6966E0EFD212F8A24EEF67002DA2F8B
 * Entry: 0x00080700, Ghidra index: 1513, label: FUN_00080700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0007f620(void);
extern undefined4 FUN_00087bf0(char *param_1);
extern undefined4 FUN_0007f5b0(void);

extern uint32_t DAT_00469b58;
undefined4 FUN_00080700(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  FUN_0007f620();
  iVar2 = FUN_00087bf0(param_2);
  if (-1 < iVar2) {
    while( true ) {
      pcVar1 = *(char **)(unaff_ESI + 0x6b4);
      if ((*(int *)(pcVar1 + 0x48) == 0) || (pcVar1[0xc] != '\0')) {
        return 0;
      }
      if (*pcVar1 == '\0') {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(pcVar1 + 8);
      }
      if ((iVar2 != *(int *)(unaff_ESI + 0x5c0)) && ((-(uint)(iVar2 != 0) & 0x44c) != 0)) break;
      XAPILIB__SleepEx(0x10,1);
    }
    FUN_0007f5b0();
    *(undefined1 *)(DAT_00469b58 + 0x58) = 1;
  }
  return 1;
}
