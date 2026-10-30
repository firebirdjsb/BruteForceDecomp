/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD1AB01676D1A0AB988690D5FC256A1033CF13D2E0EA2FF78D79D8A9B2EEAECC
 * Entry: 0x002bec00, Ghidra index: 9981, label: FUN_002bec00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
void FUN_002bec00(void)

{
  int in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 *puVar4;
  
  unaff_ESI[1] = in_EAX + -1;
  *unaff_ESI = in_EAX;
  unaff_ESI[2] = 0;
  unaff_ESI[4] = 0;
  puVar1 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(in_EAX * 0xc);
  puVar4 = puVar1;
  for (uVar2 = in_EAX * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  unaff_ESI[3] = (int)puVar1;
  return;
}
