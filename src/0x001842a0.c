/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0C803D92E2AB3B42FC0E7285D493EA214E692A62EDFB47EECD2220C5C6D29DD
 * Entry: 0x001842a0, Ghidra index: 5216, label: FUN_001842a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bd420;
extern uint32_t PTR_s_AM_FORWARD_003bd41c;
undefined4 FUN_001842a0(int param_1,int param_2,undefined4 *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  uint local_18 [4];
  undefined4 local_8;
  uint local_4;
  
  iVar3 = 0;
  if (PTR_s_AM_FORWARD_003bd41c != (undefined *)0x0) {
    ppuVar4 = &PTR_s_AM_FORWARD_003bd41c;
    do {
      if (((undefined *)(param_2 - param_1) == ppuVar4[-1]) &&
         (iVar2 = __strnicmp(*ppuVar4,param_1,(undefined *)(param_2 - param_1)), iVar2 == 0)) {
        *param_3 = (&DAT_003bd420)[iVar3 * 3];
        return 0;
      }
      ppuVar1 = ppuVar4 + 3;
      ppuVar4 = ppuVar4 + 3;
      iVar3 = iVar3 + 1;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  local_4 = 0xf;
  local_18[0] = local_18[0] & 0xffffff00;
  local_8 = 0;
  FUN_0015ec60(local_18,local_18);
  if (local_4 < 0x10) {
    return 0x80004005;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_18[0]);
}
