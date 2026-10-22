/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7B519DC0AFDA1B4239590172EAF06413BD187B8F65C855B503D234488C37675
 * Entry: 0x002953d0, Ghidra index: 9315, label: FUN_002953d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040465c;
extern uint32_t DAT_00404660;
extern uint32_t DAT_00404674;
extern uint32_t DAT_00404678;
extern uint32_t DAT_0040467c;
void FUN_002953d0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  char *in_ECX;
  undefined4 *unaff_EBX;
  int iVar3;
  
  iVar3 = in_EAX + -0xd;
  if (*in_ECX == '@') {
    FUN_002eaa86();
    return;
  }
  if (*in_ECX == '(') {
    *unaff_EBX = DAT_00404674;
    unaff_EBX[1] = DAT_00404678;
    *(undefined1 *)(unaff_EBX + 2) = DAT_0040467c;
    return;
  }
  iVar2 = FUN_002eb0b0();
  if ((iVar2 != 0) && (iVar2 - (int)in_ECX < iVar3)) {
    iVar3 = iVar2 - (int)in_ECX;
  }
  FUN_002eaa86();
  puVar1 = (undefined4 *)(iVar3 + 8 + (int)unaff_EBX);
  *puVar1 = DAT_0040465c;
  *(undefined1 *)(puVar1 + 1) = DAT_00404660;
  return;
}
