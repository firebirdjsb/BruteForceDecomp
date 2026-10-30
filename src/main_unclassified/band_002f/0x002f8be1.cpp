/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2604A27BF89A2CCC3627CFBFEC23CC392E4AFB72C344CB7CA2D1D33F6BC38AED
 * Entry: 0x002f8be1, Ghidra index: 10962, label: FUN_002f8be1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Verified matching-XBE immediate guest32 addresses below are NOT
 * safe host pointers/callbacks. ABI and native relocation remain TODO. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a9080;
extern uint32_t DAT_004a90a0;
extern uint32_t DAT_004a90c8;
extern uint32_t _DAT_004a90cc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f8be1(void)

{
  int iVar1;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  uint local_8;
  
  KeInitializeDpc(&DAT_004a9080,UINT32_C(0x002f8bcf),0);
  KeInitializeTimerEx(&DAT_004a90a0,0);
  DAT_004a90c8 = 0;
  _DAT_004a90cc = 0;
  if (((*(uint8_t *)(uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x00386380)) & 8) == 0) {
    iVar1 = XAPILIB__XQueryValue(0x11,local_10,&local_8,4,local_c);
    if (iVar1 == 0) {
      DAT_004a90c8 = local_8 & 1;
    }
    else {
      _DAT_004a90cc = 1;
    }
  }
  XAPILIB__XAutoPowerDownResetTimer();
  return;
}
