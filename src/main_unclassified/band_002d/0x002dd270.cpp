/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16F321CF9DF1811433C92EAECCFA953BBEA63FB6FE4E59C83DBF7B8AA08B9B55
 * Entry: 0x002dd270, Ghidra index: 10318, label: FUN_002dd270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e4d8;
extern uint32_t PTR_FUN_0038e640;
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_LAB_0038e4c4;
extern uint32_t PTR_LAB_0038e4e0;
void FUN_002dd270(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_EDI;
  
  unaff_EDI[2] = in_EAX;
  unaff_EDI[4] = 0xffffffff;
  unaff_EDI[3] = 0xffffffff;
  unaff_EDI[5] = PTR_FUN_0038e640;
  puVar1 = unaff_EDI + 6;
  *unaff_EDI = PTR_LAB_0038e4e0;
  unaff_EDI[5] = PTR_FUN_0038e4d8;
  iVar3 = 2;
  do {
    *puVar1 = PTR_LAB_0038e4c4;
    puVar1 = puVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined2 *)(unaff_EDI + 0xe) = 8;
  *(undefined2 *)((int)unaff_EDI + 0x3a) = 0;
  *(undefined2 *)(unaff_EDI + 0x10) = 1;
  uVar2 = (*(code *)PTR_FUN_003bc650)(0x20);
  unaff_EDI[0xf] = uVar2;
  FUN_002dd220(unaff_EDI);
  FUN_002dd220(unaff_EDI);
  FUN_002dd100(unaff_EDI);
  return;
}
