/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70FD811E6B5EAE6B14C1B48AD006CB4B25CA5B29962F82969965AC22321A265E
 * Entry: 0x000b1a40, Ghidra index: 2129, label: FUN_000b1a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b25a0(int param_1,int *param_2);
extern void FUN_000bb9d0(int *param_1);

extern uint32_t DAT_00469ab0;
void FUN_000b1a40(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 100);
  iVar2 = 0xf;
  do {
    iVar1 = FUN_000b9120(DAT_00469ab0);
    if (iVar1 != 0) {
      if (param_1 + 0x2c != 0) {
        FUN_000b25a0(param_1 + 0x2c,iVar1);
      }
      *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) & 0xfb;
    }
    *piVar3 = iVar1;
    FUN_000bb9d0(iVar1);
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}
