/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2EB84D072B74899D6B949509870B6EE30ACEC6B7B1B91CD61F38169E3AB25B5
 * Entry: 0x002f3f21, Ghidra index: 10848, label: XDeleteSaveGame
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__XDeleteSaveGame(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char local_148 [324];
  
  builtin_strncpy(local_148,"\\??\\",5);
  pcVar2 = local_148;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  iVar5 = (int)pcVar3 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar5] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  pcVar2 = local_148;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_002f387b();
  pcVar3 = local_148;
  pcVar2 = local_148 + 1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  /* 0x002F3FA2: LEA ESI,[EBP+EDI-0x144] addresses the NUL
   * terminator of local_148 after the prefixed save path.
   * The original byte-copy loop appends the metadata filename here. */
  char *guest_append_cursor = local_148 + (pcVar3 - (local_148 + 1));
  pcVar4 = "\\SaveMeta.xbx";
  do {
    cVar1 = *pcVar4;
    *guest_append_cursor++ = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = FUN_002f3be2();
  pcVar3[(int)(local_148 + -(int)pcVar2)] = '\0';
  if (iVar5 == 0) {
    pcVar3[(int)(local_148 + (1 - (int)pcVar2))] = '\0';
    pcVar3[(int)(local_148 + -(int)pcVar2)] = '\\';
    FUN_002f869e();
    RtlNtStatusToDosError();
  }
  return;
}
