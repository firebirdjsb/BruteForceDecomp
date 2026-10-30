/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD51716996F3235979018200E438C5E59C2E828D328E8A565A41F880E8925F7F
 * Entry: 0x002ef8b7, Ghidra index: 10716, label: __getbuf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040f4d0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2003 Release */

void __getbuf(undefined4 *param_1)

{
  int iVar1;
  
  _DAT_0040f4d0 = _DAT_0040f4d0 + 1;
  iVar1 = thunk_FUN_00237ea0(0x1000);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}
