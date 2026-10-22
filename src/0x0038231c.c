/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2188124B10AE6046A738DDAF74ED4C60F53A0D6EB2D5864EAAD7CA2387180FD0
 * Entry: 0x0038231c, Ghidra index: 13591, label: FUN_0038231c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-tied callee source: FUN_00382218; callback ABI remains ABI_UNVERIFIED.
 * Provisional C11 declaration only; not a verified link/runtime contract. */
extern void FUN_00382218(int param_1,int param_2);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412723;
extern uint32_t DAT_004127a0;
void FUN_0038231c(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = DAT_004127a0;
  iVar1 = *(int *)(DAT_004127a0 + 0xc);
  if (DAT_00412721 == '\0') {
    DAT_00412723 = 0;
    pcVar3 = (char *)FUN_00380f6c();
    if (*pcVar3 == '\0') {
      FUN_003848ff(iVar1 + 0x18,*(byte *)(iVar2 + 4) & 0x7f,FUN_00382218,iVar2);
    }
    else {
      FUN_00383ef5(pcVar3,*(byte *)(iVar2 + 4) & 0x7f,iVar2,0);
    }
  }
  else {
    FUN_0038267d(0,DAT_004127a0);
  }
  return;
}
