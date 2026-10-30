/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7191F12F83E6420A1C72065B5740CCED56BBB7F7BDAD10D1052FAFE8A2126EEB
 * Entry: 0x002ea03c, Ghidra index: 10573, label: FUN_002ea03c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386ae8;
void FUN_002ea03c(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *in_ECX;
  char *pcVar4;
  
  *in_ECX = PTR_FUN_00386ae8;
  iVar2 = *(int *)(param_1 + 8);
  in_ECX[2] = iVar2;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar2 == 0) {
    in_ECX[1] = pcVar3;
  }
  else {
    pcVar4 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = (char *)thunk_FUN_00237ea0(pcVar3 + (1 - (int)pcVar4));
    in_ECX[1] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      pcVar4 = *(char **)(param_1 + 4);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
  }
  return;
}
