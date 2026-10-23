/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E73BAA54FA733204DC1BF412B1A7741D50AE6B4C88BB133CF90B189D5C3AE2B0
 * Entry: 0x0012e870, Ghidra index: 3813, label: FUN_0012e870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040cb9c;
void FUN_0012e870(char *param_1)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  char *pcVar3;
  int unaff_EDI;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  pcVar3 = &DAT_0040cb9c;
  if (*(char **)(in_EAX + 800) != (char *)0x0) {
    pcVar3 = *(char **)(in_EAX + 800);
  }
  local_4 = 0xf;
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  FUN_00132dc0(0x20);
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  FUN_00087af0();
  *(undefined4 *)(unaff_EDI + 0x18) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined1 *)(unaff_EDI + 4) = 0;
  FUN_0001f4f0(local_1c,0,0xffffffff);
  if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18);
  }
  return;
}
