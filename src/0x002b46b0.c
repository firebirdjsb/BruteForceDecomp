/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94F749039456FD5E1FB32B4C0BA032714796A8332A8FA6E8E95CA47EC71CED55
 * Entry: 0x002b46b0, Ghidra index: 9787, label: FUN_002b46b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
void FUN_002b46b0(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int *unaff_EBX;
  char *pcVar5;
  
  if (*unaff_EBX != 0) {
    (*(code *)PTR_FUN_003bc654)(*unaff_EBX);
    return;
  }
  if (in_EAX != (char *)0x0) {
    pcVar2 = in_EAX;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = pcVar2 + (1 - (int)(in_EAX + 1));
    pcVar3 = (char *)(*(code *)PTR_FUN_003bc650)(pcVar2);
    pcVar5 = pcVar3;
    for (uVar4 = (uint)pcVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)in_EAX;
      in_EAX = in_EAX + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar4 = (uint)pcVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar5 = *in_EAX;
      in_EAX = in_EAX + 1;
      pcVar5 = pcVar5 + 1;
    }
    *unaff_EBX = (int)pcVar3;
    return;
  }
  *unaff_EBX = 0;
  return;
}
