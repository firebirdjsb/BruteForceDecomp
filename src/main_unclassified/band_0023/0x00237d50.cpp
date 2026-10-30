/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20B5829F13B008C46402E66E7E4DE325D86D3DAFD9F47BD3574989A7E262F859
 * Entry: 0x00237d50, Ghidra index: 7856, label: FUN_00237d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443080;
extern uint32_t DAT_00469900;
extern uint32_t DAT_0046cf94;
extern uint32_t DAT_0046cf98;
extern uint32_t DAT_0046cf9c;
extern uint32_t DAT_0046cfa0;
undefined1 FUN_00237d50(void)

{
  undefined1 uVar1;
  int iVar2;
  int unaff_ESI;
  
  RtlEnterCriticalSection(&DAT_0046cfa0);
  iVar2 = FUN_00258f70(&DAT_00443080);
  if (iVar2 != 0) {
    DAT_0046cf98 = iVar2 + unaff_ESI;
    DAT_00469900 = 1;
    DAT_0046cf94 = iVar2;
    DAT_0046cf9c = iVar2;
  }
  uVar1 = DAT_00469900;
  RtlLeaveCriticalSection(&DAT_0046cfa0);
  return uVar1;
}
