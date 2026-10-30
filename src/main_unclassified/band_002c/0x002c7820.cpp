/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1664A3910330908BCB1182B5661EA3B482C65E69B2F8FC143E72BAA301042142
 * Entry: 0x002c7820, Ghidra index: 10103, label: FUN_002c7820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e694;
extern uint32_t PTR_FUN_003bc650;
void FUN_002c7820(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *unaff_EBX;
  char *pcVar5;
  
  *unaff_EBX = &PTR_FUN_0038e694;
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
    unaff_EBX[1] = pcVar3;
    unaff_EBX[2] = 0;
    return;
  }
  unaff_EBX[1] = 0;
  unaff_EBX[2] = 0;
  return;
}
