/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A928740EB9D568D151427CA128D028586B012B14EC1D7FF5B87D9462698C16F8
 * Entry: 0x000f53a0, Ghidra index: 3072, label: FUN_000f53a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
void FUN_000f53a0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_224 [540];
  uint local_8;
  
  cVar1 = FUN_001ed100(local_224);
  if ((((cVar1 != '\0') && (1 < ((local_8 & 4) >> 2) + ((local_8 & 2) >> 1) + 1 + (local_8 & 1))) &&
      (cVar1 = FUN_001ec370(), cVar1 != '\0')) && (iVar2 = FUN_001ec340(), iVar2 == 0)) {
    local_8 = local_8 & 0xfffffff7;
    FUN_001ece40(&DAT_0046d064);
    FUN_001f0010();
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar3 + 4))(param_2);
  }
  return;
}
