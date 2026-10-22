/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59322BD3EFCBCB7BA467200336E256C6CCF11269C7ECFDD3FACA4A1A3802E7B9
 * Entry: 0x0035a8c0, Ghidra index: 13177, label: FUN_0035a8c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b50cc;
extern uint32_t DAT_004b50d0;
extern uint32_t DAT_004b50d4;
extern uint32_t DAT_004b50dc;
extern uint32_t DAT_004b50ec;
extern uint32_t _DAT_004b50d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0035a8c0(int param_1)

{
  int iVar1;
  
  if (DAT_004b50cc != -1) {
    if (DAT_004b50cc == param_1) goto LAB_0035a8e8;
    if (DAT_004b50d4 != 0) {
      return (undefined1 *)0x0;
    }
  }
  DAT_004b50cc = param_1;
LAB_0035a8e8:
  if (DAT_004b50cc == 0) {
    DAT_004b50dc = DSOUND__DirectSoundCreate;
  }
  else {
    _DAT_004b50d8 = 0;
  }
  DAT_004b50d0 = (uint)(DAT_004b50cc == 0);
  iVar1 = FUN_0035a590();
  if (iVar1 == 0) {
    return (undefined1 *)0x0;
  }
  DAT_004b50ec = DAT_004b50ec + -1;
  if ((((DAT_004b50ec == 0) && (DAT_004b50d0 != 0)) && (DAT_004b50cc != 0)) && (DAT_004b50cc != -1))
  {
    DSOUND__IDirectSound_Release(DAT_004b50cc);
    DAT_004b50cc = -1;
  }
  return &LAB_0035a650;
}
