/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 696BA0847F669067B99CBCA65DBFB87053582B1F8F993D0CC943C8DF21B97A24
 * Entry: 0x00237da0, Ghidra index: 7857, label: FUN_00237da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc65c;
extern uint32_t DAT_00443080;
extern uint32_t DAT_00469900;
extern uint32_t DAT_00469901;
extern uint32_t DAT_0046cf98;
extern uint32_t DAT_0046cf9c;
extern uint32_t DAT_0046cfa0;
int FUN_00237da0(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int unaff_EDI;
  
  RtlEnterCriticalSection(&DAT_0046cfa0);
  if ((DAT_00469900 == '\0') || (DAT_00469901 != '\0')) {
    iVar1 = FUN_00258f70(&DAT_00443080);
    RtlLeaveCriticalSection(&DAT_0046cfa0);
    return iVar1;
  }
  uVar2 = DAT_0046cf9c % *(uint *)(&DAT_003bc65c + in_EAX * 4);
  iVar1 = 0;
  if (uVar2 != 0) {
    iVar1 = *(uint *)(&DAT_003bc65c + in_EAX * 4) - uVar2;
  }
  uVar2 = iVar1 + unaff_EDI + DAT_0046cf9c;
  if (DAT_0046cf98 < uVar2) {
    RtlLeaveCriticalSection(&DAT_0046cfa0);
    return iVar1;
  }
  iVar1 = DAT_0046cf9c + iVar1;
  DAT_0046cf9c = uVar2;
  RtlLeaveCriticalSection(&DAT_0046cfa0);
  return iVar1;
}
